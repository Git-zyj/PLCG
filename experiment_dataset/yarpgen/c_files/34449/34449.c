/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!((((var_3 + 9223372036854775807) << (((var_8 + 86129749999544790) - 44))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_21 = (!10935030627606093790);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [10] [i_0] [i_0] = (((arr_10 [i_0] [i_0] [i_2] [i_2]) >= 1125899906318336));
                                arr_14 [i_0] = max((((((arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [11]) >= (arr_9 [i_3]))) ? (((var_13 ? 1125899906318340 : 7350635626873820723))) : (max(var_13, (arr_3 [i_3]))))), (((18446744073709551611 >= (arr_2 [i_0])))));
                            }
                        }
                    }
                    var_22 += (min((((!(22 >= -7350635626873820708)))), 750270533079063313));
                    var_23 -= min((-1125899906318327 - 12237586539315276754), (((15 ? 240 : 7350635626873820723))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_24 = ((arr_11 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (4617880341337252754 <= 3) : (arr_11 [9] [3] [i_5] [i_6] [i_7]));
                            arr_25 [i_7] [i_6] [i_5] [i_1] [i_0] = (arr_16 [i_1 - 1] [i_1 - 1]);
                            var_25 += ((!(arr_8 [i_5] [i_1] [i_0] [i_5] [i_0] [i_7])));
                            arr_26 [i_7] [i_5] [i_0] [i_5] [i_0] = (18446744073709551615 ^ (((arr_10 [4] [1] [4] [i_0]) + 1125899906318313)));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, 9547980366826873809));
                            var_27 = (arr_9 [i_8]);
                            var_28 = (((-3015039287828318716 | (-9223372036854775807 - 1))));
                            var_29 = 2233794900626935110;
                            var_30 &= (!17179869183);
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_5] = 19;
                            arr_36 [i_0] [i_0] [i_5] [i_5] [i_6] [i_5] [i_9] = (arr_5 [i_9] [i_1] [i_1] [i_1]);
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_40 [i_1] [i_1 - 1] |= ((var_0 + (arr_38 [i_10] [i_6] [4] [i_1] [i_1] [i_0] [6])));
                            var_31 = (var_3 / 2206906542832550302);
                        }
                        arr_41 [i_5] [6] [i_5] [i_5] [i_5] = (~var_5);
                        arr_42 [i_5] [i_5] [i_1] [i_5] = (arr_2 [i_0]);
                    }
                    arr_43 [i_1] [i_5] = 184;
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_32 = var_9;
                                var_33 = (max(var_33, ((((min((arr_6 [i_13]), -11631244316704199265))) ? ((((var_18 || (arr_22 [i_12] [5] [i_11] [i_0] [i_13] [2] [i_0]))))) : ((-7350635626873820701 ? (max(52, var_9)) : 136735733521053819))))));
                            }
                        }
                    }
                }
                arr_52 [i_0] [8] [i_1] = (max(6359704611431008302, 10237996405616717724));
            }
        }
    }
    #pragma endscop
}
