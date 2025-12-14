/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33770
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_14 = (_Bool)1;
                arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)86))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((signed char) (_Bool)1)))));
                var_16 = ((/* implicit */signed char) var_2);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_1] |= ((((/* implicit */_Bool) (signed char)84)) || ((_Bool)1));
                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
            }
            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
        }
        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] [i_0] = ((/* implicit */_Bool) arr_4 [(_Bool)1] [i_4] [(_Bool)1]);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [(_Bool)1] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                            var_19 = ((/* implicit */signed char) (((!(var_2))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */signed char) ((_Bool) (_Bool)1));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (((((/* implicit */int) (signed char)2)) + (((/* implicit */int) var_4)))) : (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 9; i_13 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_13 + 1] [i_13 + 2] [i_13 + 2])) ? (((/* implicit */int) arr_6 [i_13 + 3] [i_8] [i_9] [i_12])) : (((/* implicit */int) var_13)))))));
                        var_23 *= ((/* implicit */signed char) var_12);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))));
                    }
                    var_25 = ((/* implicit */_Bool) max((var_25), ((_Bool)1)));
                    arr_40 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                }
                for (signed char i_14 = 1; i_14 < 11; i_14 += 4) 
                {
                    var_26 = var_13;
                    var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
                    var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-75)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_9 [i_14 - 1] [i_14] [i_14 + 1]))));
                    arr_44 [i_0] [i_8] [i_9] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)41)) / (((/* implicit */int) var_7))));
                    var_29 = var_2;
                }
                for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    var_30 = ((/* implicit */signed char) var_8);
                    var_31 -= ((/* implicit */_Bool) var_11);
                }
                for (signed char i_16 = 3; i_16 < 10; i_16 += 4) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))));
                        arr_54 [i_16] [i_16 + 1] [i_9] [i_8] [i_16] = ((((/* implicit */_Bool) (signed char)13)) || (((_Bool) var_11)));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [(_Bool)1] [i_9] [(_Bool)1] [(signed char)0] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_16 + 2])) + (((/* implicit */int) arr_33 [(signed char)11] [(_Bool)1] [i_9] [i_9] [i_9] [i_18] [i_16 - 2]))));
                        arr_59 [i_16] [i_8] [i_9] [i_16] = ((/* implicit */signed char) (_Bool)1);
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (signed char)25)) < (((/* implicit */int) arr_22 [i_0]))))))))));
                        arr_60 [i_0] [i_8] [i_9] [i_16] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) << (((/* implicit */int) arr_12 [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_18]))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_35 = (((_Bool)1) || ((_Bool)1));
                        arr_65 [i_0] [(signed char)3] [i_16] [i_16] [(signed char)3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_16 - 2] [i_16] [i_19]))));
                        var_36 = ((/* implicit */signed char) var_9);
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_68 [i_20] [i_16] [i_0] [(signed char)0] [i_0] |= arr_20 [i_16 + 1] [i_16] [i_16 - 2];
                        arr_69 [i_9] [i_8] [(_Bool)0] [i_16] [i_20] [i_16] [i_20] = (_Bool)1;
                        var_37 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                    }
                    arr_70 [i_0] [i_8] [(_Bool)1] [i_16] = ((/* implicit */_Bool) var_10);
                    var_38 *= ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-26))));
                }
                /* LoopSeq 1 */
                for (signed char i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) var_5))));
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_40 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_30 [i_22] [i_21] [i_9]))));
                        var_41 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-123))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) var_7)))));
                        var_42 = ((/* implicit */signed char) (_Bool)1);
                        var_43 *= var_12;
                    }
                    for (signed char i_23 = 2; i_23 < 11; i_23 += 4) 
                    {
                        arr_82 [(signed char)0] [i_9] [(signed char)0] = var_6;
                        var_44 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_7))));
                        var_45 = ((/* implicit */_Bool) var_10);
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) var_6))));
                    }
                }
                var_47 -= ((/* implicit */signed char) ((var_0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)68))));
            }
            var_48 |= ((/* implicit */_Bool) var_11);
        }
        var_49 *= ((/* implicit */signed char) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (signed char i_24 = 1; i_24 < 21; i_24 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_25 = 1; i_25 < 20; i_25 += 4) 
        {
            var_50 = var_13;
            /* LoopNest 2 */
            for (signed char i_26 = 0; i_26 < 23; i_26 += 4) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            arr_98 [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))));
                            arr_99 [i_24] [i_24] = ((/* implicit */_Bool) (signed char)-12);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                        {
                            var_51 -= (!((_Bool)0));
                            var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) var_5))));
                            var_53 *= ((/* implicit */_Bool) var_7);
                            var_54 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))));
                            var_55 = (signed char)33;
                        }
                        var_56 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-47))));
                        var_57 -= ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_31 = 0; i_31 < 23; i_31 += 4) 
            {
                for (signed char i_32 = 3; i_32 < 22; i_32 += 4) 
                {
                    {
                        var_58 *= (signed char)50;
                        arr_109 [i_32 - 3] [i_24] [i_24] [i_24] = ((/* implicit */_Bool) (signed char)-38);
                        arr_110 [i_24] [i_31] [i_31] [(_Bool)1] [(signed char)10] = ((/* implicit */signed char) ((arr_92 [i_24 + 1]) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) var_12))));
                        /* LoopSeq 1 */
                        for (signed char i_33 = 0; i_33 < 23; i_33 += 4) 
                        {
                            var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))))));
                            var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))));
                            arr_114 [i_24] [(_Bool)1] [i_24] [(_Bool)1] [i_24] = ((((/* implicit */_Bool) var_11)) || (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_2)))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
            {
                arr_118 [i_24] [i_24] [i_34] = ((_Bool) (-(((/* implicit */int) var_13))));
                /* LoopSeq 4 */
                for (signed char i_35 = 0; i_35 < 23; i_35 += 4) 
                {
                    var_61 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 3 */
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        arr_123 [i_24 + 2] [i_30] [(signed char)7] [i_34] [i_24] = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                        var_62 = ((((/* implicit */int) var_2)) > (((/* implicit */int) var_11)));
                    }
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) /* same iter space */
                    {
                        arr_127 [i_24] [i_30] [i_34] [i_35] [i_37] [(signed char)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_103 [i_24]))));
                        var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) var_0))));
                        var_64 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) ((_Bool) arr_111 [i_24 + 2] [i_24])))));
                    }
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) /* same iter space */
                    {
                        var_65 = (signed char)28;
                        var_66 = ((/* implicit */signed char) ((var_5) ? (((/* implicit */int) arr_97 [i_24 + 1])) : (((/* implicit */int) (signed char)19))));
                    }
                    var_67 = ((/* implicit */signed char) (-((~(((/* implicit */int) var_4))))));
                    arr_130 [i_35] [i_24] [i_24] [i_35] = var_8;
                    /* LoopSeq 1 */
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        var_68 = ((signed char) var_11);
                        var_69 = (signed char)-64;
                    }
                }
                for (signed char i_40 = 0; i_40 < 23; i_40 += 2) 
                {
                    var_70 = ((/* implicit */_Bool) min((var_70), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_126 [i_24] [i_40])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) var_13)))))));
                    /* LoopSeq 4 */
                    for (signed char i_41 = 0; i_41 < 23; i_41 += 1) 
                    {
                        var_71 = ((/* implicit */_Bool) var_10);
                        arr_139 [(_Bool)1] [i_30] [i_34] [i_30] [i_24] = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_12))));
                    }
                    for (signed char i_42 = 0; i_42 < 23; i_42 += 4) 
                    {
                        var_72 = ((/* implicit */signed char) ((var_12) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)57))));
                        var_73 |= ((/* implicit */signed char) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_5)))))));
                        var_74 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                        var_75 *= ((/* implicit */_Bool) ((arr_137 [(_Bool)1] [i_42] [i_40] [i_24] [i_24 + 2] [i_42] [i_24]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))));
                        var_76 = ((_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))));
                    }
                    for (signed char i_43 = 0; i_43 < 23; i_43 += 4) 
                    {
                        var_77 = ((/* implicit */_Bool) min((var_77), (((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
                        var_78 = (i_24 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_115 [i_24] [i_24 + 1] [(_Bool)1] [(signed char)15]))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_115 [i_24] [i_24 + 1] [(_Bool)1] [(signed char)15])))));
                    }
                    for (signed char i_44 = 3; i_44 < 22; i_44 += 1) 
                    {
                        arr_148 [(signed char)7] [(_Bool)1] [i_34] [i_34] [i_24] [i_40] [i_44] = ((/* implicit */signed char) (!((_Bool)1)));
                        arr_149 [i_24] [i_24] [i_34] [i_24] [i_24] = ((signed char) var_11);
                        arr_150 [(signed char)4] [i_30] [i_44] [i_40] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) * (((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-26))))));
                        arr_151 [i_34] [i_24] [i_34] [i_30] [i_24] [i_24] = ((_Bool) var_10);
                        var_79 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_135 [(_Bool)1] [(signed char)0] [i_30])) > (((/* implicit */int) var_2))))) > (((/* implicit */int) arr_96 [(signed char)7] [(signed char)11] [(_Bool)1]))));
                    }
                }
                for (signed char i_45 = 2; i_45 < 21; i_45 += 2) 
                {
                    arr_154 [i_45] [i_45] |= ((/* implicit */signed char) (_Bool)1);
                    var_80 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                }
                for (_Bool i_46 = 0; i_46 < 1; i_46 += 1) 
                {
                    arr_158 [i_24] [(signed char)20] [i_34] [(_Bool)1] [i_24] [i_30] = (!(((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((((/* implicit */int) var_10)) + (84))) - (10)))))));
                    var_81 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))));
                    var_82 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_144 [i_24 + 2] [i_30]))));
                    arr_159 [i_24] [i_30] [i_30] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                    /* LoopSeq 2 */
                    for (_Bool i_47 = 0; i_47 < 1; i_47 += 1) 
                    {
                        var_83 = ((/* implicit */signed char) ((((/* implicit */int) arr_131 [(_Bool)1] [i_30] [i_34] [i_46] [i_47])) != (((/* implicit */int) ((_Bool) (signed char)-19)))));
                        var_84 &= arr_145 [i_24] [i_24] [i_24] [i_24] [i_24 + 2];
                    }
                    for (signed char i_48 = 0; i_48 < 23; i_48 += 2) 
                    {
                        var_85 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)114))));
                        var_86 = var_13;
                        var_87 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                    }
                }
            }
            for (_Bool i_49 = 0; i_49 < 1; i_49 += 1) /* same iter space */
            {
                arr_169 [i_24] [i_30] [i_49] [i_24] = ((/* implicit */signed char) var_12);
                var_88 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_13)))));
                arr_170 [i_49] [i_24] [i_24] [(signed char)1] = var_10;
            }
        }
        for (signed char i_50 = 0; i_50 < 23; i_50 += 4) 
        {
            var_89 = (signed char)-19;
            var_90 = ((signed char) var_12);
            /* LoopNest 3 */
            for (signed char i_51 = 0; i_51 < 23; i_51 += 1) 
            {
                for (signed char i_52 = 3; i_52 < 22; i_52 += 4) 
                {
                    for (signed char i_53 = 3; i_53 < 21; i_53 += 4) 
                    {
                        {
                            arr_181 [i_24] [i_24] [i_24] [i_24] [(signed char)15] [i_24] [i_24] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-103)) + (2147483647))) << (((/* implicit */int) arr_116 [i_24 + 2]))));
                            var_91 = ((/* implicit */_Bool) max((var_91), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                            arr_182 [i_24] = ((((/* implicit */int) arr_100 [i_52 - 2] [(signed char)0])) > (((/* implicit */int) (_Bool)1)));
                            var_92 = ((/* implicit */signed char) (((_Bool)1) && (var_9)));
                            var_93 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_94 = ((/* implicit */signed char) max((var_94), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1)))))));
        }
        var_95 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_141 [i_24 + 2] [i_24] [i_24 + 2])) != (((/* implicit */int) var_13))));
    }
    var_96 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
}
