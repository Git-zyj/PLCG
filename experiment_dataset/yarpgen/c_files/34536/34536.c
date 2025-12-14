/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((var_6 ? (min((arr_1 [i_0] [i_0]), (((arr_3 [i_0] [i_1]) >> (var_7 - 53240))))) : ((var_8 ? ((var_8 + (arr_1 [i_0] [i_1]))) : (arr_4 [i_0] [i_0] [i_0 + 1])))));
                arr_6 [i_0] = (arr_2 [i_1]);
                var_11 *= var_3;

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] = ((var_0 ? (arr_3 [i_0] [i_1]) : ((((arr_7 [i_2 + 1] [i_0] [i_2]) < (arr_12 [1] [i_1] [i_2] [i_0]))))));
                        arr_14 [12] [i_1] [1] [i_0] [i_3] [i_2 + 1] = (arr_8 [i_0] [1] [i_0]);
                    }
                    arr_15 [i_0] [18] [i_0] = (arr_7 [i_0 + 1] [i_0] [i_2 - 1]);
                }
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] = var_0;
                        var_12 |= (min((arr_8 [i_5] [8] [i_4]), (max((((var_8 != (arr_2 [i_0])))), ((var_4 ? var_3 : var_1))))));
                        arr_24 [i_0] [i_1] [i_0] [i_5] = var_4;
                        arr_25 [i_5] [i_1] [i_1] [i_5] [i_0] [19] = (((((arr_8 [i_0] [i_0 - 3] [i_0 - 3]) ? ((156 ? 4294443008 : 1)) : var_1)) >= 524287));
                        arr_26 [i_0 - 1] [6] [i_5] [i_0 - 1] [i_0 - 1] &= ((var_6 ? ((max((arr_22 [i_0 - 1] [i_0 - 1] [i_4 + 2] [i_5]), var_4))) : (min((arr_19 [i_5 - 1] [i_5] [i_5] [i_5]), var_8))));
                    }
                    var_13 = (max(var_13, ((((arr_18 [i_0 + 1] [i_0] [i_1] [i_4 - 1]) ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : ((((6 ? 35452 : 1221179277133203211)) - (((2534036763 ? (arr_17 [i_4] [14] [i_4]) : 524267))))))))));
                    var_14 ^= (((var_5 + 2147483647) << (((((var_4 != (min(var_0, var_6))))) - 1))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_29 [i_0] = (arr_9 [2] [i_0] [23] [i_6]);
                    arr_30 [i_0] [i_0] = (arr_28 [i_0] [i_0 + 1] [i_1] [i_6]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_15 *= ((946255250 ? 1 : 524274));
                        arr_41 [i_8] [i_8] = (arr_21 [i_8] [i_8 + 3] [i_8 + 1] [12]);
                        arr_42 [3] [i_8] [i_8] [i_9] [i_8] [i_9] = (((arr_35 [i_7 - 1]) ? (arr_35 [i_7]) : (arr_35 [i_9])));
                    }
                }
            }
        }
        arr_43 [i_7] = (46101 <= (arr_19 [i_7] [i_7 + 1] [i_7] [i_7 + 1]));
    }
    #pragma endscop
}
