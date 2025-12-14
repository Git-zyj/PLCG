/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] |= (((((-(arr_15 [i_4] [i_1] [i_4] [i_3] [i_4])))) ? (-2147483647 - 1) : (arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_2])));
                            var_19 = ((((((arr_9 [i_0] [i_1] [i_2] [0]) ? (arr_13 [i_0] [13] [i_2] [i_3] [i_4] [i_2] [i_2]) : (arr_2 [i_4])))) ? (((arr_15 [i_0] [13] [i_2] [i_0] [18]) ? (arr_0 [14] [i_4]) : (arr_0 [i_0] [i_1]))) : (arr_3 [i_0 - 1])));
                        }
                        var_20 = (((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))) ? ((~(arr_3 [i_0 - 1]))) : (arr_3 [i_0 - 1]));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_21 = (max(var_21, (((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))))));
                            var_22 = (((((~(min((arr_1 [i_5]), (arr_5 [i_0])))))) ? 165 : (((arr_7 [19] [i_0 + 1]) ? (arr_0 [i_1] [i_5]) : ((((arr_15 [i_0] [i_1] [i_2] [i_3] [i_5]) ? (arr_14 [i_2] [i_1] [i_0]) : (arr_3 [i_0 + 1]))))))));
                            var_23 = (min(var_23, (((58730249 ? 7 : 511)))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_24 *= (max((((arr_1 [i_1]) ? (arr_9 [i_0] [i_1] [i_2] [i_6]) : ((max(-428140093, (-32767 - 1)))))), (arr_19 [1] [13] [i_2] [i_2] [1] [12] [12])));
                            var_25 = (min(-428140093, 1069547520));
                        }
                    }
                }
            }
        }
        var_26 = (max(((-9 ? 163 : -1930589030)), (min((arr_4 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0])))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_27 = max((arr_10 [i_7] [9] [i_7] [i_7]), (arr_10 [i_7] [i_7] [i_7] [i_7]));
        var_28 = (((((min(32512, -1))) ? (arr_12 [i_7] [i_7]) : (((arr_3 [i_7]) ? (arr_20 [i_7] [21] [i_7] [i_7] [i_7] [i_7]) : (arr_23 [i_7] [i_7]))))));
        var_29 |= ((((((-(arr_4 [i_7] [i_7] [i_7])))) ? (arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((arr_0 [i_7] [i_7]) ? (arr_6 [i_7] [i_7]) : (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
    }
    var_30 &= var_0;
    #pragma endscop
}
