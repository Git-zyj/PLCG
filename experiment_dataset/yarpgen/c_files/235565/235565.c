/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-((4294967295 << (65011712 <= 4294967284))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = var_3;
        arr_2 [i_0] [i_0] = (var_0 / var_12);
        var_18 = -var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_4] = (((1906380348 * 0) * var_7));
                        var_19 *= (((!var_14) <= -var_14));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_18 [i_2] [i_5] = -var_9;

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_20 = (-var_9 <= var_11);
                    arr_21 [i_1] [i_6] [i_5] = -var_1;
                    var_21 = ((var_5 ? var_5 : var_6));
                }
                var_22 = var_0;
                var_23 = (((-var_15 + 2147483647) << (((((~var_4) + 169)) - 21))));
            }
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_31 [i_1] [i_7] [1] [18] = (var_14 * var_11);
                    var_24 = (min(var_24, (~var_7)));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_1] [i_10] [i_10] [i_10] [i_10] = (var_13 * var_13);
                    var_25 = (((var_14 <= var_3) <= (var_8 * var_9)));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    arr_39 [i_1] [i_7] [15] [i_11] [i_11] = var_9;
                    arr_40 [i_1] [16] [i_8] = (((~733290755) * var_8));
                }
                var_26 = var_0;
                var_27 = ((3 * (-2147483647 - 1)));
            }
            for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
            {
                arr_43 [i_1] [i_7] [i_12] = ((+(((-21791 + 2147483647) << (((-21791 + 21792) - 1))))));
                var_28 ^= (var_9 || var_6);
                arr_44 [i_1] [i_7] [i_12] [i_12] = -var_3;
            }
            for (int i_13 = 2; i_13 < 18;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    var_29 = (((var_5 ? 21791 : 3605127705)) << (var_14 <= var_14));
                    var_30 = var_1;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_31 = var_12;
                    arr_53 [i_15] [i_15] = (var_6 * var_13);
                    var_32 = (max(var_32, (var_10 <= var_2)));
                }
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    var_33 = ((var_9 <= (var_9 * var_6)));

                    for (int i_17 = 1; i_17 < 18;i_17 += 1)
                    {
                        var_34 = -216;
                        var_35 = (733290755 * 30013);
                        arr_59 [i_1] [i_7] [i_17] [i_7] [i_16] [i_17 + 1] = (var_14 <= 2388586950);
                        arr_60 [i_7] [i_17] [i_17 + 1] = (2867454262 * 733290745);
                        var_36 *= ((var_2 << (var_5 - 16)));
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                    {
                        var_37 = -var_4;
                        arr_64 [i_1] [i_7] [i_16] = ((var_10 + 2147483647) << var_3);
                    }
                    for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
                    {
                        var_38 = (8388607 << (((-21808 + 21827) - 12)));
                        var_39 -= (var_13 ? var_3 : var_7);
                    }
                }
                for (int i_20 = 0; i_20 < 0;i_20 += 1)
                {
                    var_40 -= (var_11 << var_3);

                    for (int i_21 = 1; i_21 < 18;i_21 += 1)
                    {
                        var_41 = -4294967295;
                        var_42 = (((~var_8) * (var_6 <= var_8)));
                    }
                    arr_72 [18] [i_7] [i_13] [i_20] = -var_10;
                    var_43 = (max(var_43, -var_9));
                    var_44 &= ((var_10 <= (var_13 <= var_3)));
                }
                var_45 = var_7;
            }
            var_46 -= -var_0;
        }
        var_47 = var_1;
        arr_73 [i_1] = ((var_5 << (var_7 - 323766696)));
    }
    for (int i_22 = 0; i_22 < 1;i_22 += 1)
    {
        arr_77 [i_22] [i_22] = var_0;
        /* LoopNest 2 */
        for (int i_23 = 2; i_23 < 17;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 20;i_24 += 1)
            {
                {
                    var_48 = (max(var_48, (((+(((-127 - 1) ? 4 : ((var_7 ? var_3 : 4210728162)))))))));
                    var_49 = var_0;
                    arr_82 [i_22] [i_23] [i_23] = ((var_4 + (max(var_9, var_6))));
                }
            }
        }

        for (int i_25 = 2; i_25 < 19;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 1; i_26 < 18;i_26 += 1)
            {
                for (int i_27 = 2; i_27 < 16;i_27 += 1)
                {
                    {
                        var_50 = var_9;
                        arr_89 [i_22] [i_26] [1] [i_26 - 1] [i_27] [i_27 - 2] = (((var_11 ? var_0 : var_12)) * (var_1 <= var_11));
                    }
                }
            }
            var_51 = var_5;
            var_52 = (((var_8 + var_12) + var_15));
            arr_90 [i_22] [18] [i_25] = (-1520773172 ? 2143289344 : (-2147483647 - 1));
        }
        for (int i_28 = 2; i_28 < 19;i_28 += 1) /* same iter space */
        {
            var_53 = -var_3;
            var_54 += -409008495;

            /* vectorizable */
            for (int i_29 = 0; i_29 < 20;i_29 += 1)
            {
                arr_95 [i_28] [i_28] [i_28] = (((var_10 + 2147483647) << var_3));
                var_55 = -var_12;
            }
            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {

                for (int i_31 = 0; i_31 < 20;i_31 += 1)
                {
                    arr_101 [i_28] = max((var_3 + var_12), var_14);

                    for (int i_32 = 2; i_32 < 19;i_32 += 1)
                    {
                        arr_104 [1] [i_28] [i_30] [6] [i_32] = (4294967287 * 4294967276);
                        arr_105 [i_22] [i_22] [5] [i_28] [i_31] [16] = ((-((var_1 ? var_15 : var_3))));
                        arr_106 [i_28] = ((-(min((max(var_11, var_6)), var_10))));
                    }
                    arr_107 [i_22] [i_28] [i_30] = (max(((var_2 << (var_12 - 3071581917))), (((var_15 ? var_10 : var_15)))));
                    arr_108 [i_22] [14] [14] [i_28] = (max((max(1, 3561676530)), ((~(min(var_1, var_12))))));
                }
                var_56 |= ((24 ? 150 : 14));
                var_57 = (-(4294967285 * 255));
                var_58 = (-(min(var_15, var_12)));
                var_59 *= ((var_7 <= ((-(min(733290766, -8))))));
            }
            for (int i_33 = 1; i_33 < 16;i_33 += 1)
            {
                arr_111 [i_28] [i_28] [i_33] = (((min(var_15, var_1)) * ((var_1 ? var_9 : var_1))));
                var_60 = var_1;
            }
            /* LoopNest 3 */
            for (int i_34 = 4; i_34 < 18;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 20;i_35 += 1)
                {
                    for (int i_36 = 1; i_36 < 18;i_36 += 1)
                    {
                        {
                            arr_120 [i_28] [i_28] [i_28] [i_35] [1] [i_36] = (((max(-var_12, var_7)) <= var_14));
                            var_61 = (max(((min(var_13, var_3))), (max(var_12, var_12))));
                        }
                    }
                }
            }
        }
    }
    for (int i_37 = 0; i_37 < 16;i_37 += 1)
    {
        arr_123 [2] = (max((var_3 <= var_13), (min((var_8 <= var_5), -var_5))));
        /* LoopNest 2 */
        for (int i_38 = 0; i_38 < 16;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 16;i_39 += 1)
            {
                {
                    arr_130 [i_38] [i_38] [i_39] = (((var_3 <= var_1) <= var_12));
                    arr_131 [0] [i_39] [i_38] [i_38] = (max((max(var_1, var_2)), (1965428089 * -64)));
                }
            }
        }
    }
    var_62 = var_15;
    var_63 = ((((max((min(var_10, var_5)), var_0))) && (var_14 && var_2)));
    #pragma endscop
}
