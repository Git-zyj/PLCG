/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201776
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
    var_16 = ((/* implicit */unsigned short) ((max(((_Bool)1), (((_Bool) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (min((((unsigned long long int) -2032417364340403823LL)), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 3642077724U);
        var_17 = ((/* implicit */unsigned char) (_Bool)1);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_4))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_2] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (max((arr_7 [i_2]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            }
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((var_1) << (((var_2) - (1306566072063706676ULL)))));
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) -430877196))) || (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 430877195)))) ? (0U) : (((/* implicit */unsigned int) ((int) var_7))))))));
            }
            arr_13 [i_0] = ((/* implicit */unsigned short) var_10);
            arr_14 [(short)4] |= max((max((arr_4 [i_0]), (arr_4 [i_1]))), (((((/* implicit */unsigned long long int) arr_10 [i_0])) | (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])), (arr_4 [i_1]))))));
            var_22 = ((/* implicit */unsigned int) arr_10 [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_8 [i_4] [i_0] [i_0]))));
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                arr_19 [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 3] [i_4 + 1] [i_4 + 2]))));
                var_24 *= ((/* implicit */unsigned short) 2881324616U);
            }
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                var_25 = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)0))));
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4398387203796857623ULL)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned short)53044))))) ? (((/* implicit */int) arr_16 [i_4 - 2] [i_0])) : (((/* implicit */int) arr_6 [i_4 - 3] [i_0] [i_4 - 1])));
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_4 - 1]);
            }
            for (int i_7 = 3; i_7 < 13; i_7 += 2) 
            {
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_4] [i_7] [i_7]))));
                arr_25 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((short) var_7));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    var_28 ^= ((/* implicit */unsigned short) arr_9 [i_0] [i_4]);
                    arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) arr_15 [i_4 + 1]));
                }
                for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (var_14)));
                    var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) >= (((35184372087808ULL) | (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_34 [i_0] [i_4] [i_7] [i_7] = ((/* implicit */int) (_Bool)1);
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_24 [i_0]))));
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_10 = 4; i_10 < 12; i_10 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_10] [i_10]);
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                var_33 -= ((/* implicit */unsigned short) ((_Bool) (signed char)-60));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_10 + 1])) : (((/* implicit */int) (_Bool)1)))))));
                var_35 = ((/* implicit */signed char) arr_23 [i_11] [i_0] [i_0] [i_0]);
            }
            for (unsigned char i_12 = 2; i_12 < 10; i_12 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */signed char) var_11);
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_49 [i_12] |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (var_1)))) - (var_8));
                    var_37 = ((/* implicit */unsigned short) var_1);
                    arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (arr_1 [i_10])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_43 [i_10] [i_10]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned short) arr_26 [i_10] [i_10] [i_10 - 2]);
                        arr_54 [i_0] [i_0] [i_0] = -430877196;
                    }
                }
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_0))));
            }
            for (unsigned char i_15 = 2; i_15 < 10; i_15 += 2) /* same iter space */
            {
                var_39 = ((/* implicit */_Bool) arr_55 [i_15] [i_0] [i_10 + 2] [i_15 + 3]);
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_61 [i_0] [i_0] [i_0] [i_15] [i_16] [i_0] = ((/* implicit */int) ((unsigned long long int) ((short) (unsigned short)0)));
                }
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    arr_64 [i_17] [i_15] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10)))) >= (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)0))))));
                    arr_65 [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_15]))));
                }
                for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 4) 
                {
                    var_41 = arr_38 [i_0];
                    arr_69 [i_0] [i_10] [i_15] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (18446708889337463808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_15] [i_18])))))) ? (arr_46 [i_0] [i_10 + 1] [i_15 - 1] [i_18 + 1]) : (arr_63 [i_15 - 2] [i_15 - 1] [i_15 + 4] [i_15 + 2] [i_15 - 2] [i_15 - 1]));
                    arr_70 [i_18] [i_0] [i_0] [i_0] = var_7;
                }
                /* LoopSeq 1 */
                for (unsigned char i_19 = 1; i_19 < 13; i_19 += 1) 
                {
                    var_42 &= ((/* implicit */long long int) var_6);
                    var_43 *= ((/* implicit */unsigned char) var_9);
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_20 = 0; i_20 < 14; i_20 += 2) 
            {
                arr_76 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_40 [i_20] [i_20] [i_20] [i_0]);
                var_44 = 7521678106387453100ULL;
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_27 [i_0] [i_10] [i_0] [i_21] [i_0]) & (1643798134)))) ? (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                arr_79 [i_0] [i_10] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) (short)32572))))) ? (var_8) : (((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10] [i_10])) ? (17215577526907687946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                var_46 = ((/* implicit */unsigned long long int) var_4);
            }
        }
        for (unsigned char i_22 = 4; i_22 < 12; i_22 += 1) /* same iter space */
        {
            arr_83 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_22] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_22])) ? (((/* implicit */int) arr_23 [i_0] [i_22] [i_0] [i_22])) : (var_7)))) ? (min((((/* implicit */unsigned int) var_0)), (arr_39 [i_0] [i_0] [i_22]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23600))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_22] [i_22] [i_0] [i_0] [i_0])))));
            var_47 = ((/* implicit */unsigned long long int) 562949936644096LL);
            var_48 = ((/* implicit */unsigned char) min((var_48), (((unsigned char) -2032417364340403823LL))));
        }
    }
    /* vectorizable */
    for (long long int i_23 = 0; i_23 < 14; i_23 += 3) /* same iter space */
    {
        var_49 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_23])) == (((/* implicit */int) var_0)))) ? ((-(arr_78 [(unsigned char)4]))) : (((/* implicit */unsigned int) arr_73 [i_23] [i_23] [(signed char)4] [i_23] [i_23] [i_23]))));
        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) arr_26 [i_23] [i_23] [i_23]))));
        arr_88 [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 430135600))) ? (((/* implicit */int) arr_33 [(_Bool)0] [i_23])) : (((((/* implicit */_Bool) var_1)) ? (2115375539) : (arr_38 [i_23])))));
    }
    /* vectorizable */
    for (long long int i_24 = 0; i_24 < 14; i_24 += 3) /* same iter space */
    {
        arr_91 [i_24] [i_24] = ((-339669036) == (((/* implicit */int) var_9)));
        /* LoopSeq 4 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_26 = 0; i_26 < 14; i_26 += 1) 
            {
                var_51 = ((/* implicit */signed char) ((unsigned int) arr_37 [i_26] [i_26]));
                var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) (short)4080)) : (((/* implicit */int) (short)-4061)))))));
                /* LoopSeq 2 */
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 14; i_28 += 3) 
                    {
                        var_53 *= ((/* implicit */unsigned char) arr_60 [i_26] [i_27] [i_27 - 1] [i_27 - 1]);
                        var_54 = arr_103 [i_27 - 1] [i_27] [i_27];
                        arr_104 [i_24] [i_24] [i_24] [i_26] [i_26] = ((/* implicit */unsigned short) arr_31 [i_26] [i_27 - 1] [i_26] [i_27]);
                    }
                    for (short i_29 = 1; i_29 < 12; i_29 += 1) 
                    {
                        arr_108 [i_24] [i_25] [i_25] [i_25] [i_26] [i_26] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) arr_94 [i_26] [i_27] [i_26])) : (((/* implicit */int) ((unsigned short) var_1)))));
                        arr_109 [i_24] [i_25] [i_26] [i_27] [i_29] = ((/* implicit */signed char) 114963922);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 0; i_30 < 14; i_30 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (unsigned char)16))));
                        arr_112 [i_25] [i_26] [i_25] = ((/* implicit */int) 4294967295U);
                        arr_113 [i_24] [i_25] [i_26] [i_26] [i_26] [i_26] [i_30] = ((/* implicit */int) arr_80 [i_24] [i_25]);
                        var_56 |= ((/* implicit */unsigned long long int) arr_44 [i_24] [i_30] [i_24]);
                    }
                }
                for (unsigned int i_31 = 0; i_31 < 14; i_31 += 3) 
                {
                    arr_117 [i_24] [i_24] [i_24] [i_26] = ((/* implicit */unsigned long long int) arr_94 [i_25] [i_25] [i_24]);
                    arr_118 [i_26] [i_25] [i_25] [i_26] [i_25] [i_26] = ((/* implicit */signed char) (unsigned char)240);
                    arr_119 [i_24] [i_26] [i_26] [i_26] [i_31] = ((/* implicit */_Bool) var_2);
                }
            }
            for (signed char i_32 = 0; i_32 < 14; i_32 += 2) 
            {
                arr_123 [i_32] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_3))));
                var_57 = ((/* implicit */int) arr_120 [i_24] [i_25] [i_32] [i_25]);
            }
            var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) ((arr_94 [i_24] [i_25] [i_25]) ? (((/* implicit */int) arr_94 [i_24] [i_24] [i_24])) : (((/* implicit */int) arr_94 [i_24] [i_25] [i_25])))))));
            /* LoopSeq 1 */
            for (unsigned int i_33 = 3; i_33 < 10; i_33 += 1) 
            {
                var_59 = ((/* implicit */unsigned short) arr_41 [i_24] [i_25] [i_25]);
                arr_127 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */_Bool) var_1);
            }
            arr_128 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_24] [(_Bool)1] [i_25])) > (((/* implicit */int) var_10))));
            var_60 = ((/* implicit */unsigned long long int) arr_16 [i_24] [6ULL]);
        }
        for (signed char i_34 = 0; i_34 < 14; i_34 += 1) /* same iter space */
        {
            arr_133 [i_24] [i_34] = ((/* implicit */unsigned long long int) (+(2115375532)));
            arr_134 [i_24] [i_34] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1073741824)) ^ (((((/* implicit */_Bool) arr_17 [i_24] [i_24] [i_34] [i_24])) ? (((/* implicit */unsigned long long int) arr_78 [i_34])) : (arr_122 [i_34])))));
        }
        for (signed char i_35 = 0; i_35 < 14; i_35 += 1) /* same iter space */
        {
            var_61 *= ((/* implicit */signed char) var_0);
            arr_139 [i_24] [i_24] [i_24] = ((/* implicit */unsigned short) (signed char)87);
            var_62 = arr_17 [i_24] [i_24] [i_24] [i_24];
            var_63 ^= ((/* implicit */unsigned short) var_3);
            var_64 ^= ((/* implicit */short) ((((/* implicit */int) arr_130 [(unsigned char)6] [(unsigned char)6])) / (((/* implicit */int) arr_0 [i_24] [10U]))));
        }
        for (unsigned int i_36 = 2; i_36 < 13; i_36 += 2) 
        {
            var_65 = ((/* implicit */short) var_10);
            /* LoopSeq 3 */
            for (short i_37 = 0; i_37 < 14; i_37 += 1) 
            {
                arr_145 [i_24] [i_36] [i_36] = ((unsigned long long int) -268435456);
                var_66 = ((/* implicit */int) var_4);
                var_67 += ((/* implicit */_Bool) arr_82 [i_36]);
            }
            for (int i_38 = 3; i_38 < 12; i_38 += 4) 
            {
                arr_149 [i_24] [i_24] [i_24] |= ((/* implicit */signed char) arr_116 [i_36] [i_38]);
                var_68 = ((/* implicit */unsigned long long int) arr_43 [i_24] [i_38]);
                var_69 = 2147483645;
                arr_150 [i_24] [i_24] [i_24] = ((/* implicit */unsigned short) ((1686890018032190816ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 16759854055677360807ULL))))));
            }
            for (unsigned long long int i_39 = 0; i_39 < 14; i_39 += 2) 
            {
                arr_155 [i_24] [i_39] = ((/* implicit */unsigned long long int) (unsigned short)0);
                arr_156 [i_24] [i_36] [i_36] [i_36] = ((int) var_3);
            }
        }
        var_70 = ((/* implicit */long long int) var_5);
        /* LoopSeq 1 */
        for (unsigned short i_40 = 0; i_40 < 14; i_40 += 4) 
        {
            arr_159 [i_40] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (16844061205034503450ULL) : (((/* implicit */unsigned long long int) var_12))));
            var_71 = ((/* implicit */signed char) arr_146 [i_24] [i_24] [i_24]);
            arr_160 [i_24] [i_40] [i_40] = ((/* implicit */unsigned char) 1073741823);
            var_72 = ((/* implicit */int) max((var_72), (((/* implicit */int) 10038010685691237453ULL))));
            arr_161 [i_24] [i_40] [i_40] = ((/* implicit */signed char) arr_130 [i_24] [i_40]);
        }
    }
    var_73 = ((/* implicit */signed char) -1412129181);
    var_74 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 1602682868675048165ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (var_8))))) ? (((/* implicit */int) var_13)) : (max((((int) var_15)), (2147483647)))));
}
