/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((-952243518 > (26 > 63))), ((var_8 > (var_14 > 25)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(var_20, (~var_5)));
        arr_2 [i_0] [i_0] = 930803130;
        arr_3 [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_21 = (max(var_21, (((1 > (arr_4 [i_1 - 1]))))));
        var_22 = (min(var_22, (((!(arr_1 [i_1 - 3]))))));
        var_23 ^= (var_15 > var_3);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_24 += 113;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_3] [9] = 0;
                        arr_19 [i_5] [i_5] [i_2] [i_2] [i_3] [6] = var_12;
                        var_25 = (min(var_25, (((65526 > (arr_14 [i_3] [i_5] [18]))))));
                        var_26 *= (arr_16 [i_2] [i_3] [i_2]);
                    }
                }
            }
            arr_20 [1] [i_2] [i_2] = (1959838279 > 193);
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_2] [i_6] [i_2] = (arr_15 [i_6] [i_6] [i_6] [i_6 - 1]);

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_32 [i_2] [i_2] [i_2] [i_2] = ((-(arr_21 [i_2] [i_6 - 1])));
                        var_27 = ((~(-127 - 1)));
                    }
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        var_28 = (min(var_28, (var_13 > 1)));
                        arr_36 [i_2] [i_2] = ((!(arr_35 [i_6 + 1] [i_6 - 1])));
                    }
                    var_29 = -202;
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_30 = (((arr_10 [i_2] [i_2] [i_2]) > var_18));
                        var_31 = ((!(arr_35 [i_6 + 1] [i_6 - 1])));
                        arr_42 [i_2] [i_2] [i_7] [i_2] [i_12] = -2105884659;
                    }
                    for (int i_13 = 4; i_13 < 17;i_13 += 1)
                    {
                        arr_45 [i_2] [i_11] [i_2] [5] [i_2] = var_1;
                        var_32 = (17758083310205174873 > var_7);
                    }
                    var_33 *= 1;

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_49 [i_2] [i_2] [i_6] [i_2] [i_11] [i_14] = ((var_2 > (arr_35 [i_6 + 1] [i_6])));
                        var_34 = 23252;
                    }
                }
                var_35 *= 1;
                var_36 = ((!(arr_10 [13] [i_6 - 1] [i_2])));
            }
            var_37 = (min(var_37, var_12));
            var_38 = (arr_26 [i_2]);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        arr_55 [i_2] = 72;

                        for (int i_17 = 4; i_17 < 18;i_17 += 1)
                        {
                            arr_60 [i_2] [11] [i_2] [i_16] [i_17 + 2] = (-var_4 > 14660);
                            var_39 = (max(var_39, var_12));
                            var_40 = var_11;
                            var_41 = 39954;
                        }
                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            arr_63 [i_2] [i_2] [i_15] [i_16] [i_2] = (!(~var_0));
                            var_42 = ((!(var_17 > var_11)));
                            var_43 = -1;
                            var_44 = -var_7;
                        }
                    }
                }
            }
        }
        var_45 = (arr_15 [i_2] [i_2] [i_2] [i_2]);

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                var_46 = ((var_4 > (arr_54 [i_2] [i_19] [i_2] [1] [i_20] [i_20])));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        {
                            arr_73 [i_2] [i_2] [i_20] [i_20] [9] = 4091951019;
                            var_47 = (min(var_47, (30453 > var_17)));
                        }
                    }
                }
            }
            for (int i_23 = 0; i_23 < 0;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 0;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 20;i_25 += 1)
                    {
                        {
                            var_48 ^= var_16;
                            arr_80 [i_2] [i_2] [10] [16] [i_25] = -1070274098;
                        }
                    }
                }
                var_49 = -27678;
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 18;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        {
                            var_50 = 1;
                            var_51 = (arr_68 [i_2] [i_26] [i_27]);
                            var_52 = (108 > 1396348554664496152);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 20;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 20;i_29 += 1)
                    {
                        {
                            arr_92 [i_2] [i_28] [1] [i_2] [i_19] [i_2] = var_11;
                            var_53 = ((~var_10) > (arr_87 [i_23 + 1] [i_19] [i_2]));
                        }
                    }
                }
            }

            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 20;i_31 += 1)
                {
                    for (int i_32 = 2; i_32 < 19;i_32 += 1)
                    {
                        {
                            var_54 *= (~1);
                            var_55 += ((1 > (var_16 > var_18)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_33 = 4; i_33 < 17;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 20;i_34 += 1)
                    {
                        {
                            arr_107 [i_2] [i_19] [i_2] [5] [i_34] = ((arr_96 [i_19] [i_30]) > (arr_96 [i_30] [i_30]));
                            arr_108 [i_2] = 536870911;
                            var_56 = (!-17794);
                            var_57 ^= (9623 > 31);
                        }
                    }
                }
            }
            for (int i_35 = 1; i_35 < 17;i_35 += 1)
            {
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 1;i_36 += 1)
                {
                    for (int i_37 = 1; i_37 < 17;i_37 += 1)
                    {
                        {
                            arr_120 [2] [i_36] [2] [i_36] &= var_8;
                            var_58 = (max(var_58, (var_7 > var_4)));
                            var_59 = (((arr_84 [1] [1] [1] [i_35 + 2] [i_35] [i_36] [i_37]) > 0));
                            var_60 = (max(var_60, 65));
                            var_61 = (((arr_48 [i_35] [i_35] [i_35] [i_35 + 3] [i_37] [i_37 + 3] [i_37]) > var_14));
                        }
                    }
                }
                var_62 = (max(var_62, (((-(((var_1 > (arr_118 [0] [0])))))))));
            }
            arr_121 [i_2] = 9044047086596721288;
        }
        arr_122 [i_2] = (!17);
        /* LoopNest 2 */
        for (int i_38 = 1; i_38 < 1;i_38 += 1)
        {
            for (int i_39 = 1; i_39 < 1;i_39 += 1)
            {
                {
                    arr_130 [i_2] [i_2] [i_39 - 1] [i_39] = -107;
                    arr_131 [i_2] [i_2] [i_38 - 1] [1] = (var_15 > (arr_14 [i_38 - 1] [i_2] [i_39 - 1]));
                    var_63 = (((arr_54 [i_2] [i_39] [i_2] [i_38 - 1] [1] [i_39 - 1]) | (arr_116 [18] [3] [i_39 - 1] [i_2] [i_39] [i_39])));
                }
            }
        }
    }
    var_64 = var_3;

    for (int i_40 = 1; i_40 < 8;i_40 += 1)
    {
        /* LoopNest 2 */
        for (int i_41 = 0; i_41 < 10;i_41 += 1)
        {
            for (int i_42 = 0; i_42 < 10;i_42 += 1)
            {
                {
                    var_65 = (min(var_65, ((((16352 > 1) > (-146 > 30))))));
                    arr_140 [i_40] [i_41] [1] = (arr_0 [i_40 - 1] [i_41]);
                    var_66 = ((!(-83 > 17)));
                }
            }
        }
        var_67 = (min(var_67, var_6));
    }
    for (int i_43 = 0; i_43 < 15;i_43 += 1)
    {
        var_68 = (min(var_68, 244));
        var_69 = (max(var_69, ((min((((!(!65529)))), (max(-111, (!var_5))))))));
        /* LoopNest 2 */
        for (int i_44 = 0; i_44 < 15;i_44 += 1)
        {
            for (int i_45 = 1; i_45 < 11;i_45 += 1)
            {
                {
                    var_70 = ((((((arr_43 [i_45 + 2] [i_45 + 1] [i_45 + 1] [i_45 + 3] [i_45 + 3]) > var_10))) > ((-(9218868437227405312 > 1)))));
                    /* LoopNest 2 */
                    for (int i_46 = 0; i_46 < 15;i_46 += 1)
                    {
                        for (int i_47 = 1; i_47 < 12;i_47 += 1)
                        {
                            {
                                var_71 = 65534;
                                var_72 = ((~((~(min(8172, 6179681497764504097))))));
                            }
                        }
                    }
                    var_73 = (min(var_73, var_13));
                    var_74 ^= ((arr_74 [i_43]) > (((!(arr_126 [i_45] [i_44] [i_45])))));
                }
            }
        }
        var_75 = (min(var_75, var_3));
        var_76 = (-(max(65535, (arr_102 [6] [i_43] [i_43] [i_43]))));
    }
    var_77 -= var_10;
    #pragma endscop
}
