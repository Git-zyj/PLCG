/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_12 = ((var_3 ? -var_11 : var_10));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = (((((var_1 ? var_7 : var_5))) ? (((!(((var_5 ? var_3 : var_9)))))) : (((!var_1) ? -var_3 : ((var_8 ? var_6 : var_1))))));
                            var_13 = ((var_1 ? ((var_9 ? var_11 : var_9)) : (((((var_5 ? var_6 : var_2))) ? var_1 : var_1))));
                            arr_16 [i_0] [i_1] [i_0] = ((!(~var_0)));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] = var_9;
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_10 ? var_6 : var_0)));
                            var_14 = ((~var_7) ? (!var_5) : var_11);
                        }

                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            var_15 = (((var_7 ? var_9 : var_10)));
                            arr_25 [i_0] [i_1] [i_0] = ((~((166 ? 166 : 89))));
                            var_16 = 22545;
                        }
                    }
                }
            }
            var_17 += var_9;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_18 += ((~var_2) ? (~var_5) : (~var_10));
                        var_19 = ((var_6 ? (~var_2) : ((0 ? 90 : 176))));
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_39 [i_0] [i_0] [i_0] [i_11] = var_4;
                        arr_40 [i_0] [i_0] [i_10] [i_0] = ((!-50165) ? var_3 : var_8);
                        arr_41 [i_0] [i_9] [i_10] = var_4;
                    }
                }
            }
            var_20 = (min(var_20, (((-((var_2 ? var_4 : var_0)))))));
            var_21 = var_9;
            arr_42 [i_0] [i_9] = var_10;
        }
        for (int i_12 = 2; i_12 < 16;i_12 += 1)
        {
            var_22 = ((~((var_8 ? ((var_0 ? var_2 : var_2)) : var_5))));
            arr_46 [i_0] [i_0] = (((~var_2) ? var_9 : ((-(!var_6)))));
            var_23 = var_7;
            var_24 += (((((79 ? 60273 : 65526)))) ? (+-13593459841923386105) : var_10);
            var_25 = (!var_10);
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_26 = var_5;
                            var_27 = ((var_4 ? var_6 : (!var_4)));
                        }
                    }
                }
            }

            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                var_28 = (max(var_28, var_8));
                arr_62 [i_0] [i_0] [i_0] = (((~50168) ? ((var_7 ? var_4 : var_4)) : ((166 ? 102 : 4085723592352603994))));
                var_29 = (-var_3 ? ((var_8 ? var_7 : (!var_6))) : var_2);

                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        var_30 = var_11;
                        var_31 = (((((var_6 ? var_0 : var_10))) ? (!var_10) : (!var_1)));
                        arr_68 [i_0] = var_4;
                        var_32 = var_8;
                        arr_69 [i_0] [i_0] = (15942266983530089568 ? -511408085 : 65535);
                    }
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        var_33 = (min(var_33, var_9));
                        var_34 = (((((var_7 ? (~var_1) : ((var_7 ? var_3 : var_3))))) ? var_6 : ((var_11 ? (~65535) : ((var_0 ? var_9 : var_6))))));
                    }
                    for (int i_21 = 0; i_21 < 18;i_21 += 1)
                    {
                        var_35 = var_2;
                        var_36 = (max(var_36, var_0));
                        var_37 = ((65535 ? 5 : 9676359315571517315));
                        var_38 = (min(var_38, var_6));
                    }
                    for (int i_22 = 1; i_22 < 16;i_22 += 1)
                    {
                        var_39 += ((140 ? 159 : 524309859));
                        arr_80 [i_0] [i_17] [i_18] = ((((((var_2 ? var_5 : var_8)) ? var_0 : (((var_9 ? var_2 : var_7)))))));
                        arr_81 [i_0] [i_13] [i_13] [i_17] [i_18] [i_0] [i_22] = (((((var_6 ? var_11 : var_2))) ? (!var_2) : (~var_10)));
                    }
                    var_40 = (((~var_0) ? (!var_8) : var_8));
                    arr_82 [i_0] [i_13] [i_0] [i_17] [i_17] [i_0] = ((var_0 ? var_6 : (~var_10)));
                }
                var_41 = (-(((((var_10 ? var_2 : var_11))) ? var_2 : -var_5)));
            }
            for (int i_23 = 1; i_23 < 16;i_23 += 1)
            {
                arr_86 [i_0] [i_0] [i_23] [i_23] = ((161 ? -var_4 : 15900191687817967670));
                arr_87 [i_0] [i_0] [i_0] = var_6;
                var_42 = var_9;
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 18;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 18;i_25 += 1)
                    {
                        {
                            arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] = (-var_2 ? var_3 : ((~(!var_0))));
                            var_43 = (((((-((var_6 ? 2147483647 : 65535))))) ? 224 : 1197665399));
                        }
                    }
                }
            }
            for (int i_26 = 0; i_26 < 18;i_26 += 1)
            {
                var_44 = (((var_8 ? var_10 : ((var_3 ? var_4 : var_1)))));
                var_45 -= var_8;
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 18;i_27 += 1)
                {
                    for (int i_28 = 1; i_28 < 16;i_28 += 1)
                    {
                        {
                            var_46 = (6083010319212464230 ? 15 : 1167138296);
                            var_47 -= ((((!(!var_11))) ? var_8 : var_0));
                        }
                    }
                }
            }
            for (int i_29 = 0; i_29 < 18;i_29 += 1)
            {
                arr_106 [i_0] [i_0] [i_0] [i_0] = (!var_2);
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 18;i_30 += 1)
                {
                    for (int i_31 = 3; i_31 < 17;i_31 += 1)
                    {
                        {
                            arr_111 [i_0] [i_0] = (!25306);
                            var_48 = ((~(((((var_11 ? var_4 : var_7))) ? var_2 : (~var_11)))));
                        }
                    }
                }
            }
        }
        var_49 = (((-1167138296 ? 7340032 : 75)));
    }
    for (int i_32 = 0; i_32 < 16;i_32 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_33 = 2; i_33 < 13;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 16;i_34 += 1)
            {
                {
                    var_50 = (~var_7);
                    var_51 = (((~var_0) ? var_7 : -var_11));
                }
            }
        }
        arr_121 [i_32] [i_32] = (((((40230 ? -1 : 4))) ? (!var_2) : ((var_4 ? var_2 : var_1))));
    }
    for (int i_35 = 0; i_35 < 16;i_35 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_36 = 0; i_36 < 16;i_36 += 1)
        {
            for (int i_37 = 0; i_37 < 16;i_37 += 1)
            {
                for (int i_38 = 0; i_38 < 16;i_38 += 1)
                {
                    {
                        arr_131 [i_37] [i_36] = (((!var_11) ? (!var_0) : (((((40229 ? 18446744073709551612 : 6713))) ? var_10 : (((var_1 ? var_2 : var_7)))))));
                        var_52 = (max(var_52, (((var_0 ? ((var_5 ? ((var_9 ? var_0 : var_9)) : var_7)) : var_3)))));
                    }
                }
            }
        }
        var_53 = (((((var_10 ? var_3 : var_4))) ? var_2 : var_1));
    }
    var_54 = (((((var_5 ? 40230 : -1953352742))) ? var_6 : var_9));

    for (int i_39 = 2; i_39 < 18;i_39 += 1)
    {
        /* LoopNest 2 */
        for (int i_40 = 1; i_40 < 16;i_40 += 1)
        {
            for (int i_41 = 0; i_41 < 19;i_41 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_42 = 2; i_42 < 16;i_42 += 1)
                    {
                        for (int i_43 = 0; i_43 < 19;i_43 += 1)
                        {
                            {
                                var_55 = (var_3 ? ((var_0 ? var_5 : var_9)) : var_2);
                                var_56 = (min(var_56, ((((((var_9 ? var_0 : var_0))) ? (!var_7) : (!var_9))))));
                                arr_145 [i_39] [i_39] [i_41] [i_39] [i_39] = (((var_8 ? var_2 : var_8)));
                            }
                        }
                    }
                    var_57 = var_0;
                }
            }
        }
        var_58 = var_2;

        for (int i_44 = 0; i_44 < 19;i_44 += 1)
        {
            var_59 ^= var_8;
            var_60 = var_7;
            var_61 = ((-((var_2 ? var_11 : var_8))));
            arr_150 [i_39] [i_39] = (((555123301 ? 91 : 113)));
        }
        var_62 = var_5;
    }
    for (int i_45 = 0; i_45 < 19;i_45 += 1)
    {

        for (int i_46 = 2; i_46 < 15;i_46 += 1)
        {
            arr_157 [i_45] [i_46] [i_45] = ((((-((var_10 ? var_3 : var_7))))) ? (((!(!var_0)))) : (!var_8));
            arr_158 [i_45] [i_46] = ((((~(~var_7)))) ? var_1 : ((var_6 ? ((var_2 ? var_7 : var_3)) : var_7)));
            arr_159 [i_45] [i_45] = ((!(~var_11)));
        }
        var_63 += ((var_0 ? var_8 : (((((var_7 ? var_10 : var_11))) ? var_9 : ((var_9 ? var_1 : var_3))))));
        var_64 = ((var_8 ? var_11 : var_7));
        var_65 = (((((var_10 ? var_10 : var_10))) ? var_11 : ((var_8 ? 27618 : ((var_3 ? var_1 : -39))))));
    }
    /* LoopNest 2 */
    for (int i_47 = 0; i_47 < 17;i_47 += 1)
    {
        for (int i_48 = 3; i_48 < 13;i_48 += 1)
        {
            {

                for (int i_49 = 2; i_49 < 14;i_49 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_50 = 0; i_50 < 17;i_50 += 1)
                    {
                        for (int i_51 = 0; i_51 < 17;i_51 += 1)
                        {
                            {
                                var_66 = ((!(((94 ? 18446744073709551615 : 159)))));
                                arr_171 [i_47] [i_48] [i_49] [i_50] [i_51] = var_9;
                            }
                        }
                    }
                    var_67 = ((((((((var_11 ? var_9 : var_3))) ? var_10 : (((var_9 ? 113 : 15)))))) ? -var_8 : var_10));
                }
                for (int i_52 = 2; i_52 < 13;i_52 += 1)
                {
                    arr_175 [i_47] [i_48] [i_52] [i_47] = ((var_11 ? (((var_3 ? var_5 : var_2))) : var_0));
                    var_68 ^= ((var_6 ? ((var_7 ? var_5 : var_0)) : var_7));
                }
                var_69 = ((-((var_4 ? var_4 : var_4))));
                var_70 = ((var_10 ? var_7 : -var_7));
            }
        }
    }
    #pragma endscop
}
