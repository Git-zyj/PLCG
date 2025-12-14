/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_0 - 1]);
                var_16 = arr_3 [i_0] [i_0];

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = (arr_7 [i_2] [i_1] [i_0]);
                    var_18 = (arr_7 [i_0] [i_0] [i_2]);
                    var_19 = (((-(arr_7 [i_0 + 1] [i_0 - 2] [i_2]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_3] [i_5] [i_6] = (max(var_3, ((min((arr_16 [i_3 + 1] [i_4 - 1] [i_3 + 1]), (arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                            var_20 = (arr_11 [1] [i_5]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_21 = ((!13285) & (arr_21 [i_3 - 1] [i_7 - 1]));
                            var_22 &= (!var_2);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_23 = (!-13290);
                            arr_31 [i_3] [i_3] [1] [i_3] = 13286;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_24 = 0;
                            var_25 = ((!((((arr_36 [i_12 + 1] [i_4 - 1]) & var_8)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_26 = (!((((!var_10) + (arr_9 [i_3] [i_3])))));

                            for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                            {
                                arr_43 [15] [i_4 - 1] [i_3] [i_14] [i_4 - 1] = (max(-13270, var_9));
                                arr_44 [i_3] [i_4 - 3] [i_4 - 3] [i_14] [18] [i_15] = ((-(((!-13285) + (max(var_0, 27520))))));
                                var_27 = ((!((max((arr_27 [i_3] [i_4 - 1] [i_4 - 1] [i_3 + 1]), 7)))));
                                var_28 = (max(var_28, -71));
                            }
                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                            {
                                arr_48 [i_3] [i_14] [i_13] [i_4] [i_3] = (arr_36 [i_4 + 1] [i_3 - 1]);
                                arr_49 [i_3 - 1] [i_3] [i_3] [i_3] [i_13] [i_14] [i_13] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_3;
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            {
                var_30 = (min(1192668202, 3652));

                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            {
                                var_31 = (max((min(253, (arr_38 [i_20] [i_21]))), (((!(arr_53 [i_21] [i_19]))))));
                                var_32 *= arr_47 [i_17] [i_18] [8] [i_20] [i_21];
                                arr_67 [i_17] [i_18] [i_19] [i_18] [i_21] = ((((1 <= (arr_24 [i_18] [i_17])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 15;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 17;i_23 += 1)
                        {
                            {
                                arr_74 [i_17] [i_18] [i_18] [7] [i_22] [i_17] [2] = var_4;
                                arr_75 [i_17] [i_17] |= ((!((!((!(arr_47 [i_17] [i_18] [i_18] [i_22 - 1] [i_23])))))));
                            }
                        }
                    }
                }
                for (int i_24 = 0; i_24 < 17;i_24 += 1) /* same iter space */
                {
                    var_33 = ((-13293 & ((((min((arr_0 [i_17] [i_24]), (arr_7 [i_17] [15] [15])))) * (arr_0 [i_17] [i_18])))));
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 17;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 17;i_26 += 1)
                        {
                            {
                                var_34 = (!0);
                                var_35 = ((!(arr_18 [i_18] [10] [10] [i_18])));
                                arr_83 [i_17] [12] [i_24] [i_24] [i_26] = var_7;
                                var_36 = (min((arr_70 [i_17] [i_18] [i_24] [i_26]), (((arr_51 [i_25] [i_26]) & (arr_51 [16] [16])))));
                            }
                        }
                    }
                }
                for (int i_27 = 0; i_27 < 17;i_27 += 1) /* same iter space */
                {
                    var_37 = (arr_5 [i_17] [i_18] [i_27]);

                    for (int i_28 = 4; i_28 < 15;i_28 += 1) /* same iter space */
                    {
                        var_38 = (arr_55 [i_17] [i_27]);

                        for (int i_29 = 0; i_29 < 17;i_29 += 1)
                        {
                            var_39 = (arr_3 [i_17] [i_28 + 2]);
                            var_40 = ((!((!(306154444 + 1)))));
                        }

                        for (int i_30 = 1; i_30 < 16;i_30 += 1)
                        {
                            arr_95 [13] [4] [13] [i_30 - 1] = max(13264, (!14336));
                            arr_96 [i_28 + 1] = ((!(((-(max(-2, 546939363)))))));
                            arr_97 [i_17] [i_17] [i_17] [i_17] [i_17] = 2;
                            arr_98 [i_17] [12] [i_18] [i_27] [i_27] [16] [i_30] = (((((-13308 + (arr_26 [i_18])))) / var_13));
                        }
                        for (int i_31 = 0; i_31 < 17;i_31 += 1)
                        {
                            arr_102 [i_17] [1] [i_17] [1] = ((!((max((arr_100 [i_27] [i_28] [i_28 + 1] [i_27] [i_28 + 1] [i_28 - 2] [i_28]), (arr_90 [1] [i_28 - 4]))))));
                            arr_103 [i_17] [i_17] [i_27] [1] [i_31] = ((((-(arr_50 [i_28 - 4]))) >= (arr_39 [3] [i_18] [i_18] [i_27] [14] [3])));
                            var_41 = (arr_35 [i_28 - 1] [i_18] [i_28 - 1] [i_28 + 1]);
                        }
                        for (int i_32 = 0; i_32 < 17;i_32 += 1)
                        {
                            var_42 = ((!((min((arr_80 [i_28 - 3]), (arr_30 [8] [i_28 - 3] [i_28 + 2]))))));
                            arr_106 [i_17] [i_17] [0] [i_28] [i_32] = (!((min((arr_76 [i_28 - 1] [i_28 - 3]), (arr_76 [i_28 - 2] [i_28 - 2])))));
                        }
                    }
                    for (int i_33 = 4; i_33 < 15;i_33 += 1) /* same iter space */
                    {
                        arr_111 [1] [i_18] [i_27] [i_18] = var_6;
                        var_43 = (max(0, (((!(arr_13 [i_33 - 1]))))));
                        var_44 = (min(var_44, (arr_89 [i_17] [i_17] [i_27] [i_33 + 1])));
                    }
                    for (int i_34 = 4; i_34 < 15;i_34 += 1) /* same iter space */
                    {
                        var_45 = (arr_61 [i_17] [16] [i_27] [i_34]);
                        var_46 = (arr_70 [i_17] [i_17] [11] [10]);
                        arr_114 [i_34 - 2] [6] [6] [i_18] [6] = ((((max((arr_105 [i_34 - 2]), (arr_105 [i_17])))) ^ (((!(arr_40 [19] [16] [i_27] [i_27]))))));
                    }
                    var_47 = -13282;
                    var_48 &= (min(var_10, (min(16845, (min((arr_16 [i_17] [6] [i_27]), 48691))))));
                }
                for (int i_35 = 0; i_35 < 17;i_35 += 1)
                {

                    /* vectorizable */
                    for (int i_36 = 0; i_36 < 17;i_36 += 1)
                    {
                        var_49 = (arr_24 [i_17] [i_18]);
                        var_50 = 0;
                    }
                    /* vectorizable */
                    for (int i_37 = 1; i_37 < 15;i_37 += 1)
                    {
                        var_51 = (!var_5);
                        var_52 = arr_108 [i_17] [i_17] [i_18] [11] [i_37 - 1] [i_37 - 1];
                    }

                    /* vectorizable */
                    for (int i_38 = 0; i_38 < 1;i_38 += 1)
                    {
                        arr_126 [i_17] [i_17] [i_38] [i_17] [i_17] = (arr_57 [i_35]);
                        arr_127 [i_17] [i_17] [i_18] |= ((-(arr_19 [i_17] [i_18] [i_35])));
                        arr_128 [i_17] [i_17] [i_17] [i_38] [i_35] [i_38] = (arr_61 [i_17] [i_18] [i_35] [i_17]);
                    }
                    for (int i_39 = 1; i_39 < 13;i_39 += 1)
                    {
                        arr_132 [i_17] [i_39] [i_35] = 11368329399262883300;
                        var_53 = (arr_100 [i_17] [i_17] [i_17] [i_17] [i_39 + 2] [i_39 + 2] [i_39 + 3]);

                        /* vectorizable */
                        for (int i_40 = 0; i_40 < 17;i_40 += 1)
                        {
                            var_54 = (((((var_9 && (arr_68 [i_17] [i_18] [4] [i_17] [2] [6])))) != (arr_13 [i_18])));
                            arr_135 [i_17] [6] [i_39] [i_35] [12] [i_39 + 4] [i_40] = ((!(arr_28 [i_39 - 1] [i_39 - 1] [i_40] [i_39 - 1])));
                        }
                    }
                }
                var_55 = (min(var_55, (((!(!1120))))));
            }
        }
    }
    #pragma endscop
}
