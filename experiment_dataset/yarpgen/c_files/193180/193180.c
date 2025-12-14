/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((-1 - ((((((arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_4 - 1]) ? var_4 : (arr_1 [i_0])))) ? (arr_10 [i_0] [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1]) : (arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_4])))));
                                arr_13 [i_2] [i_2] [i_2 - 2] [i_0] [i_2] = (arr_6 [17] [13] [17] [13]);
                                var_14 = (max((arr_9 [i_3] [i_3] [i_4 - 1] [i_4] [i_4]), (((arr_9 [i_2] [i_4] [i_4 - 1] [14] [i_4]) ? var_8 : (arr_9 [2] [i_0] [i_4 - 1] [i_4] [1])))));
                            }
                        }
                    }
                    var_15 = (min(var_15, var_7));
                }
            }
        }
    }
    var_16 = (max((((!((min(2619706507, var_10)))))), (~-var_4)));

    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        var_17 = (((arr_5 [i_5 + 2]) ? var_7 : 2619706524));
        arr_17 [0] [i_5] = var_1;
        var_18 = (((((-(((arr_6 [i_5] [i_5] [i_5 + 2] [i_5 + 2]) ? var_8 : var_0))))) ? (((((arr_16 [i_5 - 1]) ? var_9 : var_12)))) : (arr_7 [i_5] [2] [i_5] [i_5] [1])));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_19 = ((((((arr_5 [i_6]) ? (max(var_11, (arr_15 [i_6] [i_6]))) : 2619706508))) ? var_8 : (((arr_14 [i_6]) ? (arr_15 [i_6] [i_6]) : (max(var_9, var_0))))));
        arr_22 [10] [10] &= ((~(min((arr_8 [i_6] [i_6]), 2619706510))));
        var_20 = (((((var_2 ? ((var_3 << (var_3 - 54))) : (var_5 || var_11)))) && (((((((arr_10 [i_6] [i_6] [7] [i_6] [4] [i_6]) << (var_6 - 156)))) ? (arr_16 [i_6]) : (arr_7 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_21 = (min(var_21, ((((((-(arr_23 [i_7])))) ? (((((arr_23 [i_7]) - (arr_24 [11]))))) : (arr_24 [8]))))));
        var_22 = (((((((arr_23 [i_7]) ? (arr_23 [i_7]) : (arr_24 [i_7]))) < (((arr_24 [i_7]) ? var_11 : (arr_24 [i_7]))))) ? (arr_23 [i_7]) : (((((arr_24 [i_7]) ? var_4 : var_0))))));
    }
    #pragma endscop
}
