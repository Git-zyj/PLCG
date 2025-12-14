/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (-127 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(0, -2070702151));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_21 = ((var_12 ? (((arr_4 [i_3]) ? var_16 : (arr_1 [i_0]))) : 0));
                        var_22 = 2032975123;
                        var_23 = (-1 ? var_7 : (arr_3 [i_0] [i_1]));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_24 -= (((arr_9 [i_4 + 2] [i_4] [i_4] [i_4 + 1]) ? (arr_10 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 1]) : (arr_10 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 2])));
                            arr_13 [0] [i_4 + 1] = ((arr_6 [i_0] [i_0] [i_2] [i_5]) ? -1 : (arr_11 [i_0] [i_1] [i_4 - 1] [i_1] [i_1]));
                            var_25 |= (((var_7 + 2147483647) << (((((arr_6 [i_0] [i_0] [i_4 + 2] [i_4 + 2]) + 3466399075108989689)) - 14))));
                            arr_14 [i_2] [i_1] [i_2] [i_5] [i_2] [i_2] = 120;
                        }
                        var_26 = (max(var_26, (arr_8 [i_0] [8] [8] [i_4] [i_0])));
                        arr_15 [i_0] [i_0] [i_2] = ((255 >> ((((arr_12 [i_0] [i_0] [i_2] [i_4 + 2]) && 1)))));
                        var_27 += var_8;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            var_28 = (min(var_28, (arr_8 [i_0] [i_1] [i_7] [i_7 + 1] [i_1])));
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7] [i_7 + 2] = ((!(arr_18 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7 - 1])));
                        }
                        arr_21 [i_0] [i_0] [i_2] = (((arr_3 [i_6] [i_1]) || (((var_12 << (((arr_7 [i_0] [13] [i_1] [13] [i_6] [i_6]) - 12051543769634077608)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
