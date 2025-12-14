/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((min((var_4 <= var_6), (796528453 != 91))))) % (max(var_13, var_0))));
                arr_5 [i_0] [i_0] = (0 - 232);
                arr_6 [i_0] [i_0] [i_0] = (((-111 >= 549487378432) > (((var_5 || var_7) ? (var_2 - var_9) : (var_8 > var_1)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_15 = ((!(((~((var_4 ? var_12 : var_8)))))));
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_3] = ((-9223372036854775794 ? -7 : 48));
                            var_16 = (min(var_16, (((var_12 ? (((var_4 ? var_1 : var_8))) : (max(((var_6 ? var_9 : var_5)), var_12)))))));
                            var_17 = ((((max(var_7, var_2))) << ((max(var_2, var_3)))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_18 = (((((~((var_4 ? var_3 : var_8))))) ? (~var_10) : ((~(~var_4)))));
                        arr_26 [i_2] [i_3] [i_7] = (min((max((max(0, -91)), 113)), -71));
                    }
                }
            }
        }
        var_19 = (min(((var_5 ? var_10 : var_2)), (var_5 >= var_1)));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {

            /* vectorizable */
            for (int i_11 = 3; i_11 < 24;i_11 += 1)
            {
                var_20 = var_5;
                arr_34 [i_9] [i_10] [i_9] [i_10] = ((~(~var_13)));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_37 [i_9] [i_10] [i_12] &= ((var_10 ? var_8 : var_11));
                var_21 -= (((!var_2) ? (var_6 - var_2) : var_10));

                for (int i_13 = 3; i_13 < 23;i_13 += 1)
                {
                    var_22 = (max(var_22, var_0));
                    var_23 = -var_0;

                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_24 = var_1;
                        arr_44 [i_14] [i_10] [i_12] [i_10] [i_9] = var_9;
                        arr_45 [i_10] [i_12] = (((((var_11 ? var_4 : var_12))) ? -var_1 : ((var_0 ? var_5 : var_12))));
                        arr_46 [i_9] [i_10] [i_12] [i_13] [i_14] = (((var_11 / var_13) ? var_10 : var_9));
                        var_25 = var_2;
                    }
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_26 = var_3;
                        var_27 = ((1 ? 1 : 44272));
                        arr_50 [i_13] [i_10] [i_10] [i_9] = ((var_2 ? var_13 : (var_13 && var_11)));
                    }
                    arr_51 [i_10] [i_12] [i_10] [i_10] = (((var_1 || var_7) ? (var_0 > var_12) : var_9));
                }
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_28 += (min((min((~var_1), -var_4)), ((((var_13 > var_1) & ((16735391345794205326 ? -72 : -112)))))));
                arr_54 [i_10] = (((((var_13 ^ (var_13 * var_3)))) ? (min(var_3, var_13)) : (((((var_6 % var_8) >= (max(var_13, var_2))))))));
                arr_55 [i_16] [i_10] [i_9] = (~var_9);
                arr_56 [i_10] [i_10] = (((((((var_9 >> (var_2 + 100))) ^ (~var_3)))) ? (((((var_4 ? var_10 : var_9))) ? ((var_8 ? var_1 : var_8)) : ((max(var_12, var_6))))) : var_1));
                arr_57 [i_9] [i_10] [i_10] = var_3;
            }
            var_29 = ((((var_5 && (var_4 * var_2))) ? (var_10 > var_0) : ((var_6 ? (((min(-11295, 0)))) : (min(var_3, var_9))))));
            arr_58 [i_10] [i_10] = ((((((var_12 | var_0) ? ((var_7 ? var_11 : var_0)) : (var_0 > var_3)))) * (min(((17297 ? 4610054196852496349 : var_8)), -1004830209))));
            var_30 = (max(var_30, var_12));
        }

        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            arr_61 [i_17] = (max((((-(var_11 || var_6)))), (((var_1 | var_8) ? 0 : var_2))));

            /* vectorizable */
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                arr_64 [i_9] [i_17] = ((!(~var_2)));

                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    arr_67 [i_9] [i_9] [i_17] [i_9] = ((((var_4 ? var_2 : var_4)) > var_12));

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        arr_70 [i_9] [i_17] [i_18] [i_17] [i_20] = (((((var_12 ? var_11 : var_13))) ? var_12 : var_0));
                        var_31 = (~var_12);
                        arr_71 [i_18] [i_18] [i_18] [i_18] [i_17] [i_18] [i_18] = ((var_2 ? ((var_0 ? var_0 : var_11)) : (~var_3)));
                        arr_72 [i_20] [i_19] [i_17] [i_17] [i_17] [i_9] = ((var_2 ? (var_0 % var_7) : (var_10 ^ var_8)));
                        arr_73 [i_17] [i_20] = ((var_0 ? (var_7 > var_6) : var_2));
                    }
                    arr_74 [i_17] [i_19] = var_4;
                }
                for (int i_21 = 0; i_21 < 25;i_21 += 1)
                {
                    arr_79 [i_21] [i_18] [i_17] [i_17] [i_9] [i_9] = ((var_1 ? var_13 : var_7));
                    var_32 = var_3;
                }
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 23;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        {
                            arr_85 [i_17] = ((var_6 ? var_12 : var_1));
                            var_33 ^= ((((var_5 ? var_7 : var_11)) - ((45 >> (246 - 245)))));
                        }
                    }
                }
            }
            arr_86 [i_17] = var_0;
        }
    }
    #pragma endscop
}
