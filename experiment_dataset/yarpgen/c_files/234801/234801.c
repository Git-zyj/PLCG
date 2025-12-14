/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (arr_1 [i_0] [i_0]);
                    var_19 = (arr_3 [i_0]);
                    var_20 *= (arr_6 [i_1] [i_1] [i_1]);
                }
            }
        }
        arr_8 [i_0] [i_0] = (arr_5 [i_0] [i_0]);

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_4] [i_0] &= 1753678532;
                        var_21 &= (arr_13 [i_0] [i_3] [i_4] [i_0]);
                        arr_17 [i_4] [i_3] [i_4] = var_3;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_22 = (arr_9 [i_3] [1] [1]);
                            var_23 = (arr_21 [i_8 + 2] [i_8 + 1] [i_8 + 3] [8]);
                            arr_26 [11] [i_3] [i_6] [12] [i_8] = ((arr_23 [i_8 + 2] [i_8 + 1] [i_8 + 4] [i_8 + 4] [i_8 - 1] [i_8 + 1]) ? (arr_23 [i_8 + 2] [i_8 + 2] [i_8 + 4] [0] [i_8 - 1] [i_8 + 1]) : (arr_23 [i_8 + 2] [i_8 + 2] [i_8 + 4] [i_8] [i_8 - 1] [i_8 + 1]));
                            var_24 = 2576717036;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_25 = arr_6 [3] [0] [i_6];
                            arr_31 [i_0] [6] [i_6] [i_0] [0] |= 65535;
                            var_26 = var_1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_36 [i_12] [i_3] [i_6] = -1;
                            var_27 = var_12;
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    arr_39 [i_6] [i_6] [7] [i_0] = (arr_2 [i_6]);

                    for (int i_14 = 3; i_14 < 13;i_14 += 1)
                    {
                        var_28 &= (arr_23 [i_13] [i_13] [i_14 + 1] [10] [i_14] [i_14 - 2]);
                        var_29 += (arr_0 [i_0]);
                    }
                    arr_42 [i_0] [i_3] [i_6] [i_6] = 1222378136;

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_30 = (arr_19 [i_15]);
                        arr_45 [i_13] [i_13] [i_13] [i_13] [i_13] [11] [i_13] &= (arr_7 [i_0] [i_13] [i_6] [i_13]);
                        var_31 = (arr_38 [i_3] [i_6] [i_13] [3]);
                        var_32 = ((65519 ? 6395 : 1441445355));
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        arr_50 [i_0] [i_0] [i_0] [3] [i_0] = 3029423496;
                        var_33 = var_3;
                        var_34 = (((arr_47 [i_0]) ? (arr_19 [i_0]) : (arr_40 [i_16] [i_0] [i_0] [i_3] [i_0] [i_0])));
                        arr_51 [i_0] [i_3] [i_3] [i_13] [i_16] = 59144;
                        var_35 &= var_4;
                    }
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                {
                    arr_55 [i_17] = (arr_24 [11] [i_3]);
                    arr_56 [i_0] [2] [i_0] [i_17] &= (((arr_14 [i_0] [i_3] [i_6] [i_17]) ? (arr_3 [i_17]) : var_6));

                    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        var_36 += var_15;
                        var_37 &= (arr_25 [i_0] [i_0]);
                        arr_60 [i_0] [i_0] &= (((arr_13 [i_0] [i_6] [i_6] [i_0]) & (arr_37 [7] [i_3] [i_17] [i_18])));
                        var_38 += (arr_3 [i_17]);
                    }
                    for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
                    {
                        arr_63 [i_0] [i_3] [i_17] [9] = var_14;
                        var_39 = var_6;
                        var_40 = (var_3 == 3029423502);
                        arr_64 [i_17] [i_17] = (var_10 ^ var_14);
                        var_41 = (arr_28 [i_19] [i_6] [i_6] [i_0]);
                    }
                    for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
                    {
                        arr_67 [i_17] = (((arr_3 [i_0]) && (arr_46 [i_6] [i_3])));
                        var_42 = ((((arr_38 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_3]) : var_10)));
                    }
                    var_43 = (max(var_43, (65535 < -69)));
                }
            }
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 15;i_23 += 1)
                    {
                        {
                            var_44 ^= 482290735;
                            var_45 = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 12;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 13;i_25 += 1)
                    {
                        {
                            arr_84 [i_0] [4] [i_0] [i_0] [i_24] = (arr_77 [i_0] [0] [i_21] [i_24 + 2] [i_25 + 1]);
                            var_46 = var_4;
                            var_47 -= (arr_62 [i_0] [i_0] [i_3] [14] [i_24] [i_24 + 3] [i_25 - 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 12;i_26 += 1)
                {
                    for (int i_27 = 3; i_27 < 13;i_27 += 1)
                    {
                        {
                            arr_93 [i_27] [3] [i_27] [i_0] [i_0] = (((arr_12 [i_0] [i_0] [i_21]) != (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_94 [i_21] [i_21] [10] [i_21] [i_27] = var_17;
                        }
                    }
                }
            }
            for (int i_28 = 0; i_28 < 15;i_28 += 1)
            {
                arr_98 [i_28] [i_28] [i_28] [1] = 42096;
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 15;i_29 += 1)
                {
                    for (int i_30 = 2; i_30 < 14;i_30 += 1)
                    {
                        {
                            arr_104 [i_0] [i_0] [3] [i_0] [i_28] [i_30 + 1] = (3 + var_7);
                            var_48 = 14401;
                            var_49 = (min(var_49, (var_16 >= var_1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_31 = 1; i_31 < 13;i_31 += 1)
                {
                    for (int i_32 = 2; i_32 < 13;i_32 += 1)
                    {
                        {
                            var_50 ^= var_7;
                            arr_110 [i_0] [i_3] [i_28] [i_31 + 2] = (var_9 ? (arr_107 [i_28] [i_32 + 1]) : -2);
                            var_51 = (arr_5 [i_31] [12]);
                            arr_111 [i_0] [i_3] [14] [12] [i_28] [i_32 - 2] [i_32 - 2] = (arr_11 [i_31 + 2] [i_31 + 1] [i_32 - 1] [i_32 - 1]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_33 = 0; i_33 < 15;i_33 += 1)
            {
                for (int i_34 = 0; i_34 < 15;i_34 += 1)
                {
                    {
                        var_52 = (min(var_52, (((var_14 && (arr_41 [i_0] [i_3] [i_0] [i_34] [i_3] [i_0]))))));
                        var_53 &= 1507802641;
                    }
                }
            }
            var_54 = (max(var_54, (arr_72 [i_0])));
        }
        for (int i_35 = 0; i_35 < 15;i_35 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_36 = 0; i_36 < 15;i_36 += 1)
            {
                for (int i_37 = 2; i_37 < 13;i_37 += 1)
                {
                    for (int i_38 = 0; i_38 < 1;i_38 += 1)
                    {
                        {
                            var_55 += 8753;
                            var_56 = var_16;
                        }
                    }
                }
            }
            var_57 = 65532;
        }
    }

    /* vectorizable */
    for (int i_39 = 0; i_39 < 25;i_39 += 1)
    {
        var_58 = ((var_5 * (((var_1 ? var_17 : var_17)))));

        for (int i_40 = 0; i_40 < 25;i_40 += 1)
        {
            var_59 = (arr_129 [i_40]);
            /* LoopNest 3 */
            for (int i_41 = 0; i_41 < 25;i_41 += 1)
            {
                for (int i_42 = 0; i_42 < 25;i_42 += 1)
                {
                    for (int i_43 = 0; i_43 < 25;i_43 += 1)
                    {
                        {
                            var_60 = arr_140 [i_43] [12] [i_41] [12] [i_39];
                            var_61 = ((var_4 ? var_0 : ((var_6 ? 4294967284 : 6))));
                            var_62 = 1222378136;
                            var_63 = ((1 ? (-3831753537354813362 & 5185302598933107772) : 7784464401244728069));
                        }
                    }
                }
            }
            var_64 = 3072589145;
            var_65 ^= (var_0 < 1);
        }
    }
    for (int i_44 = 1; i_44 < 7;i_44 += 1)
    {
        var_66 = (arr_106 [i_44] [i_44] [i_44] [i_44] [i_44]);
        var_67 = (arr_7 [i_44 + 1] [i_44 - 1] [i_44 + 1] [2]);
        /* LoopNest 2 */
        for (int i_45 = 0; i_45 < 10;i_45 += 1)
        {
            for (int i_46 = 0; i_46 < 10;i_46 += 1)
            {
                {

                    for (int i_47 = 2; i_47 < 9;i_47 += 1)
                    {
                        var_68 = (min(var_68, (((((max(4057046475, (max((arr_70 [i_44] [i_44] [i_46] [i_47] [i_47] [i_47]), var_3))))) && ((max(2787403254, 4263935418998133938))))))));
                        var_69 = (max(var_69, (((+((((((arr_2 [i_44]) ? var_14 : (arr_23 [i_45] [12] [i_45] [12] [12] [0])))) ? (12 | 0) : 88)))))));

                        for (int i_48 = 2; i_48 < 9;i_48 += 1) /* same iter space */
                        {
                            var_70 = (((arr_91 [i_44] [i_48 + 1] [i_44 - 1] [i_47 + 1] [i_48]) ? ((var_2 ? -2147483634 : (arr_38 [i_47 + 1] [i_47] [i_47 + 1] [i_48 - 1]))) : var_16));
                            var_71 = var_9;
                            var_72 = 3072589160;
                        }
                        /* vectorizable */
                        for (int i_49 = 2; i_49 < 9;i_49 += 1) /* same iter space */
                        {
                            var_73 = (min(var_73, ((((arr_133 [i_44 + 2]) && var_10)))));
                            var_74 = (max(var_74, 10133));
                        }
                        arr_159 [i_44] [i_44] [i_44] [i_47] = (max((arr_151 [i_44 - 1]), var_11));
                    }
                    /* vectorizable */
                    for (int i_50 = 1; i_50 < 9;i_50 += 1)
                    {
                        var_75 = var_8;
                        arr_162 [i_44] [i_44] [i_44 - 1] [i_45] [i_46] [i_44] &= ((var_7 ? var_14 : (arr_91 [i_44] [i_44 - 1] [i_50 + 1] [i_50 - 1] [i_50])));
                    }
                    var_76 = ((+((+(((arr_102 [i_45] [i_46]) | var_6))))));
                    /* LoopNest 2 */
                    for (int i_51 = 1; i_51 < 6;i_51 += 1)
                    {
                        for (int i_52 = 4; i_52 < 9;i_52 += 1)
                        {
                            {
                                var_77 = (min(var_77, (arr_65 [i_44] [i_45] [i_45] [i_51] [i_52])));
                                var_78 = (((max(55289, 102))) - (arr_21 [i_44] [i_44 + 3] [i_44 + 3] [i_51 + 3]));
                                var_79 = var_5;
                            }
                        }
                    }
                    var_80 = (arr_13 [i_44] [i_44] [i_44] [i_44]);
                    arr_167 [i_46] [i_45] [i_46] [i_46] &= (((arr_76 [i_46] [i_46]) == var_5));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_53 = 0; i_53 < 10;i_53 += 1)
        {
            for (int i_54 = 0; i_54 < 10;i_54 += 1)
            {
                for (int i_55 = 0; i_55 < 10;i_55 += 1)
                {
                    {
                        var_81 = ((max(89, 18446744073709551615)));
                        var_82 *= var_5;
                        arr_177 [i_55] [2] [i_54] [i_55] |= (max(12, 1));
                        var_83 += (arr_9 [i_44] [i_44] [0]);
                        var_84 += (max(var_15, (+-1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
