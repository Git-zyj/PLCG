/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246729
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
    var_17 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (signed char)0))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (unsigned char)241))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)10)));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)205))))) || (((/* implicit */_Bool) (signed char)-8))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_8))));
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-3647)) > (((/* implicit */int) (signed char)22)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : ((-(var_7)))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    var_25 = ((/* implicit */unsigned short) arr_7 [i_3 - 1]);
                    var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)168))));
                }
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_27 = (~(arr_1 [i_3 - 1]));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)9)) / (((/* implicit */int) (_Bool)1))));
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63728)) ^ (((/* implicit */int) arr_17 [i_1] [i_2] [i_6] [(unsigned char)0] [i_8] [i_2]))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8] [i_7] [i_7] [i_6 + 1])) ? (((/* implicit */int) arr_17 [i_8 - 1] [i_8 - 1] [i_8] [i_6] [(unsigned char)7] [i_6 + 1])) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) (unsigned char)18);
            }
            /* LoopSeq 3 */
            for (unsigned char i_9 = 2; i_9 < 7; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */short) (unsigned short)54240);
                        var_33 = ((/* implicit */unsigned int) arr_9 [i_10] [i_11]);
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)38)) ? (-71362953) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                    {
                        var_35 = (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_27 [i_9] [i_1] [i_9])) : (((/* implicit */int) (signed char)0)))));
                        var_36 = ((/* implicit */unsigned short) var_9);
                    }
                    for (int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_13 [i_1] [i_9 + 1] [i_10 - 1] [i_10] [i_9 + 2]))));
                        var_38 = var_7;
                    }
                    for (int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) var_9);
                        var_40 = ((/* implicit */signed char) (-(var_3)));
                        var_41 = ((/* implicit */short) ((((/* implicit */unsigned int) -1)) > (var_5)));
                    }
                    var_42 = ((/* implicit */short) -4911516294118118146LL);
                    var_43 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_44 = ((/* implicit */signed char) ((arr_18 [i_1] [i_10 - 1] [i_10 - 1] [i_15]) < (-2446511340962454190LL)));
                        var_45 = ((/* implicit */long long int) (short)-20215);
                    }
                }
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)87))))) ? (((/* implicit */long long int) arr_39 [i_2] [i_1])) : (arr_36 [i_9 - 2] [i_9 + 3] [i_9 - 2] [i_9 - 2] [i_9])));
                            var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_35 [9LL] [9LL] [i_9] [i_16] [i_16] [i_16] [i_17])) : (((/* implicit */int) (short)-20230))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4576930549984896836ULL)) && (((/* implicit */_Bool) arr_36 [i_1] [i_2] [i_2] [i_16] [i_17]))))) : (((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_16]))));
                        }
                    } 
                } 
                var_48 ^= ((/* implicit */unsigned char) var_13);
                var_49 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-1)))) | ((-(((/* implicit */int) (signed char)22))))));
                /* LoopSeq 1 */
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) arr_19 [i_1] [i_2]))));
                        var_51 = ((/* implicit */_Bool) var_12);
                    }
                    for (int i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                    {
                        var_52 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20206)) ? (arr_18 [i_20] [(_Bool)1] [i_2] [i_1]) : (((/* implicit */long long int) var_13))))));
                        var_53 = ((int) (_Bool)1);
                        var_54 = ((/* implicit */short) (signed char)10);
                    }
                    var_55 = ((/* implicit */unsigned long long int) arr_50 [i_1] [i_2] [i_1] [i_9] [i_18]);
                    var_56 = ((/* implicit */signed char) ((unsigned short) arr_27 [i_9 + 1] [i_9 + 1] [i_9]));
                    /* LoopSeq 4 */
                    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_21])) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) var_16)))))));
                        var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [3] [i_1]))))))));
                        var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_21] [i_2] [i_9 + 2] [i_18] [i_21])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_12 [i_9 - 1] [i_2] [i_9] [i_9] [i_21]))));
                        var_60 = ((/* implicit */unsigned short) var_13);
                    }
                    for (short i_22 = 0; i_22 < 10; i_22 += 3) 
                    {
                        var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_18])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_1] [i_1] [i_2] [i_9] [i_18] [i_22]))) ^ (var_6))) : (((/* implicit */unsigned long long int) -2527930112122760304LL))));
                        var_62 = ((/* implicit */long long int) (short)-20206);
                        var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) 679170764U))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        var_64 = ((/* implicit */short) ((((((/* implicit */_Bool) 5826749743784678800ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_9] [i_18] [i_9])) >= (((/* implicit */int) arr_47 [i_1] [i_1] [i_1] [i_9] [i_18] [i_9]))))))));
                        var_65 = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (short i_24 = 3; i_24 < 9; i_24 += 1) 
                    {
                        var_66 = ((/* implicit */short) ((var_16) ? (((/* implicit */int) arr_20 [i_1] [i_2] [i_9 - 2] [i_18] [i_24 - 2] [i_24 - 3])) : (((/* implicit */int) arr_20 [i_18] [i_9 - 2] [i_9 + 3] [i_18] [i_24] [i_24 - 3]))));
                        var_67 = ((((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (2047)))) == (((((/* implicit */_Bool) var_7)) ? (6507013171063988559LL) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_2] [i_24 - 1]))))));
                        var_68 = ((/* implicit */unsigned long long int) var_10);
                        var_69 = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)241))));
                    }
                    var_70 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9 + 2] [i_9 - 1] [i_9 + 3] [i_9 - 1] [i_9 - 2] [i_9 - 1])) ? (((/* implicit */int) arr_30 [i_9 - 2] [i_9 - 1] [i_9 + 2] [i_9 - 2] [i_9 - 2] [i_9 + 2])) : (((/* implicit */int) arr_21 [i_9 - 1] [i_9 + 2] [i_9 - 2] [i_9 - 1]))));
                }
            }
            for (unsigned int i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                var_71 = ((/* implicit */short) min((var_71), (((/* implicit */short) (-(((/* implicit */int) (signed char)-13)))))));
                var_72 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3155688379028706419LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_1] [i_2] [i_25] [i_2] [i_1] [i_25]))));
            }
            for (short i_26 = 0; i_26 < 10; i_26 += 4) 
            {
                var_73 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_26]))) : (var_1)))) ? (var_6) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24927))) % (var_3)))));
                /* LoopNest 2 */
                for (long long int i_27 = 2; i_27 < 7; i_27 += 1) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_74 = ((/* implicit */signed char) min((var_74), (((/* implicit */signed char) (_Bool)1))));
                            var_75 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_1] [i_2] [i_26] [i_1] [i_28])) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) arr_14 [i_1] [i_2] [i_26] [i_1]))))) <= (7390681690314937395ULL)));
                            var_76 |= ((/* implicit */short) ((arr_65 [i_1] [i_2] [i_26] [i_28]) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 10; i_29 += 4) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_77 = ((/* implicit */unsigned char) arr_38 [i_1] [i_1]);
                            var_78 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_29] [i_26])) ? (((/* implicit */int) arr_28 [i_1] [i_30] [i_29])) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (short i_31 = 4; i_31 < 8; i_31 += 1) 
            {
                for (signed char i_32 = 0; i_32 < 10; i_32 += 1) 
                {
                    {
                        var_79 ^= ((/* implicit */long long int) arr_41 [i_32] [i_32] [i_31] [i_2] [i_1] [i_1]);
                        var_80 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_1] [i_2] [i_2] [i_31 + 1] [i_32])) ? (((/* implicit */long long int) var_1)) : (arr_29 [i_31] [i_31] [i_31 - 3] [i_31 - 1] [i_31])));
                        var_81 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((signed char) var_6)))));
                    }
                } 
            } 
        }
        for (unsigned short i_33 = 0; i_33 < 10; i_33 += 1) 
        {
            var_82 = ((/* implicit */unsigned short) min((var_82), (((/* implicit */unsigned short) arr_63 [i_1] [i_1] [i_1] [i_33]))));
            var_83 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_1] [i_33] [(_Bool)1]))) : (9223372036854775797LL))) % (((arr_56 [i_1] [i_1] [i_1] [i_33] [i_1] [i_33]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_84 = ((/* implicit */int) ((signed char) 4911516294118118145LL));
            /* LoopSeq 3 */
            for (long long int i_34 = 3; i_34 < 9; i_34 += 3) 
            {
                var_85 = ((/* implicit */unsigned short) ((((long long int) arr_54 [i_1] [i_33] [i_34 - 3])) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (signed char i_35 = 2; i_35 < 8; i_35 += 3) 
                {
                    var_86 = ((/* implicit */short) var_0);
                    var_87 |= ((/* implicit */unsigned char) (_Bool)1);
                }
                /* LoopSeq 1 */
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    var_88 = ((/* implicit */unsigned char) var_6);
                    var_89 = ((/* implicit */unsigned long long int) ((_Bool) arr_34 [i_36] [i_1] [i_34 + 1] [i_34 - 2] [i_1] [i_34]));
                    var_90 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_0)))));
                }
                var_91 &= ((((/* implicit */_Bool) arr_23 [i_34] [i_34 + 1] [i_34 - 1])) || (((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_34] [i_33] [i_34]))))));
                /* LoopSeq 3 */
                for (unsigned short i_37 = 3; i_37 < 9; i_37 += 4) 
                {
                    var_92 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_1] [i_34 - 1] [i_1] [i_37 - 3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_15)));
                    var_93 = ((/* implicit */_Bool) max((var_93), (((/* implicit */_Bool) arr_19 [i_1] [i_33]))));
                }
                for (int i_38 = 0; i_38 < 10; i_38 += 3) 
                {
                    var_94 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_34] [i_34 - 2] [i_34] [i_34])) ? (arr_65 [i_34 + 1] [i_34 - 3] [i_33] [i_33]) : (((/* implicit */unsigned long long int) 367043530324096006LL))));
                    var_95 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32717)) ? (((((/* implicit */_Bool) (signed char)-97)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_33] [i_38] [i_34] [i_33] [i_33] [i_1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_55 [i_38] [i_38] [i_34] [i_34 + 1] [i_1] [i_1] [i_1])))))));
                    var_96 = ((/* implicit */_Bool) var_13);
                    /* LoopSeq 2 */
                    for (unsigned char i_39 = 2; i_39 < 9; i_39 += 1) 
                    {
                        var_97 += ((/* implicit */signed char) var_2);
                        var_98 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((1142438189) != (((/* implicit */int) (signed char)-111)))))) < (((((/* implicit */_Bool) var_11)) ? (-31LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_99 |= ((((/* implicit */int) arr_94 [i_33] [i_34 + 1] [i_39 - 1] [i_33])) * (((/* implicit */int) arr_94 [i_1] [i_34 - 3] [i_39 + 1] [i_39 + 1])));
                        var_100 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_97 [i_38] [i_33] [i_34 - 3] [i_34 - 3] [i_39 - 1]))) < (var_6))))));
                    }
                    for (int i_40 = 0; i_40 < 10; i_40 += 1) 
                    {
                        var_101 = ((/* implicit */short) var_10);
                        var_102 = ((/* implicit */long long int) min((var_102), (((((arr_34 [i_1] [i_33] [i_34 - 1] [i_38] [i_1] [i_33]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_88 [i_1] [i_33] [i_1] [i_40])) + (124))) - (16)))))));
                        var_103 = ((/* implicit */signed char) var_7);
                    }
                }
                for (unsigned long long int i_41 = 0; i_41 < 10; i_41 += 4) 
                {
                    var_104 = ((/* implicit */signed char) ((arr_10 [i_1] [(unsigned char)4] [i_34] [i_41]) <= (((/* implicit */unsigned long long int) arr_5 [i_41] [(_Bool)1] [i_1]))));
                    var_105 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_67 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) (unsigned char)85)) - (85))))) != (((/* implicit */int) arr_58 [i_1] [i_1] [i_1] [i_34 + 1] [i_34] [i_34] [i_34]))));
                    var_106 |= ((/* implicit */short) (!(((/* implicit */_Bool) -1563463773))));
                }
            }
            for (unsigned short i_42 = 1; i_42 < 9; i_42 += 4) /* same iter space */
            {
                var_107 = ((/* implicit */long long int) max((var_107), (((/* implicit */long long int) (((~(((/* implicit */int) var_10)))) | (((((/* implicit */int) arr_89 [i_1] [(unsigned char)4] [i_1] [i_1])) >> (((((/* implicit */int) arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) - (1548))))))))));
                var_108 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
                var_109 = var_9;
                /* LoopSeq 2 */
                for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                {
                    var_110 = 1563463773;
                    var_111 = ((11056062383394614221ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_43] [i_43] [i_42 - 1] [i_43] [i_42 - 1] [i_42]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_44 = 0; i_44 < 10; i_44 += 2) 
                    {
                        var_112 = ((/* implicit */unsigned long long int) max((var_112), (((/* implicit */unsigned long long int) var_10))));
                        var_113 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_42 + 1] [i_42 + 1] [i_42 - 1])) ? (((((/* implicit */int) arr_70 [i_1] [i_33] [i_33] [i_43] [i_44] [i_44])) | (-1563463784))) : (((/* implicit */int) ((signed char) 7210389502919605610ULL)))));
                        var_114 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -7510384939995988920LL)) <= (((unsigned long long int) (short)-4877))));
                    }
                    for (short i_45 = 0; i_45 < 10; i_45 += 2) 
                    {
                        var_115 = ((/* implicit */signed char) 11236354570789945985ULL);
                        var_116 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) var_16))));
                    }
                }
                for (unsigned char i_46 = 0; i_46 < 10; i_46 += 4) 
                {
                    var_117 = ((/* implicit */unsigned char) min((var_117), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)34)) != (((/* implicit */int) arr_91 [i_42 + 1] [i_42 - 1] [i_42])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_47 = 1; i_47 < 1; i_47 += 1) 
                    {
                        var_118 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((7390681690314937395ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_119 = ((/* implicit */signed char) ((((-1563463792) + (2147483647))) >> (((arr_93 [i_47 - 1] [i_42 - 1] [i_42 + 1] [i_42 + 1] [i_42 + 1] [i_42 - 1]) - (4694717559326186415LL)))));
                    }
                }
            }
            for (unsigned short i_48 = 1; i_48 < 9; i_48 += 4) /* same iter space */
            {
                var_120 = ((/* implicit */unsigned char) max((var_120), (((/* implicit */unsigned char) 1941552071))));
                var_121 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11236354570789946006ULL)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (short)-22680))));
            }
        }
    }
}
