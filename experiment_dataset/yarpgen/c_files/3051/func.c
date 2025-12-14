/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3051
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [(short)0] = ((/* implicit */long long int) ((unsigned long long int) 4294967295U));
            arr_5 [i_0] = ((/* implicit */short) arr_3 [(unsigned char)4]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (((((/* implicit */_Bool) -1944266381)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (1684888781U)))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) 2610078515U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) | (((/* implicit */int) arr_2 [i_0] [(unsigned char)5] [i_2])))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) (short)-32761);
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15446))) != (1684888787U))))));
        }
        var_16 |= ((((/* implicit */_Bool) 2610078509U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [3ULL])));
        var_17 = ((/* implicit */unsigned long long int) (unsigned short)25773);
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)65535))))) != (14947379411614839723ULL)));
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned char)69))) >> (((((/* implicit */int) ((short) (short)26534))) - (26515))))))));
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_22 [i_0] [(unsigned char)1] [i_4] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_25 [(short)3] [i_4] [i_4] [i_6] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_8 [i_6]))));
                    arr_26 [(unsigned char)9] [3LL] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (short)32767))));
                    arr_27 [i_4] [(unsigned short)1] [9ULL] [6] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (short)30576))));
                }
            }
            for (unsigned long long int i_7 = 3; i_7 < 7; i_7 += 1) 
            {
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 400376536U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)8] [i_4] [5U]))) : (4322180559575540252ULL))))));
                arr_30 [(unsigned short)7] [i_4] = ((/* implicit */long long int) -988852360);
                arr_31 [4] [0U] [(unsigned char)6] &= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_4] [0])) + (((/* implicit */int) var_11))));
            }
            for (unsigned long long int i_8 = 4; i_8 < 6; i_8 += 2) 
            {
                arr_35 [i_0] [i_8] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_16 [(unsigned short)2]) ? (((/* implicit */int) arr_14 [(short)0] [i_4] [2ULL])) : (((/* implicit */int) arr_24 [6ULL] [i_8]))))) ^ (-2411603134152261056LL)));
                arr_36 [i_4] [i_0] [i_4] [i_8 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_12 [3] [(unsigned short)1]))) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_4]))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8 - 4] [(short)9] [0U]))) : (var_6)))));
            }
        }
        for (short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
        {
            arr_40 [i_9] = ((/* implicit */signed char) ((unsigned char) 395846759U));
            arr_41 [i_9] [i_9] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_9])) | (((/* implicit */int) (signed char)67))));
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_45 [i_9] [(unsigned char)9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [(_Bool)1] [i_9] [i_10])) || (((/* implicit */_Bool) arr_32 [i_0] [i_9]))));
                arr_46 [(short)7] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0] [i_10]))) | (((((/* implicit */_Bool) 2610078509U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (12332041974939168855ULL)))));
                arr_47 [(unsigned char)6] [6LL] [i_9] = ((/* implicit */unsigned short) var_11);
                arr_48 [(short)3] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((arr_8 [i_0]) ? (((/* implicit */int) arr_8 [i_9])) : (((/* implicit */int) var_11))));
            }
            for (unsigned char i_11 = 4; i_11 < 7; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((signed char) arr_39 [i_11 - 1] [i_9] [i_11 - 4]));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_0] [i_11 + 3] [i_11 - 2] [3U] [i_11 + 3])) ? (((/* implicit */int) arr_55 [i_0] [i_11 + 1] [5LL] [(_Bool)1] [2LL])) : (((/* implicit */int) arr_55 [i_9] [i_11 - 3] [9] [i_12] [i_12]))));
                }
                arr_56 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) arr_6 [i_0] [i_11 + 2])) : (((((/* implicit */int) arr_34 [i_9])) / (arr_9 [(signed char)2] [8LL])))));
                arr_57 [i_9] [(unsigned char)6] = ((/* implicit */short) ((arr_9 [i_0] [i_9]) / (arr_9 [i_0] [i_0])));
                arr_58 [i_9] [(short)8] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_11 - 1] [i_11 - 2] [i_11 - 3] [i_11 - 2])) >> (((arr_12 [i_11 - 1] [i_9]) - (13082350310050637775ULL)))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_9] [i_11 + 2])) ? (((/* implicit */int) arr_14 [0ULL] [i_9] [i_11 - 4])) : (((/* implicit */int) arr_14 [i_11 - 4] [(short)9] [i_0]))));
            }
            for (unsigned char i_13 = 4; i_13 < 7; i_13 += 3) /* same iter space */
            {
                arr_62 [i_13 - 1] [4] [4] [i_0] |= ((/* implicit */unsigned long long int) (_Bool)1);
                arr_63 [i_9] [(unsigned char)7] [7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_9])) ? (arr_9 [i_0] [i_0]) : (((/* implicit */int) arr_52 [i_0] [i_9] [i_9] [(unsigned short)9]))));
            }
            var_24 = ((/* implicit */unsigned short) ((short) arr_53 [i_9] [i_9] [i_9] [0LL]));
        }
        for (short i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
        {
            var_25 = ((((/* implicit */int) arr_59 [i_0])) ^ (((/* implicit */int) arr_59 [i_14])));
            arr_67 [(_Bool)1] &= ((((/* implicit */_Bool) arr_64 [7ULL])) ? (((/* implicit */int) arr_52 [i_14] [i_14] [8] [i_14])) : (((/* implicit */int) var_7)));
            arr_68 [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_28 [(signed char)8] [i_14])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_66 [4] [1LL] [7ULL]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)187)) / (((/* implicit */int) var_0)))))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (arr_9 [i_0] [(unsigned short)5]) : (((/* implicit */int) (unsigned short)65280))));
            arr_69 [8LL] [i_14] [i_14] = ((/* implicit */int) arr_19 [i_0] [i_14] [i_14]);
        }
        for (short i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
        {
            arr_73 [1ULL] [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)4]);
            arr_74 [0ULL] [(short)3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [5LL] [i_0] [i_15] [i_15]))));
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_27 ^= ((/* implicit */int) (((-(arr_54 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_34 [(short)2]))))));
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    arr_79 [i_0] [i_15] [4ULL] [i_17] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)32736)) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (58532655)))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((11ULL) >> (((((/* implicit */int) (short)-26982)) + (27029)))));
                        arr_82 [(short)7] [i_16] [6U] = (~(((/* implicit */int) ((((/* implicit */int) arr_52 [(_Bool)0] [i_15] [i_16] [i_15])) != (((/* implicit */int) (unsigned short)8))))));
                        arr_83 [(unsigned short)1] [3] [i_16] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [(_Bool)1] [i_17] [9] [i_15] [i_0])) ? (((/* implicit */int) (short)-32761)) : (arr_9 [1] [(short)7])));
                    }
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        arr_87 [i_17] [i_16] [(unsigned short)1] [4LL] [(unsigned char)8] = ((/* implicit */short) arr_61 [(short)0] [i_16] [i_17] [i_19 + 1]);
                        arr_88 [0LL] [i_16] [i_16] [i_16] [2ULL] = ((/* implicit */_Bool) 443756127);
                    }
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (270019794)))) ? (((((/* implicit */int) (signed char)11)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned short)59138))))));
                }
            }
            for (short i_20 = 1; i_20 < 7; i_20 += 1) 
            {
                var_30 = ((/* implicit */int) ((((var_9) ? (58532655) : (((/* implicit */int) (signed char)-126)))) <= (((/* implicit */int) var_11))));
                /* LoopSeq 3 */
                for (short i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_22 = 4; i_22 < 8; i_22 += 1) 
                    {
                        arr_97 [i_0] [i_0] [i_0] [(unsigned char)5] [i_0] [2U] = ((/* implicit */short) arr_90 [(unsigned char)9]);
                        arr_98 [(short)0] = ((/* implicit */unsigned char) ((arr_49 [i_20 + 3] [7LL] [i_20 + 2]) / (arr_49 [i_20 + 1] [i_0] [i_0])));
                        arr_99 [i_21] [i_22 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56721)) ^ (((/* implicit */int) (_Bool)0))));
                    }
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        arr_104 [8U] [i_0] [8ULL] [i_0] [i_23] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) ((unsigned char) arr_102 [i_0] [i_21] [(unsigned short)4] [i_21] [i_23] [i_23]))) : (((/* implicit */int) (short)-32761))));
                        var_31 = ((/* implicit */unsigned long long int) var_4);
                        arr_105 [i_0] [8U] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_20 + 1])) : (((/* implicit */int) arr_1 [i_20 + 1]))));
                        arr_106 [(signed char)9] [6LL] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    arr_107 [i_15] [(unsigned short)8] [i_21] = ((/* implicit */int) ((signed char) 2436757445U));
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 1; i_24 < 8; i_24 += 4) 
                    {
                        arr_111 [i_24] = ((((/* implicit */_Bool) arr_28 [i_15] [2])) ? (((/* implicit */int) arr_28 [i_24 + 1] [i_15])) : (((/* implicit */int) arr_28 [i_0] [i_15])));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21461)) ? (((/* implicit */int) (unsigned short)65535)) : ((~(-58532655)))));
                        arr_112 [(short)8] [i_24] = ((/* implicit */unsigned int) var_1);
                    }
                    for (short i_25 = 1; i_25 < 8; i_25 += 3) 
                    {
                        var_33 ^= ((/* implicit */short) ((((/* implicit */int) arr_85 [i_21] [4LL] [i_25 + 2] [i_25 - 1] [i_21] [i_20 + 2] [i_21])) & (((/* implicit */int) var_12))));
                        arr_115 [(signed char)4] [(_Bool)1] [9U] [2] [i_25 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_85 [i_21] [i_20 - 1] [(_Bool)1] [i_20 - 1] [i_20 + 3] [i_20 + 3] [i_20 + 3])) ? (((/* implicit */int) arr_85 [i_21] [6ULL] [(_Bool)1] [i_20 - 1] [i_20 + 3] [i_20 + 3] [2])) : (((/* implicit */int) arr_85 [i_21] [i_20 + 1] [(signed char)4] [i_20 - 1] [i_20 + 3] [i_20 + 3] [i_20 + 2]))));
                        arr_116 [(_Bool)1] [(unsigned short)2] [i_21] [i_21] [i_21] = arr_100 [(_Bool)1];
                        var_34 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) & (2293226983U)));
                    }
                    arr_117 [(_Bool)1] [i_20 + 3] [(_Bool)1] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)125))));
                }
                for (unsigned short i_26 = 1; i_26 < 8; i_26 += 4) 
                {
                    var_35 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_120 [i_0] [i_26 + 2] [i_20 - 1] [0ULL] [i_26 + 1])));
                    arr_121 [i_0] [2ULL] [i_20 - 1] [i_26 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_86 [(_Bool)0] [i_26 - 1] [(_Bool)1] [i_0] [(_Bool)1]))));
                    arr_122 [1LL] [(_Bool)1] = ((/* implicit */signed char) ((unsigned long long int) -507910739));
                }
                for (long long int i_27 = 1; i_27 < 7; i_27 += 2) 
                {
                    var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_52 [i_27 + 2] [i_27 - 1] [4] [i_27 + 1])) : (((/* implicit */int) arr_52 [i_27 - 1] [i_27 + 1] [8] [i_27 + 3]))));
                    /* LoopSeq 1 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((58532655) <= (((/* implicit */int) arr_124 [i_27 + 1] [i_27 + 2]))));
                        var_38 = ((/* implicit */int) ((long long int) ((2147483647) % (((/* implicit */int) (signed char)-3)))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_94 [(short)7] [(unsigned short)6] [i_20 + 1])) ? (((/* implicit */int) arr_94 [i_0] [(unsigned char)7] [i_20 - 1])) : (((/* implicit */int) (short)3909))));
                        var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_8 [i_27 + 1])) : (((/* implicit */int) arr_2 [i_27 + 3] [(unsigned char)1] [6]))));
                    }
                    arr_129 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-58532655) : (((/* implicit */int) arr_43 [i_0] [(_Bool)1]))));
                    arr_130 [(_Bool)1] [(short)5] [i_15] [(short)7] [i_27 + 2] [i_27 + 2] |= ((/* implicit */short) ((var_4) << (((((/* implicit */int) (signed char)127)) - (127)))));
                }
            }
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_102 [(unsigned char)6] [i_15] [(short)3] [3LL] [i_15] [7ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_123 [i_15] [i_15] [i_0] [(unsigned char)2] [i_0]))) : (arr_32 [i_0] [(short)0]))))));
        }
    }
    var_42 = ((/* implicit */signed char) (!((_Bool)1)));
    var_43 = ((/* implicit */unsigned long long int) var_10);
}
