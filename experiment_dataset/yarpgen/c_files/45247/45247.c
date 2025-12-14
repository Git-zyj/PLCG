/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((var_3 - (((-(arr_3 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (arr_1 [i_0]);
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_0] = var_10;
                                var_15 ^= (arr_4 [i_1] [i_4]);
                                var_16 &= (((((32768 * 0) ? -var_8 : (arr_12 [i_0] [i_1] [i_0])))) ? (((((arr_7 [i_0] [i_1] [i_2] [i_3]) + 2147483647)) << (((((arr_7 [i_0] [i_1] [i_2] [i_3]) + 1557458931)) - 28)))) : (((((var_10 + 2147483647) << (255 - 255))) * var_7)));
                            }
                        }
                    }
                    var_17 = 63;
                    arr_18 [i_2] |= (((max(var_4, var_11))) * (((((-6 + 2147483647) >> (((arr_1 [i_0]) - 16407)))) >> (1291669798 - 1291669770))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_18 = (min(var_18, 3));
                        var_19 = (max(var_19, ((((arr_4 [i_0] [i_2]) ? -77 : (arr_14 [i_1] [i_2] [i_5]))))));
                        var_20 = (((arr_3 [i_1]) ? var_0 : (arr_3 [i_0])));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_1] [i_1] = (((arr_4 [i_0] [i_1]) && var_1));
                            arr_26 [i_0] [i_1] [i_2] [i_5] [i_6] = ((var_10 && (arr_0 [i_0])));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_21 = (min(var_21, (((~(arr_15 [i_0] [i_5] [i_5] [i_5] [i_7 + 1]))))));
                            arr_30 [i_1] [i_2] [i_7] = (((arr_16 [i_5] [i_7 + 2] [i_7] [i_7] [i_7 + 2] [i_7]) ? var_4 : var_8));
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_5] [i_1] &= ((arr_22 [i_5]) / var_0);
                            arr_34 [i_0] [i_1] [i_5] [i_8] = (((arr_23 [i_0] [i_5] [i_2] [i_5] [i_8]) - (arr_11 [i_0] [i_1] [i_2] [i_5] [i_8])));
                            arr_35 [i_0] [i_1] [i_2] [i_5] [i_8] = var_3;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
