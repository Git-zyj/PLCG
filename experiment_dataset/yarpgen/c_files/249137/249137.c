/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max((max(var_15, var_15)), (var_8 <= var_4)))) - var_7);
    var_19 = (max(((((max(var_16, var_15)) <= -6))), (max(var_4, (max(var_2, var_3))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                var_20 = ((((max(var_15, var_12))) ? (max(var_14, var_8)) : ((min(var_16, var_15)))));
                var_21 = var_9;
            }

            /* vectorizable */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0 - 1] [i_0] [i_0] = (var_3 > var_17);
                    var_22 = (((var_6 + 2147483647) << (var_17 - 99)));
                    var_23 = (((~var_8) ? var_2 : var_13));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, ((-var_5 ? var_14 : (var_12 | var_8)))));
                    var_25 = ((6408138397659423126 ? 12038605676050128489 : 14));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_19 [i_0 + 1] [i_0 + 1] = ((-32238 ? 2305843009213693952 : 107464069));
                    var_26 = ((var_8 >> (var_3 - 4524245084665126160)));
                }
                arr_20 [i_0 - 1] [i_1] [i_1] [i_3] = (!var_17);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_27 [1] [i_1] [i_8] [i_7] [2] = (((((8323072 ? 193 : 111))) ? (~var_3) : (var_17 && var_13)));
                            var_27 = (!var_11);
                        }
                    }
                }
                var_28 = (var_17 | var_9);

                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    var_29 = (!var_1);
                    var_30 = ((6408138397659423113 >> (576460752299229184 - 576460752299229153)));
                    var_31 ^= ((var_14 ? var_0 : var_4));
                    var_32 = (min(var_32, (~var_12)));
                    var_33 = var_14;
                }
            }
            var_34 = (max(var_17, (max(var_4, var_10))));
        }
        var_35 = ((((min(var_12, var_13))) && ((((var_17 / var_8) ? var_11 : (var_13 != var_11))))));
        var_36 = ((12038605676050128490 ? 12038605676050128490 : -256));
        arr_31 [i_0] = var_11;
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_37 |= (var_4 != var_15);

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_39 [8] [i_10] = ((((((max(var_2, var_5))))) ? var_5 : ((var_10 ? -var_14 : ((var_15 ? var_2 : var_8))))));
            arr_40 [i_10] [i_11] = ((((max(var_9, var_7))) * (max(var_3, var_8))));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_38 = (max(var_38, ((((var_11 - var_3) ? (((var_8 - var_2) - -var_3)) : (var_13 - var_6))))));
            var_39 = ((max(8, 5773664357766705032)));
            var_40 |= ((var_13 ? var_2 : var_1));
        }
        var_41 = var_4;
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 4; i_14 < 16;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    var_42 = var_5;
                    var_43 = (!var_5);
                    var_44 = var_14;
                }

                for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                {
                    arr_60 [i_15] [i_14 - 4] = (var_3 <= var_4);
                    var_45 = (max(var_45, var_10));
                    arr_61 [i_15] [i_14] [i_15] = (var_17 != var_17);
                    var_46 *= (var_6 / var_11);
                }
                for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                {
                    var_47 = (var_2 / var_16);
                    var_48 &= (!1);
                }
                var_49 *= ((var_12 ? var_15 : (var_2 < var_0)));

                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    arr_66 [i_19] [i_15] = (var_5 ? var_4 : var_0);
                    var_50 = (~var_15);
                    arr_67 [i_13] [16] [i_15] = ((var_14 >> ((((var_4 ? var_5 : var_7)) - 60730))));
                    var_51 *= (var_5 * var_13);
                }
            }
            for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
            {
                arr_70 [i_13] [i_13] [i_13] [i_13] = ((var_14 ? (~var_7) : var_1));
                arr_71 [17] [17] [i_14 - 2] [i_20] = (((var_3 | var_12) ? (~var_9) : ((var_14 ? var_14 : var_2))));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 18;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        {
                            var_52 = (~var_16);
                            var_53 = (!var_17);
                        }
                    }
                }
            }
            for (int i_23 = 0; i_23 < 18;i_23 += 1)
            {
                var_54 = ((var_11 ? var_4 : var_1));
                var_55 = ((var_15 ? 6508256199331037280 : (-9223372036854775807 - 1)));
            }

            for (int i_24 = 0; i_24 < 18;i_24 += 1)
            {
                var_56 = var_13;
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 18;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 18;i_26 += 1)
                    {
                        {
                            var_57 = ((var_13 ? var_17 : var_9));
                            arr_88 [i_25] [i_14] [0] [i_14] = ((var_6 ? var_1 : var_3));
                            var_58 = (min(var_58, (((var_15 ? var_12 : var_17)))));
                        }
                    }
                }
            }
            for (int i_27 = 0; i_27 < 18;i_27 += 1)
            {
                arr_91 [i_13 - 1] [8] [i_13 - 1] = (64 | 2032);
                var_59 = (((!50) / (var_5 != var_4)));
            }
            var_60 *= var_11;
            var_61 = (var_1 < var_15);
        }
        for (int i_28 = 3; i_28 < 16;i_28 += 1)
        {
            var_62 = (((((var_3 ? var_1 : var_8))) ? var_12 : var_3));
            var_63 = (min(var_63, (~var_11)));
        }
        var_64 -= ((var_5 ? var_17 : var_12));
        var_65 = ((var_9 / (var_17 + var_7)));
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 18;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 18;i_30 += 1)
            {
                {
                    var_66 = ((var_12 ? var_5 : var_8));
                    var_67 = ((var_12 ? var_12 : var_6));
                    /* LoopNest 2 */
                    for (int i_31 = 2; i_31 < 14;i_31 += 1)
                    {
                        for (int i_32 = 0; i_32 < 18;i_32 += 1)
                        {
                            {
                                arr_104 [i_30] [i_30] [i_30] [i_30] [i_30] [i_32] [i_30] = ((var_10 <= var_7) ? (var_8 + var_0) : var_0);
                                var_68 = (var_10 != var_10);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_33 = 0; i_33 < 18;i_33 += 1)
                    {
                        for (int i_34 = 0; i_34 < 18;i_34 += 1)
                        {
                            {
                                arr_111 [i_13] [i_29] [i_33] [i_33] [i_34] = var_5;
                                var_69 = (var_5 & var_14);
                            }
                        }
                    }
                }
            }
        }
    }
    var_70 = var_5;
    var_71 = max(33564, var_13);
    #pragma endscop
}
