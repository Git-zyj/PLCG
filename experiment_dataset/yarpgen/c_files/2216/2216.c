/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 = (((var_4 ? var_8 : 9)));
        var_14 = ((46 ? var_1 : (!1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0 - 2] [i_0] [i_2] [i_0 + 1] = (((18261 && -11) ? (!2020632456) : (!-20)));
                    var_15 = (min(5806211956715960521, 1));
                    var_16 = var_8;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_17 = ((~((-146 ? var_1 : var_2))));
            var_18 = 253;

            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 = (!1);
                            var_20 &= (~var_11);
                            var_21 -= var_1;
                            var_22 = (!var_0);
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_23 = var_12;
                        var_24 = (((((var_6 ? var_8 : var_12))) ? (~var_9) : var_10));
                        var_25 = 4294967295;
                        var_26 = (var_4 ? var_11 : var_4);
                        var_27 = var_5;
                    }
                    arr_30 [1] [i_3] [i_4] [i_4] [i_3] [i_3] = (!var_3);
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_28 = 857;
                var_29 = var_2;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_30 = ((((65526 ? 2048 : var_0)) > var_0));
                            arr_40 [i_3] [i_4] = (!14);
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                var_31 = -var_1;
                arr_43 [12] [i_4] [i_4] [i_4] = var_6;
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_32 = var_7;
                var_33 = var_11;
            }
        }

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_34 = var_6;
            arr_52 [i_15] [i_15] [i_15] |= var_9;

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                arr_57 [5] = (!var_3);
                var_35 += (~1);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_36 = 2343912535;
                            var_37 = (18 + 27345);
                        }
                    }
                }
                var_38 = ((4 ? var_7 : 1));
                var_39 += ((-(-32767 - 1)));
            }
            for (int i_19 = 2; i_19 < 19;i_19 += 1)
            {
                var_40 = (~0);
                var_41 += (var_10 == var_10);
                var_42 = (max(var_42, var_8));
            }
            var_43 = (-127 - 1);
        }
        for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
        {
            var_44 = var_6;
            var_45 = var_9;
            arr_66 [i_3] [i_3] = -var_7;
        }
        for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
        {
            var_46 -= (var_6 * -96);
            var_47 = var_9;
            var_48 = var_1;
        }
        for (int i_22 = 0; i_22 < 20;i_22 += 1)
        {
            var_49 = ((1 ? (~123) : (~var_10)));

            for (int i_23 = 1; i_23 < 1;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 20;i_25 += 1)
                    {
                        {
                            var_50 = ((var_6 ? var_0 : var_10));
                            var_51 = ((var_6 ? var_4 : var_12));
                            var_52 -= ((var_7 ? var_2 : 65531));
                        }
                    }
                }
                arr_81 [i_3] [i_22] [i_23] [i_22] = (!var_7);
            }
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                var_53 = (~911555271);

                for (int i_27 = 4; i_27 < 18;i_27 += 1)
                {
                    var_54 = ((-var_2 ? -19 : ((var_3 ? var_1 : var_5))));
                    var_55 = ((7 ? 17 : (!var_6)));
                    var_56 = ((var_12 ? var_5 : var_3));
                    arr_86 [i_26] [i_26] = ((-((3383412006 ? 18446744073709551615 : var_3))));
                }

                for (int i_28 = 3; i_28 < 17;i_28 += 1)
                {
                    var_57 = -var_5;
                    var_58 = ((var_12 ? 140 : 2587331569));
                    var_59 = ((var_9 ? var_0 : 2097151));
                }
                var_60 = ((~((var_11 ? 0 : var_9))));

                for (int i_29 = 0; i_29 < 20;i_29 += 1) /* same iter space */
                {
                    var_61 = ((var_0 ? 14697710580674905355 : 715860957));

                    for (int i_30 = 0; i_30 < 20;i_30 += 1) /* same iter space */
                    {
                        arr_93 [i_22] [i_30] [i_22] [i_29] [14] [i_3 - 2] |= -0;
                        var_62 = ((-(var_1 >= var_11)));
                        var_63 = (!var_11);
                        var_64 = var_11;
                        arr_94 [i_26] [i_26] [i_26] [i_26] [i_26] = ((8676904365230372508 ? var_1 : var_7));
                    }
                    for (int i_31 = 0; i_31 < 20;i_31 += 1) /* same iter space */
                    {
                        arr_98 [i_3 + 1] [i_26] [i_26] [i_26] [i_3 + 1] = -8905;
                        var_65 += var_3;
                    }
                }
                for (int i_32 = 0; i_32 < 20;i_32 += 1) /* same iter space */
                {
                    var_66 ^= var_1;
                    arr_101 [i_26] [i_22] [i_22] [i_3] [i_26] = var_12;
                    var_67 = ((var_6 ? var_6 : var_1));
                }
            }
        }
        var_68 = ((var_8 ? var_5 : 12712388069062022791));
        /* LoopNest 3 */
        for (int i_33 = 2; i_33 < 17;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 0;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 1;i_35 += 1)
                {
                    {
                        arr_109 [i_3 - 2] [i_3] [i_33] = var_4;

                        for (int i_36 = 0; i_36 < 1;i_36 += 1)
                        {
                            var_69 = -var_3;
                            var_70 = (~var_11);
                            var_71 = ((2892848650 * 1) & -var_0);
                            var_72 *= ((var_4 > (((var_12 ? var_8 : var_9)))));
                        }
                        var_73 = (~var_2);
                        var_74 = var_0;
                    }
                }
            }
        }
        arr_112 [2] = (~var_8);
    }
    var_75 = var_7;
    var_76 = ((~((-((var_6 ? -26 : var_3))))));
    #pragma endscop
}
