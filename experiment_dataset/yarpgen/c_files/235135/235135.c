/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (-46 ? ((((((-28325 ? 18446744073709551615 : (-2147483647 - 1)))) ? -1 : (~-1)))) : (arr_1 [i_1]));
                arr_4 [i_0] [i_1] = ((!(arr_2 [i_0])));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = 65535;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_1] [5] [i_4] = var_8;
                            var_22 = (max(var_22, var_18));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] [i_1] = (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] [i_4]);
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            var_23 = (((var_9 ? 3668024629376086683 : (arr_16 [i_1] [i_1] [i_5] [i_1] [i_5 - 1]))));
                            var_24 = ((65535 ? (((var_7 ? var_14 : var_17))) : ((var_9 ? 63 : (arr_2 [i_5])))));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [i_1] [i_0] [i_2] [i_3] [i_2] = (9223372036854775798 - 55502);
                            var_25 = arr_5 [i_1 - 1] [i_2 - 1] [i_2 + 1];
                            arr_24 [i_0] [i_1] [i_6] [6] [i_6] &= ((2147483647 ? (arr_7 [2]) : 65532));
                            arr_25 [i_1] = (((arr_7 [i_1]) ? var_6 : (arr_0 [i_0] [i_3])));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_26 = ((20 ? (arr_9 [i_0] [8] [i_1 - 2] [i_3] [i_7] [i_0]) : (((arr_0 [i_0] [i_1]) ? var_14 : (arr_22 [i_0] [i_0])))));
                            var_27 = (((arr_21 [i_1] [i_2 + 1] [i_2 - 1] [i_1] [i_1 - 1] [i_1 + 1]) & (arr_19 [i_1 - 1] [i_1 + 1])));
                            var_28 = (min(var_28, var_9));
                        }
                        arr_28 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = var_13;
                        arr_29 [i_1] = ((206724297 && (arr_9 [i_2 + 1] [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 - 1])));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_33 [i_1] [i_1] = (var_13 | 4194303);
                        arr_34 [i_1] [i_1] [i_2] [i_8] = ((5 ^ ((~(arr_1 [i_0])))));
                        var_29 = (((arr_11 [i_1 - 2]) & 7696352647274091909));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_30 = var_18;
                        var_31 = var_2;
                    }
                    arr_37 [i_1] [i_1] [i_1] [i_0] = (arr_31 [i_1 - 3] [i_1] [i_2 - 3] [i_2] [i_2]);
                    var_32 ^= (((arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2]) ? (arr_32 [i_1 - 1] [i_1 - 1] [i_2] [i_2 + 3] [i_2 - 2]) : (((arr_35 [i_0] [i_1 + 1] [i_2 - 3] [i_2 + 1]) ? 708598210 : var_6))));
                }
            }
        }
    }
    var_33 = ((-(~65532)));
    #pragma endscop
}
