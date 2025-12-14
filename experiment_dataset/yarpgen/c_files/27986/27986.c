/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = (max(((((((arr_0 [8]) & (arr_1 [i_0] [i_0])))) ? (min((arr_1 [i_0] [i_0]), var_7)) : (((min((arr_0 [4]), (arr_0 [i_0]))))))), (arr_0 [6])));
        var_13 = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((109 == (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = (min((((((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ^ (arr_1 [i_0] [i_0])))), (min(((min(1073741824, (arr_0 [i_0])))), (max(var_7, (arr_0 [i_0])))))));
        var_14 ^= ((((((arr_0 [i_0]) / (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [4] = min((arr_0 [i_1]), (((!((max((arr_4 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))))));
        var_15 = (max(var_15, (arr_3 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (max((((!(arr_6 [i_1] [i_2] [i_1])))), ((-(arr_1 [i_1] [i_1])))));
            var_17 = -1;
            arr_9 [i_2] [i_1] [i_1] = (min((min((arr_8 [i_1] [i_1] [i_1]), (arr_7 [i_1] [i_1]))), ((((arr_1 [i_1] [i_2]) | (arr_1 [5] [i_2]))))));
            arr_10 [i_2] = ((((max((arr_7 [13] [i_1]), 1))) ? ((((max((arr_1 [i_2] [i_1]), (arr_6 [i_2] [i_1] [i_1])))) ? (max(var_7, (arr_0 [i_1]))) : 19)) : ((+(((arr_6 [3] [i_2] [i_1]) - (arr_7 [i_1] [i_2])))))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_18 *= (arr_7 [i_1] [1]);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_19 &= arr_6 [i_1] [i_3] [i_4];

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_4] [i_4] [i_4] [i_4] = (((arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6]) ? (arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6]) : (arr_22 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6])));
                            arr_24 [i_4] [i_4] [i_4] = var_7;
                            arr_25 [i_1] [i_4] [i_4] [11] [1] = (((((~(arr_0 [i_1])))) ? (arr_16 [i_6 + 1] [i_6 - 1] [i_4 - 1]) : (arr_20 [i_3] [i_4] [i_3])));
                        }
                    }
                }
            }
            arr_26 [i_1] [i_3] = (max((((((min((arr_13 [i_3] [i_1]), (arr_6 [i_3] [i_3] [i_3])))) ? (!var_0) : (arr_12 [i_3])))), ((1 ? (arr_19 [i_1] [i_1] [i_1]) : (arr_4 [i_1] [i_1])))));
        }
    }
    var_20 = var_11;
    var_21 = 1;
    #pragma endscop
}
