/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max((((6519666986548897673 || -11148) - var_9)), (max(-26, var_3))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_15 = (max((((((max(-11148, 11133))) >= var_1))), ((~(!11156)))));
                    var_16 += -11157;
                    var_17 = ((~(((~9223372036854775807) ? ((var_3 ? var_3 : 11156)) : (11156 ^ var_1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = ((((max(11156, 11156))) > 11152));
                                var_19 = (max(var_19, var_3));
                                var_20 ^= (max((max(-1, ((-11154 * (arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_3]))))), ((max(-11179, -6)))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_17 [i_0] [i_5 - 1] [i_5] [i_0] = var_10;
                    arr_18 [i_0] [i_0] = 13346612613520058963;
                    var_21 &= ((!(((8 << (11145 - 11145))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] = (((arr_14 [i_5] [i_1]) ? (arr_14 [i_6] [i_1]) : 11156));

                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (arr_24 [i_7] [i_1] [i_5] [i_6] [14] [i_7] [i_1])));
                            arr_26 [12] [i_1] [i_5 - 1] [i_0] [i_7] = var_12;
                            arr_27 [i_0] [i_0] [i_0] [i_0] = var_0;
                            var_23 += var_4;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_8] [11] [i_8] [i_8] [i_0] [i_8] = var_9;
                            var_24 = 65535;
                            var_25 -= (((arr_7 [1]) << (((arr_11 [i_0 - 1] [i_5 + 1] [i_5] [i_6] [i_8] [i_6] [i_6]) + 8985093007696562329))));
                            arr_33 [i_0] [i_1] [i_0 - 3] [0] [i_8] [i_0] = (arr_5 [i_0 + 1] [i_1] [i_0 + 1] [7]);
                        }
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            arr_38 [i_0] [i_1] [i_5 - 1] [i_6] [6] = (arr_10 [i_0] [i_0 - 3] [7] [i_5 + 1] [i_6] [i_9 + 1] [i_9 - 2]);
                            var_26 = (((11145 ? 18446744073709551598 : var_3)));
                            arr_39 [i_1] [i_0] [i_9 - 2] = (((arr_6 [i_9 - 2] [i_5 - 1] [i_0 - 3]) << (((arr_6 [i_9 - 2] [i_5 - 1] [i_0 - 3]) - 16924))));
                            var_27 = 2427944435;
                            arr_40 [i_0] [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 3] = -22333;
                        }
                        arr_41 [i_1] [i_1] [i_5 + 1] [i_0] [i_1] [i_6] = (((((arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 3] [12]) || var_2)) ? ((var_4 >> (var_11 + 173))) : var_1));
                        arr_42 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0] = (((((arr_7 [i_1]) ? (arr_36 [i_6] [i_5]) : 11744058871510848233)) ^ (arr_2 [i_5 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((var_7 ? ((312771859 * (min(3, 2427944435)))) : ((((-(arr_45 [i_0 + 1] [i_1] [i_0 + 1] [i_10] [i_10 - 2] [i_10 + 1] [i_11])))))))));
                                var_29 = 1683748260572694396;
                            }
                        }
                    }
                }
                arr_48 [i_0 - 1] [i_1] [i_0] = (arr_30 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_0 + 1]);
            }
        }
    }
    var_30 = ((-11148 ? -11150 : -19247));
    var_31 = (!(((-(2427944435 >= var_2)))));
    #pragma endscop
}
