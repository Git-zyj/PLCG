/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36638
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
    var_20 = min((var_18), (var_3));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_14 [(unsigned char)4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_19))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) (-(var_15)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_1] [i_1] [i_2] = ((unsigned char) var_3);
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(var_11))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (var_4)));
                }
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_21 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) var_6));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((unsigned int) var_11));
                        arr_25 [i_7] [1ULL] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned int) var_12)))));
                    }
                }
            }
            /* LoopSeq 3 */
            for (unsigned int i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        arr_33 [(unsigned short)8] [i_1] [(unsigned short)8] [i_1] [i_1] = (+(var_12));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_2))));
                    }
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        arr_37 [i_0] [i_1] = ((/* implicit */int) (~(var_4)));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((unsigned int) var_15)))));
                    }
                    var_27 += ((/* implicit */int) (!(((/* implicit */_Bool) 974744088U))));
                }
                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    arr_40 [i_12] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_18);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((int) (signed char)-1)))));
                        var_30 = ((unsigned int) var_13);
                    }
                    for (int i_14 = 2; i_14 < 12; i_14 += 3) 
                    {
                        arr_47 [i_0] [(signed char)10] [i_0] [i_8] [i_12] [i_0] [i_14] = ((/* implicit */unsigned int) ((long long int) var_13));
                        arr_48 [i_0] [i_0] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */unsigned int) (-(2097144LL)));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_15 = 2; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) (~(var_15)));
                        arr_53 [i_0] [i_1] [i_8] [i_12] [i_15 + 2] = ((unsigned long long int) var_9);
                        var_32 = ((/* implicit */short) (~(var_14)));
                        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                        var_34 = ((/* implicit */unsigned char) var_5);
                    }
                    for (long long int i_16 = 2; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        arr_56 [(short)4] [4ULL] [i_8] [i_8] [i_16] = ((/* implicit */long long int) ((unsigned int) var_16));
                        arr_57 [i_16] [i_16] = ((/* implicit */unsigned char) ((_Bool) var_19));
                        arr_58 [i_16] [i_16] [i_16] [i_16] [8U] [i_16 + 2] [i_16] = ((short) var_13);
                        arr_59 [i_0] [i_1] [i_8] [i_0] [i_16] = ((unsigned int) var_15);
                    }
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
                    {
                        arr_63 [4ULL] [i_12] [i_17] [i_17] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) var_17));
                        var_35 = ((/* implicit */long long int) (!(var_5)));
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)2)))))));
                    }
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) ((unsigned char) var_19));
                        var_38 |= ((/* implicit */unsigned char) ((int) var_14));
                        var_39 = (+(var_1));
                        arr_67 [i_12] [i_1] = ((int) var_3);
                    }
                    var_40 *= ((/* implicit */short) (~(var_1)));
                    var_41 = ((/* implicit */short) (-(((/* implicit */int) var_16))));
                }
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    for (long long int i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */long long int) ((short) var_0));
                            arr_72 [i_8] [i_19] [4LL] [i_20] [i_19] [i_8] = ((/* implicit */short) ((long long int) var_18));
                            arr_73 [i_0] [i_1] [i_8] |= ((/* implicit */short) (~(var_1)));
                            var_43 *= ((/* implicit */_Bool) ((unsigned char) var_0));
                        }
                    } 
                } 
            }
            for (unsigned int i_21 = 3; i_21 < 12; i_21 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_22 = 0; i_22 < 14; i_22 += 2) 
                {
                    var_44 = ((/* implicit */signed char) ((unsigned int) var_17));
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        arr_80 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) var_0)))));
                        var_45 *= ((/* implicit */unsigned char) ((unsigned int) var_18));
                        arr_81 [i_0] [3LL] = ((_Bool) var_0);
                    }
                    var_46 = ((/* implicit */int) ((long long int) var_0));
                    arr_82 [i_22] [i_0] [i_21] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                }
                for (unsigned short i_24 = 0; i_24 < 14; i_24 += 3) 
                {
                    var_47 = ((/* implicit */_Bool) var_2);
                    var_48 = ((/* implicit */short) var_1);
                    var_49 += ((/* implicit */short) (-(((/* implicit */int) var_5))));
                }
                for (signed char i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) (~(-1LL)));
                        var_51 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        arr_91 [i_25] [i_25] [i_21] [12ULL] [(unsigned char)7] [i_1] [i_25] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                        var_52 = ((/* implicit */int) (-(var_0)));
                        var_53 = ((unsigned int) var_4);
                        var_54 = ((/* implicit */_Bool) max((var_54), ((!(((/* implicit */_Bool) var_19))))));
                        var_55 = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (long long int i_28 = 0; i_28 < 14; i_28 += 1) 
                    {
                        arr_96 [i_25] [i_1] [i_21] [i_25] [i_28] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
                        var_56 = (+(var_14));
                        var_57 = ((/* implicit */unsigned int) var_6);
                        arr_97 [i_0] [i_25] [i_25] = (+(((/* implicit */int) var_17)));
                        arr_98 [(signed char)9] [i_25] [i_25] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_8)))));
                    }
                    for (unsigned int i_29 = 3; i_29 < 10; i_29 += 2) 
                    {
                        arr_102 [i_29] [i_25] [i_25] [i_21] [i_25] [13ULL] [i_0] = ((/* implicit */long long int) ((_Bool) var_0));
                        var_58 = ((/* implicit */long long int) var_6);
                        var_59 = ((/* implicit */_Bool) ((long long int) var_0));
                    }
                    var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) var_19))));
                }
                arr_103 [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) var_4));
            }
            for (short i_30 = 0; i_30 < 14; i_30 += 3) 
            {
                /* LoopSeq 4 */
                for (long long int i_31 = 2; i_31 < 13; i_31 += 3) 
                {
                    var_61 = ((/* implicit */long long int) max((var_61), (((/* implicit */long long int) ((signed char) var_3)))));
                    var_62 = ((unsigned char) var_6);
                    var_63 = ((/* implicit */signed char) ((unsigned char) var_19));
                }
                for (unsigned char i_32 = 1; i_32 < 13; i_32 += 1) 
                {
                    var_64 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)110))));
                    arr_111 [i_0] [i_32] [i_32] [(unsigned char)3] = ((/* implicit */unsigned long long int) var_12);
                }
                for (signed char i_33 = 0; i_33 < 14; i_33 += 4) /* same iter space */
                {
                    var_65 *= ((/* implicit */short) (-(var_14)));
                    /* LoopSeq 1 */
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        arr_117 [i_0] [i_0] [i_0] [i_0] [i_34] = ((unsigned long long int) var_5);
                        arr_118 [i_0] [i_0] [i_34] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) var_16));
                        var_66 = ((/* implicit */_Bool) (~(var_11)));
                        arr_119 [i_1] [i_1] [i_1] [i_33] [i_34] [i_34] [i_34] = ((/* implicit */unsigned long long int) var_11);
                    }
                }
                for (signed char i_35 = 0; i_35 < 14; i_35 += 4) /* same iter space */
                {
                    var_67 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-31690))));
                    /* LoopSeq 2 */
                    for (unsigned short i_36 = 0; i_36 < 14; i_36 += 4) 
                    {
                        var_68 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_19))));
                        arr_126 [i_36] [(unsigned char)6] [i_36] = ((/* implicit */long long int) (-(var_19)));
                        var_69 = ((/* implicit */int) min((var_69), (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                        var_70 = ((/* implicit */long long int) ((unsigned char) var_2));
                    }
                    for (unsigned int i_37 = 0; i_37 < 14; i_37 += 1) 
                    {
                        arr_129 [i_37] [2U] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned char) var_2));
                        arr_130 [i_35] [i_35] [i_35] [i_35] [i_35] = ((/* implicit */int) ((short) var_13));
                        var_71 = ((/* implicit */short) min((var_71), (((/* implicit */short) var_19))));
                    }
                    var_72 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                }
                /* LoopNest 2 */
                for (long long int i_38 = 0; i_38 < 14; i_38 += 3) 
                {
                    for (long long int i_39 = 2; i_39 < 12; i_39 += 3) 
                    {
                        {
                            var_73 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                            var_74 = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_16))))));
                            var_75 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
                        }
                    } 
                } 
                arr_137 [i_30] [i_1] = ((/* implicit */_Bool) var_10);
            }
        }
        var_76 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_16)))));
    }
    /* vectorizable */
    for (unsigned int i_40 = 2; i_40 < 23; i_40 += 4) 
    {
        arr_141 [i_40] = ((/* implicit */long long int) ((unsigned char) var_19));
        /* LoopNest 2 */
        for (unsigned char i_41 = 0; i_41 < 25; i_41 += 1) 
        {
            for (unsigned int i_42 = 1; i_42 < 24; i_42 += 2) 
            {
                {
                    var_77 = ((/* implicit */unsigned int) (-(((long long int) 4294967278U))));
                    /* LoopSeq 1 */
                    for (signed char i_43 = 0; i_43 < 25; i_43 += 2) 
                    {
                        var_78 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_17))));
                        var_79 = ((long long int) ((signed char) var_2));
                        /* LoopSeq 2 */
                        for (unsigned short i_44 = 0; i_44 < 25; i_44 += 2) 
                        {
                            var_80 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
                            arr_151 [i_44] [20ULL] [i_42] [i_41] [i_40] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
                        }
                        for (short i_45 = 0; i_45 < 25; i_45 += 4) 
                        {
                            arr_155 [i_42] [4U] [i_42] [i_43] [4U] = ((/* implicit */int) ((short) var_2));
                            var_81 = ((/* implicit */unsigned long long int) (~(var_12)));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_46 = 0; i_46 < 25; i_46 += 3) 
                    {
                        arr_160 [i_42] [i_41] [i_42] [i_42] = ((/* implicit */long long int) (!(var_5)));
                        arr_161 [24ULL] [i_42] [i_42] [i_40] = ((/* implicit */unsigned short) ((int) var_18));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_47 = 0; i_47 < 25; i_47 += 1) /* same iter space */
                    {
                        arr_165 [i_40] [i_42] [i_40] [i_40] [i_40] = ((/* implicit */signed char) var_16);
                        arr_166 [i_42] [i_41] = ((/* implicit */unsigned char) var_11);
                    }
                    for (signed char i_48 = 0; i_48 < 25; i_48 += 1) /* same iter space */
                    {
                        var_82 += ((/* implicit */long long int) ((unsigned int) var_18));
                        /* LoopSeq 2 */
                        for (unsigned int i_49 = 0; i_49 < 25; i_49 += 2) /* same iter space */
                        {
                            var_83 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
                            arr_174 [i_42] [i_41] [i_42] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -6495510771029929694LL))));
                            var_84 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                            arr_175 [i_40] [i_42] [i_42] [(unsigned short)10] [i_48] [i_42] [i_49] = ((/* implicit */long long int) var_9);
                        }
                        for (unsigned int i_50 = 0; i_50 < 25; i_50 += 2) /* same iter space */
                        {
                            var_85 = ((/* implicit */unsigned char) ((_Bool) var_4));
                            arr_180 [i_40] [i_42] [i_42] [i_42] [i_40] [i_42] [i_41] = ((/* implicit */_Bool) var_8);
                        }
                        var_86 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_51 = 2; i_51 < 24; i_51 += 1) 
                    {
                        for (_Bool i_52 = 0; i_52 < 1; i_52 += 1) 
                        {
                            {
                                arr_186 [i_42] [i_42] [i_40] [i_42] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                                arr_187 [i_42] [i_52] [i_51 - 1] [10LL] [i_42 + 1] [10LL] [i_42] = ((/* implicit */int) (-(var_15)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_53 = 0; i_53 < 25; i_53 += 1) 
        {
            for (signed char i_54 = 0; i_54 < 25; i_54 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_55 = 3; i_55 < 22; i_55 += 2) 
                    {
                        arr_197 [i_53] [23] [i_53] [i_53] = ((/* implicit */unsigned int) var_11);
                        var_87 = ((/* implicit */unsigned long long int) max((var_87), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_56 = 2; i_56 < 24; i_56 += 4) 
                    {
                        for (long long int i_57 = 0; i_57 < 25; i_57 += 1) 
                        {
                            {
                                var_88 = ((/* implicit */long long int) ((unsigned short) var_13));
                                arr_203 [i_40] [i_53] [(unsigned char)2] [i_56] [i_57] = ((/* implicit */unsigned char) ((unsigned int) 1605145228U));
                                var_89 = ((/* implicit */short) ((unsigned char) var_19));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_204 [i_40] = ((/* implicit */long long int) ((signed char) (-(var_4))));
    }
}
