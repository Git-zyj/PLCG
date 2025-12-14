/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [2] = ((-970354398 / ((8128 ? (-9223372036854775807 - 1) : (arr_2 [i_0 - 1] [i_0])))));
        arr_4 [i_0] [i_0] = (max((((((arr_2 [i_0 + 1] [i_0 + 2]) + 2147483647)) << (((((arr_2 [i_0 - 2] [i_0 + 3]) + 1385700390)) - 27)))), (((arr_1 [i_0] [i_0 - 1]) >> (((arr_1 [i_0] [i_0 + 3]) - 40374))))));
        arr_5 [i_0] = 23884;
    }
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {
                arr_12 [i_1] [i_2] = (min((22389897 || 0), ((!((!(arr_8 [i_2] [i_1 - 1])))))));

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    arr_15 [15] [i_3] [0] = (((arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]) << ((((-((max((arr_6 [i_3]), (arr_6 [i_1])))))) + 55746))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_20 [10] [1] [i_3] [i_2] [1] = 24792;
                        arr_21 [i_1 - 3] [i_1 - 3] [i_3 + 1] [i_1] [i_3] [i_3 + 1] |= var_15;
                        arr_22 [13] = 22;
                        arr_23 [i_1] [i_1 - 1] [14] [i_1 + 1] [12] [i_1] = 25424;
                        arr_24 [i_1 - 2] [i_3] [i_2] [i_1 - 2] = (!(((-(arr_19 [i_1 - 3] [i_2] [8])))));
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_28 [i_1] [i_2] [i_1] [i_3 + 1] [i_5] [7] = (min((2147483643 <= 871250500), ((+(((arr_18 [i_2]) ? 1 : 1))))));
                        arr_29 [i_1] [i_2] [i_3] = 43228;
                        arr_30 [i_1] [i_5] [i_5] = (max(((((((arr_17 [i_2] [i_2] [i_3] [i_2] [i_5] [i_1]) / (arr_27 [2] [i_3 + 1] [1] [1] [4] [i_3 + 1])))) ? -var_7 : (~var_1))), (arr_9 [i_1 + 3] [i_1])));
                        arr_31 [i_5] = ((-1472333863 - (13721139006402429162 <= 51)));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_34 [i_1 + 1] [i_1] [i_1] = 19861;
                        arr_35 [i_1] [i_2] = ((var_13 ? (((min((max(15735, 20)), -77)))) : (((-2737338520568536043 + 9223372036854775807) << (1 - 1)))));
                        arr_36 [i_1] [i_1] [6] [i_1] [i_1] = max(var_14, var_13);
                    }
                    arr_37 [i_1] [i_2] [8] [1] = ((!((((max(var_9, 7081595578921466941)) & (((1 ? var_2 : 0))))))));
                    arr_38 [i_1] = ((max(1461985905, 19739)));
                }
            }
        }
    }
    #pragma endscop
}
