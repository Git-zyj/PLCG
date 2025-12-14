/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((-(min(((min(var_9, var_9))), var_10))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_13 = ((((min(((var_1 ? var_1 : var_3)), var_4))) ? var_8 : var_10));
                arr_6 [3] [i_2] = ((-var_5 ? ((~((var_3 ? var_1 : var_4)))) : ((((var_0 ? var_6 : var_2))))));
                arr_7 [i_2] [i_1] [i_1] = (((((var_5 ? var_2 : var_5))) ? var_10 : var_3));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_0] [i_0] [5] = (((((var_0 ? var_3 : var_7))) ? var_7 : (min(((max(var_8, var_7))), ((var_5 ? var_1 : var_10))))));
                            arr_13 [i_2] [i_3] [i_2] [i_2] [0] [i_1] [i_2] = ((~(min(var_7, ((var_10 ? var_6 : var_3))))));
                            var_14 += (min((~var_0), (var_6 - var_5)));
                            arr_14 [i_1] [i_1] [i_4] [2] [2] &= (min((((var_1 ? var_9 : var_8))), var_3));
                            arr_15 [2] [2] [i_2] [1] = var_2;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] &= var_4;
                        arr_23 [i_0] [i_0] [i_5] [i_6] = (var_8 || var_7);
                        arr_24 [i_0 - 3] [i_0 - 3] [7] [i_0] = (min((((~(max(var_5, var_7))))), ((var_1 ? var_4 : var_8))));
                        arr_25 [i_0] [i_1] = (!59658);
                    }
                }
            }
            arr_26 [3] [i_1] = var_1;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_29 [i_7] [i_0] = ((var_2 ? var_5 : var_1));
            arr_30 [i_7] [i_7] [i_7] = ((var_10 ? var_1 : var_1));

            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                arr_33 [i_0] = ((var_6 ? var_7 : var_8));
                var_15 = (((~var_8) ? var_9 : ((var_1 ? var_3 : var_4))));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_37 [i_0 - 3] [i_7] [8] = (!var_3);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_16 = ((var_3 ? var_6 : -var_1));
                            arr_45 [i_11 - 1] [i_7] [i_9] [10] = (var_5 ^ var_8);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_50 [12] [8] [8] = ((((var_2 ? var_9 : var_6))) ? var_6 : (~var_6));
                arr_51 [i_0 - 1] [i_0 - 1] [i_7] [i_12] = var_7;

                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    var_17 = ((var_1 ? -var_1 : var_7));
                    arr_55 [i_0] [i_0] [i_0] = -var_6;
                }
                for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
                {
                    arr_60 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] = var_3;
                    arr_61 [i_0] [i_0] [i_12] [3] [i_7] [11] = ((-((var_6 ? var_10 : var_10))));
                    arr_62 [i_0] [i_0] = (~var_3);
                    arr_63 [i_14] [i_14 + 1] [i_14 + 2] [i_14 + 1] [i_14 + 2] |= (var_2 >= var_5);
                    var_18 = (max(var_18, -var_7));
                }
                for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    var_19 = ((var_7 ? ((var_6 ? var_8 : var_3)) : (((var_5 ? var_4 : var_2)))));
                    var_20 ^= ((var_8 ? -var_9 : var_6));
                    var_21 ^= (((((var_2 ? var_3 : var_3))) ? var_3 : (!var_3)));
                    var_22 ^= var_9;
                }
                var_23 = (max(var_23, -var_10));
                var_24 = ((var_5 ? var_8 : (var_5 > var_0)));
            }
            var_25 ^= var_4;
        }

        for (int i_16 = 2; i_16 < 11;i_16 += 1)
        {
            var_26 = var_9;
            var_27 = -var_6;

            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                arr_73 [i_0] [i_16 - 1] = (((((var_7 ? var_3 : var_10))) ? ((~(min(var_9, var_0)))) : var_7));
                var_28 = ((-((var_2 ? (var_7 / var_6) : (min(var_0, var_6))))));
                var_29 = -var_10;
                var_30 = ((((max(var_3, var_9))) ? (((var_10 ? var_8 : var_10))) : var_4));
                var_31 ^= (((max(-var_7, -var_10)) < (var_3 >= 547327363)));
            }
            arr_74 [i_0] [i_0] [i_0] = ((1913206817496885701 ? ((((min(var_9, var_3))) ? (min(var_2, var_3)) : var_5)) : (((var_8 ? var_2 : var_6)))));
            var_32 = (min(var_9, ((((min(var_7, var_4))) ? var_4 : (((min(var_8, var_9))))))));
        }
        var_33 |= var_7;
    }
    for (int i_18 = 0; i_18 < 16;i_18 += 1)
    {
        arr_79 [i_18] = var_2;

        /* vectorizable */
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            arr_82 [i_19] [i_19] = -7339133430942547958;

            for (int i_20 = 0; i_20 < 16;i_20 += 1)
            {
                var_34 = var_2;
                var_35 = var_5;
            }
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                var_36 = ((var_7 ? var_2 : var_9));
                arr_89 [i_18] [i_18] |= (var_10 ? (((var_5 + 9223372036854775807) >> (var_5 + 1640450728962076308))) : var_5);
                arr_90 [13] = -var_6;
                var_37 -= var_2;
                var_38 = (!var_3);
            }
        }

        for (int i_22 = 0; i_22 < 16;i_22 += 1)
        {
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 15;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 16;i_24 += 1)
                {
                    {
                        arr_98 [i_18] [i_18] [i_23] [i_23 - 1] [i_18] = var_8;
                        arr_99 [i_23] [i_23] = ((((max(var_9, var_5))) ? var_6 : -var_5));
                        arr_100 [1] [i_23] [i_22] [i_23] = var_5;
                        var_39 = ((~(((var_6 ? var_2 : var_0)))));
                        var_40 += (!var_9);
                    }
                }
            }
            arr_101 [i_18] = (((((var_6 ? ((var_3 ? var_3 : var_2)) : ((var_10 ? var_6 : var_0))))) ? (min(((var_10 ? var_0 : var_4)), var_7)) : (!var_10)));
            var_41 = var_4;
            var_42 += (min((((var_8 ? var_9 : var_7))), var_3));
        }
        arr_102 [i_18] = var_2;
        arr_103 [i_18] &= (((~((var_3 ? var_6 : var_1)))));
    }
    for (int i_25 = 0; i_25 < 18;i_25 += 1)
    {
        var_43 ^= (var_10 ? var_4 : ((min(var_4, var_5))));
        var_44 = (~var_7);
    }
    #pragma endscop
}
