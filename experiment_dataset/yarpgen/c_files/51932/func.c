/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51932
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
    var_18 = var_9;
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) -1003350035);
        var_20 ^= var_17;
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (((~(var_14))) >> (((arr_2 [i_1 + 1] [i_1 - 1] [i_1]) + (4079207448842887103LL))))))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_5);
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : ((-(arr_2 [i_2] [i_1] [i_2])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned short) (((+(var_17))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 381878629))))));
            var_23 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
        }
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) var_12);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_25 = ((unsigned char) min((arr_1 [i_5]), (((/* implicit */short) var_9))));
                                var_26 += ((/* implicit */short) arr_16 [i_4] [i_5] [4U]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 3; i_9 < 20; i_9 += 3) 
        {
            arr_28 [i_9] [i_9] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)28662))))));
            arr_29 [i_4] [i_9] [i_9] = ((/* implicit */signed char) ((unsigned short) (short)-28662));
            var_27 = ((/* implicit */short) ((long long int) arr_2 [i_4] [i_9 - 3] [i_9]));
            var_28 = arr_22 [i_4] [10ULL] [i_9 - 2] [10ULL];
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 3) 
            {
                for (unsigned short i_11 = 2; i_11 < 21; i_11 += 1) 
                {
                    {
                        var_29 ^= ((/* implicit */int) arr_35 [i_11] [i_11] [i_11]);
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                        {
                            var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_9] [18U])) ? (var_4) : (((/* implicit */int) (short)-12980))))) ? ((-(arr_35 [i_10] [i_9] [i_9]))) : (arr_24 [i_11 + 1])));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (signed char)72))));
                            var_32 = ((/* implicit */long long int) min((var_32), (274877906943LL)));
                            var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_4])) ? (arr_25 [i_4]) : (((/* implicit */int) (_Bool)0))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                        {
                            var_34 ^= ((/* implicit */int) arr_37 [i_10 + 1] [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10]);
                            var_35 = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_13] [i_11 - 1] [i_4] [i_4])) | (((/* implicit */int) arr_40 [i_13] [i_11 - 2] [i_10 + 2] [i_4]))));
                        }
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_5 [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) (_Bool)1))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28662)))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_15 = 3; i_15 < 19; i_15 += 4) 
        {
            /* LoopSeq 4 */
            for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (-(arr_5 [i_15 + 3] [i_14] [i_14] [i_14]))))));
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_14] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) arr_18 [i_15] [i_15 - 2] [i_15])) : (arr_5 [i_15] [i_15] [i_15] [i_15 + 1])));
                var_39 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)255))))));
            }
            for (unsigned short i_17 = 2; i_17 < 21; i_17 += 3) /* same iter space */
            {
                var_40 &= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_12))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_27 [i_17 - 2])))))));
                var_41 += ((/* implicit */short) (+((+(4294967295U)))));
                var_42 += ((/* implicit */int) (((-(arr_13 [i_15]))) & (arr_13 [i_17])));
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        {
                            arr_58 [i_17] [i_17] [i_15] = ((/* implicit */int) (short)-8);
                            arr_59 [i_14] [i_17] [i_19] [i_19] [i_14] [i_19] = ((/* implicit */short) (unsigned char)21);
                        }
                    } 
                } 
            }
            for (unsigned short i_20 = 2; i_20 < 21; i_20 += 3) /* same iter space */
            {
                var_43 = ((/* implicit */short) (unsigned short)32268);
                arr_63 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) 274877906943LL);
            }
            for (unsigned int i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_22 = 2; i_22 < 21; i_22 += 4) 
                {
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-20940))))) ? (((((/* implicit */_Bool) 1782851425)) ? (((/* implicit */int) arr_17 [i_14] [i_14] [i_14])) : (((/* implicit */int) (short)17565)))) : (((/* implicit */int) arr_26 [i_14] [i_15] [i_22 - 1])))))));
                    arr_71 [i_14] [i_14] [i_15] [i_21] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) -8290886078491407336LL)) ? (((/* implicit */int) arr_26 [i_15 + 2] [i_22 - 2] [i_22 + 1])) : (((/* implicit */int) arr_26 [i_15 + 1] [i_22 - 1] [i_22 - 1]))));
                }
                var_45 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)-120))))));
                var_46 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_14] [i_15] [i_21])))) ? ((-(arr_5 [i_14] [i_15] [i_15 - 1] [i_15 - 1]))) : (((/* implicit */unsigned long long int) ((arr_2 [i_21] [i_14] [i_14]) + (((/* implicit */long long int) ((/* implicit */int) (short)30720))))))));
            }
            var_47 += var_3;
            var_48 = ((/* implicit */unsigned int) max((var_48), ((-(((((/* implicit */_Bool) 2157287086U)) ? (arr_45 [i_14] [i_14] [i_15 + 2]) : (arr_18 [i_14] [i_14] [i_15 + 2])))))));
        }
        for (short i_23 = 0; i_23 < 22; i_23 += 1) 
        {
            arr_76 [i_23] [i_23] = ((/* implicit */int) ((unsigned short) ((int) (unsigned short)65535)));
            /* LoopNest 3 */
            for (int i_24 = 4; i_24 < 20; i_24 += 3) 
            {
                for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
                {
                    for (signed char i_26 = 2; i_26 < 21; i_26 += 3) 
                    {
                        {
                            var_49 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_14] [i_23] [i_23] [i_25])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_14])) ? (((/* implicit */int) (unsigned char)255)) : (-1092599534))))));
                            var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) var_4))));
                            var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) ((short) (signed char)15)))));
                        }
                    } 
                } 
            } 
        }
        arr_85 [i_14] [i_14] = ((/* implicit */unsigned int) var_1);
        var_52 = ((/* implicit */_Bool) arr_42 [i_14]);
    }
    for (short i_27 = 4; i_27 < 9; i_27 += 4) 
    {
        var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_27 + 2] [i_27 + 2] [i_27]))) <= (arr_79 [i_27] [i_27])))) - (((/* implicit */int) (!(arr_52 [i_27] [i_27 - 2] [i_27 - 1] [i_27 - 1]))))))) ? ((~(((1138547576934424549LL) ^ (((/* implicit */long long int) arr_13 [i_27])))))) : ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (arr_64 [13U]))) >> (((((1102857503U) - (((/* implicit */unsigned int) 1799710383)))) - (3598114415U)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_28 = 0; i_28 < 13; i_28 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_29 = 0; i_29 < 13; i_29 += 4) 
            {
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 13; i_30 += 4) 
                {
                    for (short i_31 = 0; i_31 < 13; i_31 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_5))))));
                            var_55 = ((/* implicit */int) 1397896620U);
                        }
                    } 
                } 
                var_56 *= 0U;
            }
            for (int i_32 = 0; i_32 < 13; i_32 += 1) 
            {
                var_57 = ((((/* implicit */_Bool) arr_93 [i_28])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_68 [i_32] [i_32] [i_32] [i_32] [12U] [i_28])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))))));
                /* LoopNest 2 */
                for (unsigned short i_33 = 0; i_33 < 13; i_33 += 4) 
                {
                    for (unsigned int i_34 = 0; i_34 < 13; i_34 += 3) 
                    {
                        {
                            var_58 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1761702671U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_31 [i_27] [i_27] [i_27])))) ? ((+(3269324185306330754ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)127)))))));
                            var_59 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_27 + 4] [i_28] [i_33])))))));
                            var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -934797401)) : (arr_50 [i_27 - 4])));
                        }
                    } 
                } 
                arr_110 [i_27] [i_27 + 1] [i_27 - 4] [i_27 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((unsigned short) var_16))) : (((int) (short)15591))));
                var_61 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_32] [i_28] [i_27])) ? (((/* implicit */unsigned int) arr_104 [i_28] [i_28] [i_32])) : (arr_13 [(unsigned char)9]))) * (((/* implicit */unsigned int) arr_32 [i_27 + 3] [i_28] [i_32] [i_27 + 3]))));
            }
            for (int i_35 = 1; i_35 < 10; i_35 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_36 = 1; i_36 < 12; i_36 += 3) 
                {
                    var_62 = ((/* implicit */unsigned int) (-(arr_61 [i_27] [i_35 + 2] [i_35 + 2] [i_27 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_37 = 2; i_37 < 11; i_37 += 4) 
                    {
                        arr_118 [i_27] [i_36] [i_35] = ((/* implicit */unsigned int) arr_75 [i_27] [i_27] [i_35]);
                        arr_119 [i_37] [i_35] [1] [i_27] = ((/* implicit */short) arr_56 [i_27] [i_36]);
                    }
                }
                for (signed char i_38 = 0; i_38 < 13; i_38 += 3) 
                {
                    var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 510940437)) ? (72057593903710208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7109)))))) ? (((((/* implicit */_Bool) arr_95 [12U] [i_27 - 1] [i_28] [i_28] [i_35 + 1] [i_38])) ? (1041985284U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_97 [i_35] [i_35 + 2] [i_35] [i_35] [i_35 + 2] [i_35] [i_35]))))) : (0U)));
                    var_64 = ((/* implicit */int) ((8191LL) << (((/* implicit */int) (unsigned char)0))));
                    arr_122 [i_27] [(_Bool)1] [i_38] [i_35 + 3] [i_38] = ((/* implicit */unsigned short) arr_99 [i_38] [(unsigned char)1] [1U] [i_27] [i_27]);
                }
                for (unsigned int i_39 = 0; i_39 < 13; i_39 += 1) 
                {
                    var_65 = ((/* implicit */unsigned int) (unsigned char)251);
                    var_66 ^= ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) 823724076)) ? (arr_102 [i_27 + 2]) : (((/* implicit */int) (unsigned char)244)))) : (((/* implicit */int) (_Bool)1)));
                    var_67 = ((/* implicit */signed char) min((var_67), (((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_27] [16])))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_40 = 0; i_40 < 13; i_40 += 1) 
                    {
                        var_68 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
                        var_69 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_35 + 1]))));
                        arr_129 [i_35 - 1] [i_28] [i_35] [i_39] |= ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-12980)) : (((/* implicit */int) arr_52 [i_35 - 1] [i_35 - 1] [i_35] [i_35 + 3])));
                    }
                    for (unsigned int i_41 = 3; i_41 < 12; i_41 += 4) 
                    {
                        arr_132 [i_39] [i_28] = ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_39]))) : (arr_81 [i_27] [i_28] [i_27] [i_41 - 3]));
                        var_70 = ((/* implicit */long long int) (-((-(6782754128484232074ULL)))));
                    }
                    for (unsigned int i_42 = 0; i_42 < 13; i_42 += 3) 
                    {
                        arr_135 [i_27] [i_27] [i_35 - 1] [i_39] [i_42] [i_35] [i_28] = ((/* implicit */unsigned int) var_1);
                        var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) ((137438953471ULL) >> (((arr_67 [(_Bool)1] [i_35 + 3] [i_35] [i_35] [i_39]) + (1236450341))))))));
                    }
                    arr_136 [i_27] [i_27] [i_35] = ((/* implicit */unsigned int) var_3);
                }
                for (unsigned int i_43 = 1; i_43 < 11; i_43 += 2) 
                {
                    var_72 = ((((/* implicit */_Bool) ((1778442697) << (((arr_60 [i_28] [21] [i_35]) - (12184423501998432359ULL)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1033610162157334358LL))))));
                    var_73 = ((/* implicit */short) (-(18446744073709551615ULL)));
                }
                var_74 &= ((/* implicit */int) (unsigned char)251);
                arr_139 [i_35 + 1] [i_27] [i_35 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_117 [i_27] [i_28] [i_28] [i_35 + 3] [i_35])) ? (arr_12 [i_28] [i_35]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_27 - 1] [i_35 - 1]))) : ((~(2409452176U))));
                /* LoopNest 2 */
                for (unsigned char i_44 = 0; i_44 < 13; i_44 += 4) 
                {
                    for (unsigned long long int i_45 = 0; i_45 < 13; i_45 += 4) 
                    {
                        {
                            arr_146 [i_27] [i_28] [i_35 + 1] [i_27] [i_35 + 1] = ((/* implicit */unsigned long long int) 4503599627370495LL);
                            var_75 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1883244983)) % (var_6)));
                            var_76 = ((/* implicit */unsigned int) min((var_76), (((/* implicit */unsigned int) 2004120751))));
                        }
                    } 
                } 
            }
            var_77 = ((/* implicit */unsigned int) min((var_77), (((/* implicit */unsigned int) 9223372036854775807LL))));
            /* LoopSeq 3 */
            for (signed char i_46 = 3; i_46 < 10; i_46 += 4) /* same iter space */
            {
                var_78 = ((/* implicit */short) -8210LL);
                arr_150 [i_46] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) | (((268435456U) & (arr_94 [i_27 - 2] [i_27] [i_27] [i_27 + 4]))));
            }
            for (signed char i_47 = 3; i_47 < 10; i_47 += 4) /* same iter space */
            {
                var_79 ^= ((/* implicit */unsigned short) (+(((unsigned int) (short)25257))));
                var_80 = ((/* implicit */unsigned int) arr_74 [i_27]);
                /* LoopSeq 1 */
                for (unsigned int i_48 = 1; i_48 < 9; i_48 += 1) 
                {
                    arr_156 [i_28] [i_28] &= ((/* implicit */_Bool) ((unsigned long long int) arr_80 [i_47 - 1]));
                    var_81 -= ((/* implicit */unsigned int) (+(17ULL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_49 = 0; i_49 < 13; i_49 += 1) 
                    {
                        var_82 = ((/* implicit */unsigned int) min((var_82), (((unsigned int) (~(-2374842301759393415LL))))));
                        var_83 &= ((/* implicit */signed char) 2313100349U);
                    }
                    for (unsigned long long int i_50 = 0; i_50 < 13; i_50 += 2) 
                    {
                        arr_164 [i_27 + 3] = ((/* implicit */int) arr_13 [i_27 - 1]);
                        arr_165 [i_27] [i_27 - 4] [i_28] [i_47] [i_47] [i_48] [i_50] = ((/* implicit */unsigned long long int) ((-2374842301759393415LL) % (((/* implicit */long long int) arr_51 [i_27 - 2] [i_28] [i_47]))));
                    }
                    var_84 = ((/* implicit */unsigned char) min((var_84), (((/* implicit */unsigned char) arr_142 [i_47 - 2]))));
                }
                arr_166 [i_27] [i_27] [i_28] [i_27] &= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_17 [i_27] [i_28] [i_47])) ? (arr_55 [i_28] [i_28] [i_47] [i_27]) : (((/* implicit */unsigned long long int) var_12)))));
            }
            for (signed char i_51 = 3; i_51 < 10; i_51 += 4) /* same iter space */
            {
                var_85 = ((/* implicit */unsigned int) (short)240);
                var_86 -= ((14840301352593728751ULL) + ((~(arr_5 [i_27] [i_27 + 3] [i_27] [i_27]))));
            }
            arr_169 [i_28] [i_28] = ((/* implicit */unsigned long long int) 211518980U);
            arr_170 [i_27] [i_28] = ((/* implicit */short) ((arr_113 [i_27] [i_27 - 2] [4ULL] [i_28]) * (arr_113 [i_27] [i_27 - 1] [i_28] [i_27])));
        }
        /* vectorizable */
        for (int i_52 = 0; i_52 < 13; i_52 += 1) 
        {
            var_87 = ((/* implicit */unsigned char) min((var_87), (((/* implicit */unsigned char) (unsigned short)7056))));
            var_88 = ((/* implicit */int) 1073741823U);
        }
    }
    var_89 ^= ((/* implicit */unsigned int) min((var_2), (((/* implicit */long long int) var_10))));
    var_90 -= ((/* implicit */int) max((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) (unsigned char)251))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2514738313U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8220LL)))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (_Bool)1)), (var_1))) * (((/* implicit */long long int) ((/* implicit */int) ((8092479616755645ULL) >= (((/* implicit */unsigned long long int) var_1)))))))))));
}
