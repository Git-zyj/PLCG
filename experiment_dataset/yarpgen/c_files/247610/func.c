/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247610
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [1] [i_3] = ((/* implicit */long long int) var_0);
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_0))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) var_2);
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_9)), (var_11)))))));
                                arr_18 [i_0 - 2] [9LL] [i_2] [3ULL] [0U] = ((/* implicit */unsigned char) var_3);
                                var_18 = ((/* implicit */unsigned int) var_10);
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (signed char i_8 = 3; i_8 < 19; i_8 += 4) 
            {
                {
                    var_20 = min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) min((((/* implicit */int) var_7)), (var_1)))), (var_12))));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((max((3726405570U), (922563546U))), (((/* implicit */unsigned int) var_5))))), (var_3)));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_22 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) var_7)), (min((((/* implicit */int) var_0)), (var_1)))))), (min((min((((/* implicit */long long int) var_4)), (var_12))), (min((var_12), (((/* implicit */long long int) var_2))))))));
                            var_23 = ((/* implicit */_Bool) var_9);
                            arr_30 [i_0] [i_9] [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) max((min((min((var_13), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_4))))))), (((/* implicit */unsigned long long int) var_4))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_2))));
                            arr_31 [i_8 - 1] [i_0] = max((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) min((((/* implicit */short) var_9)), (var_5))))))), (var_8));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_5)), (max((((/* implicit */int) var_0)), (var_14))))), (((/* implicit */int) var_9))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_5)), (max((var_10), (var_14))))), (var_14)));
                            var_27 ^= var_11;
                        }
                        arr_38 [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
                        arr_39 [i_0] [i_0] [i_8] [i_11] [i_0] = ((/* implicit */int) var_9);
                    }
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_28 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)183)), (3372403749U)));
                        var_29 = ((/* implicit */unsigned int) var_1);
                    }
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 18; i_15 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) var_1);
                                var_32 = ((/* implicit */int) max((var_8), (((/* implicit */unsigned long long int) var_7))));
                                var_33 = ((/* implicit */short) min((var_11), (var_12)));
                                var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (var_8)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            for (int i_17 = 3; i_17 < 16; i_17 += 4) 
            {
                for (long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) var_5)), (min((var_2), (((/* implicit */int) var_0))))))), (max((max((var_6), (var_3))), (((/* implicit */long long int) var_9))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            var_36 = ((/* implicit */short) max(((unsigned char)215), ((unsigned char)59)));
                            arr_60 [i_18] [i_18] [i_16] [i_18] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_4)))), (var_6)));
                            var_37 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_10)), (var_13)));
                            var_38 = ((/* implicit */int) var_12);
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned char) var_2);
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) var_10))));
                            arr_63 [(unsigned char)6] [i_16] [i_16] [i_18] [i_20] = ((/* implicit */unsigned int) var_9);
                            var_41 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (_Bool)1)), (528482304))), (((/* implicit */int) (unsigned char)174))));
                        }
                        for (int i_21 = 2; i_21 < 19; i_21 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) var_10);
                            var_43 = var_8;
                            arr_68 [i_18] [i_17] [i_17] [i_16] [i_18] = ((/* implicit */unsigned long long int) var_7);
                            var_44 = ((/* implicit */long long int) var_14);
                        }
                        for (long long int i_22 = 2; i_22 < 17; i_22 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_5), (((/* implicit */short) var_7))))), (var_4)))), (var_12)));
                            var_46 = ((/* implicit */unsigned char) var_11);
                            arr_71 [i_0] [i_18] [10LL] [i_18] [i_22] = ((/* implicit */int) var_12);
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_23 = 0; i_23 < 20; i_23 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 2) 
        {
            for (short i_25 = 0; i_25 < 20; i_25 += 1) 
            {
                for (long long int i_26 = 2; i_26 < 17; i_26 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_27 = 0; i_27 < 20; i_27 += 3) /* same iter space */
                        {
                            var_47 ^= ((/* implicit */int) var_5);
                            var_48 = max((min((3372403749U), (568561725U))), (((/* implicit */unsigned int) var_1)));
                            var_49 = ((/* implicit */signed char) max((var_6), (((/* implicit */long long int) var_9))));
                        }
                        /* vectorizable */
                        for (unsigned int i_28 = 0; i_28 < 20; i_28 += 3) /* same iter space */
                        {
                            arr_86 [i_24] [i_24] = ((/* implicit */long long int) var_5);
                            arr_87 [i_23] [i_23] [i_23] [i_23] [i_24] = ((/* implicit */short) var_11);
                        }
                        for (unsigned int i_29 = 0; i_29 < 20; i_29 += 3) /* same iter space */
                        {
                            var_50 |= max((var_12), (((/* implicit */long long int) var_1)));
                            var_51 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_12)));
                        }
                        arr_91 [i_23] [i_24] = ((/* implicit */int) var_7);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_30 = 3; i_30 < 17; i_30 += 1) 
        {
            for (short i_31 = 1; i_31 < 19; i_31 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_32 = 2; i_32 < 18; i_32 += 4) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned int) var_2);
                        arr_99 [i_23] [i_23] [i_23] [i_32 - 2] = var_10;
                    }
                    for (unsigned int i_33 = 2; i_33 < 18; i_33 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_34 = 0; i_34 < 20; i_34 += 2) 
                        {
                            arr_104 [i_23] [i_30] [i_30] [i_23] [i_34] [i_34] [i_23] = ((/* implicit */short) var_9);
                            var_53 = ((/* implicit */long long int) var_7);
                            arr_105 [i_23] [16ULL] [i_30] [i_31] [i_33] [i_31] [(unsigned char)13] = ((/* implicit */long long int) var_4);
                        }
                        for (long long int i_35 = 0; i_35 < 20; i_35 += 4) /* same iter space */
                        {
                            var_54 -= ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned char) var_9))));
                            arr_108 [i_23] = ((/* implicit */unsigned int) var_1);
                            arr_109 [i_23] [i_30 + 2] [i_23] [i_33] [0ULL] [i_30 + 2] = ((/* implicit */unsigned char) var_4);
                        }
                        /* vectorizable */
                        for (long long int i_36 = 0; i_36 < 20; i_36 += 4) /* same iter space */
                        {
                            var_55 += ((/* implicit */signed char) var_7);
                            arr_112 [i_23] [i_23] [i_33] [i_33] [(signed char)4] = ((/* implicit */int) var_9);
                        }
                        var_56 = ((/* implicit */int) min((((/* implicit */unsigned int) var_14)), (min((((/* implicit */unsigned int) var_10)), (max((3726405570U), (1993910096U)))))));
                    }
                    for (unsigned long long int i_37 = 0; i_37 < 20; i_37 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) var_1)))))));
                        var_58 = ((/* implicit */_Bool) max((var_13), (max((var_8), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_10)))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_38 = 0; i_38 < 20; i_38 += 2) 
                    {
                        for (signed char i_39 = 2; i_39 < 18; i_39 += 2) 
                        {
                            {
                                var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) var_3))));
                                arr_121 [i_23] [i_30] [i_38] [i_39] = ((/* implicit */signed char) max((var_12), (min((var_6), (min((var_12), (((/* implicit */long long int) var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_60 = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned long long int) var_14)), (var_13))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_5))));
        /* LoopSeq 1 */
        for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_41 = 0; i_41 < 20; i_41 += 1) 
            {
                for (signed char i_42 = 2; i_42 < 17; i_42 += 3) 
                {
                    {
                        var_61 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 922563546U)))), (min((((/* implicit */long long int) (_Bool)1)), (6266847393793009034LL)))))), (max((((/* implicit */unsigned long long int) var_5)), (max((10213745950815787163ULL), (((/* implicit */unsigned long long int) 66584576U))))))));
                        /* LoopSeq 2 */
                        for (int i_43 = 1; i_43 < 17; i_43 += 4) /* same iter space */
                        {
                            arr_131 [i_23] [i_23] [i_40] = var_3;
                            var_62 = ((/* implicit */_Bool) var_1);
                            arr_132 [i_40] [i_42 - 1] [i_40] = ((/* implicit */signed char) min((((/* implicit */int) var_5)), (var_14)));
                        }
                        for (int i_44 = 1; i_44 < 17; i_44 += 4) /* same iter space */
                        {
                            var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (min((((/* implicit */long long int) var_5)), (min((var_6), (var_6))))))))));
                            arr_136 [i_40] [i_44] = ((/* implicit */unsigned int) min((var_3), (min((min((var_11), (((/* implicit */long long int) var_10)))), (min((((/* implicit */long long int) var_2)), (var_3)))))));
                            arr_137 [i_40] [i_40] [i_41] [i_40] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (max((min((var_13), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_11))))))));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_45 = 0; i_45 < 20; i_45 += 4) /* same iter space */
                        {
                            var_64 = ((/* implicit */unsigned char) var_4);
                            var_65 = var_5;
                            var_66 ^= ((/* implicit */long long int) max((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_0))))), (max((var_14), (var_10)))));
                            var_67 = ((/* implicit */int) var_12);
                        }
                        /* vectorizable */
                        for (long long int i_46 = 0; i_46 < 20; i_46 += 4) /* same iter space */
                        {
                            var_68 = ((/* implicit */long long int) var_7);
                            var_69 = ((/* implicit */signed char) var_10);
                            var_70 = var_10;
                            var_71 = ((/* implicit */int) var_13);
                            var_72 = ((/* implicit */signed char) var_5);
                        }
                        for (long long int i_47 = 0; i_47 < 20; i_47 += 4) /* same iter space */
                        {
                            var_73 = ((/* implicit */int) var_0);
                            var_74 = ((/* implicit */unsigned int) max((var_6), (((/* implicit */long long int) min((var_5), (((/* implicit */short) var_9)))))));
                            var_75 = ((/* implicit */short) max((min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_5)), (var_12))))), (max((((/* implicit */long long int) var_2)), (var_11)))));
                            var_76 = ((/* implicit */unsigned long long int) min((var_76), (((/* implicit */unsigned long long int) var_2))));
                        }
                        /* vectorizable */
                        for (_Bool i_48 = 0; i_48 < 1; i_48 += 1) 
                        {
                            var_77 = ((/* implicit */unsigned int) max((var_77), (((/* implicit */unsigned int) var_3))));
                            arr_149 [i_23] [i_40] [i_23] [(_Bool)0] [i_40] = ((/* implicit */_Bool) var_0);
                        }
                        var_78 = ((/* implicit */unsigned char) var_12);
                        arr_150 [i_40] = ((/* implicit */long long int) var_4);
                    }
                } 
            } 
            arr_151 [i_40] = min((((/* implicit */int) max((var_9), (var_9)))), (var_10));
        }
    }
    for (int i_49 = 3; i_49 < 22; i_49 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_50 = 2; i_50 < 20; i_50 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_51 = 1; i_51 < 22; i_51 += 4) 
            {
                arr_160 [i_49] [i_50] [i_49] = var_6;
                arr_161 [i_49] [(_Bool)1] [0LL] = ((/* implicit */short) var_1);
            }
            /* LoopSeq 1 */
            for (long long int i_52 = 4; i_52 < 22; i_52 += 4) 
            {
                /* LoopNest 2 */
                for (short i_53 = 3; i_53 < 21; i_53 += 3) 
                {
                    for (long long int i_54 = 3; i_54 < 21; i_54 += 4) 
                    {
                        {
                            var_79 = ((/* implicit */_Bool) min((min((min((var_6), (var_6))), (var_6))), (((/* implicit */long long int) min((max((var_4), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_10)))))));
                            arr_169 [i_52] [i_52 - 2] [i_52] [i_52] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_1)), (max((min((((/* implicit */unsigned int) (_Bool)1)), (3372403743U))), (((/* implicit */unsigned int) var_14))))));
                            var_80 += ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                arr_170 [i_49] [i_49] = ((/* implicit */signed char) var_7);
            }
            var_81 = ((/* implicit */long long int) var_10);
        }
        arr_171 [i_49] = ((/* implicit */int) var_12);
        var_82 = ((/* implicit */long long int) var_9);
    }
    /* vectorizable */
    for (int i_55 = 0; i_55 < 15; i_55 += 1) 
    {
        var_83 = ((/* implicit */unsigned char) var_1);
        /* LoopSeq 1 */
        for (short i_56 = 0; i_56 < 15; i_56 += 1) 
        {
            arr_177 [i_55] [i_56] = ((/* implicit */long long int) var_5);
            arr_178 [i_56] = ((/* implicit */signed char) var_8);
            arr_179 [i_56] [i_56] = ((/* implicit */unsigned char) var_13);
        }
        var_84 = ((/* implicit */_Bool) var_0);
    }
    var_85 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (min((max((((/* implicit */unsigned long long int) var_10)), (var_13))), (((/* implicit */unsigned long long int) var_3))))));
}
