/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191837
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0])), (var_13)))))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+((((_Bool)1) ? (max((arr_1 [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25831)) << (((arr_1 [0U] [i_0 + 1]) - (5967067995121779229ULL)))))))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) && (((/* implicit */_Bool) arr_3 [i_1 - 2])))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17477))) * (15305955921743827240ULL))))))));
        var_19 = ((((/* implicit */int) arr_4 [15] [i_1])) / (((((/* implicit */_Bool) 970962527U)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42262))))))));
        arr_5 [i_1 + 1] [5ULL] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1))))) || (((_Bool) 4074143507U)))) && (((/* implicit */_Bool) ((unsigned int) arr_0 [i_1 - 1])))));
        var_20 &= ((/* implicit */unsigned int) var_11);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_21 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) || (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_2 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (signed char)16))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1])) || (((/* implicit */_Bool) arr_3 [(short)11]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-125)) && (((/* implicit */_Bool) (short)16644))))))))));
            var_22 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32739)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (arr_4 [i_1] [i_2]))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_7 [i_2] [i_2] [(unsigned short)11])))))) ? (arr_7 [i_1 + 1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((unsigned char)172), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) arr_0 [i_1 + 1])))))));
            var_23 |= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23711)) << (((/* implicit */int) ((((/* implicit */_Bool) (short)16654)) && (((/* implicit */_Bool) (unsigned char)160)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_3 [i_1]))))) < (max((((/* implicit */unsigned long long int) 1832292216U)), (16602140336772396884ULL))))))) : (((arr_7 [i_1 + 1] [i_1 + 1] [i_2 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
            var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-165190998), (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_3 [i_1 + 1])))) : (max((arr_2 [i_1 - 1] [i_2 + 2]), (arr_2 [i_1 - 1] [5U])))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), ((signed char)-38)));
                        var_26 = ((/* implicit */short) min((var_26), ((short)-31923)));
                    }
                } 
            } 
        }
        for (short i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_7 [i_1 - 2] [i_5] [i_5 - 1]))));
            var_28 *= ((/* implicit */unsigned short) max((((/* implicit */int) (short)94)), (-648176954)));
            var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_12 [i_5 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)84))) : (min((arr_12 [i_5 - 2]), (arr_12 [i_5 - 1])))));
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 15; i_6 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_7)))))));
            var_31 ^= ((/* implicit */int) 11886716006628014689ULL);
            var_32 *= ((/* implicit */_Bool) arr_13 [i_6]);
            var_33 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)37903)) ? (4381828990654168829ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_6] [i_6 + 1]))))) / (2305843009213693951ULL)));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) arr_18 [i_7 - 1])) >= (((/* implicit */int) arr_3 [i_7 - 1])))))));
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7 + 1])) && (((/* implicit */_Bool) arr_13 [i_7 + 1])))))));
            var_36 *= ((/* implicit */unsigned char) arr_16 [(unsigned char)2] [i_8]);
        }
        for (int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_37 = ((/* implicit */unsigned int) min((var_37), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7 - 2] [i_7 + 1]))) * (((((/* implicit */_Bool) 2271490138607444070ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned short)2] [i_7 + 1])))))))));
            var_38 ^= ((/* implicit */_Bool) arr_4 [i_7 - 2] [i_7 - 2]);
            arr_26 [2U] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
        }
        for (short i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
        {
            var_39 += ((/* implicit */int) ((((((/* implicit */_Bool) -46667325)) && (((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) arr_18 [i_7 + 1]))));
            var_40 ^= ((/* implicit */signed char) arr_9 [i_7 - 2] [i_7 - 1]);
            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_0))));
        }
        for (short i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
        {
            var_42 ^= arr_25 [i_7 - 1] [i_7 - 1] [3U];
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_29 [i_7 + 1] [(signed char)10] [i_12 + 1]))));
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) arr_21 [i_7]))));
                    var_45 = ((/* implicit */unsigned char) max((var_45), (var_13)));
                }
                var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_7 - 1])))))));
            }
            /* LoopSeq 4 */
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                var_47 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-15985))));
                arr_43 [i_7] |= ((/* implicit */unsigned int) var_13);
            }
            for (unsigned char i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
            {
                var_48 = ((/* implicit */unsigned long long int) max((var_48), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25962))) - (17039940407677275138ULL)))));
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7 + 1])) ? (((/* implicit */int) arr_20 [i_7 - 2])) : (((/* implicit */int) var_11)))))));
                        var_50 -= ((/* implicit */_Bool) arr_15 [i_7 - 2]);
                    }
                    for (unsigned long long int i_18 = 3; i_18 < 13; i_18 += 4) /* same iter space */
                    {
                        var_51 = ((/* implicit */_Bool) min((var_51), (((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_18 - 3])) && (((/* implicit */_Bool) arr_16 [i_7 + 1] [i_18 - 2]))))));
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) var_9))));
                        var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) ((((/* implicit */_Bool) 4209756884427029494ULL)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (unsigned short)65533)))))));
                        var_54 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_7 - 2] [i_18 + 1] [i_18 - 2] [i_18 - 1])) ^ (((/* implicit */int) arr_33 [i_7 - 2] [i_18 + 1] [i_18 - 2] [i_18 - 1]))));
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((arr_2 [i_7 + 1] [i_18 + 2]) >= (arr_2 [i_7 - 2] [i_18 - 1]))))));
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 13; i_19 += 4) /* same iter space */
                    {
                        var_56 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7 - 1]))) * (2470089331U)));
                        var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) (-(((2611431437393803644LL) << (((((/* implicit */int) (unsigned short)55290)) - (55289))))))))));
                        var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) arr_20 [i_7]))));
                        var_59 *= ((/* implicit */short) var_0);
                    }
                    for (unsigned long long int i_20 = 3; i_20 < 13; i_20 += 4) /* same iter space */
                    {
                        var_60 += ((/* implicit */short) ((arr_54 [i_20 - 3] [i_20] [i_20 - 3] [i_20] [i_20 - 1] [i_20]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_54 [i_20 - 3] [i_20 - 2] [i_20] [i_20 - 2] [i_20 - 1] [3ULL]))));
                        var_61 = ((/* implicit */unsigned int) max((var_61), (((/* implicit */unsigned int) arr_32 [i_7] [i_7]))));
                    }
                    var_62 += ((/* implicit */unsigned int) 18103950108289733189ULL);
                }
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) 
                {
                    for (short i_22 = 1; i_22 < 13; i_22 += 2) 
                    {
                        {
                            var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) arr_23 [(short)4]))));
                            var_64 += arr_39 [i_11] [i_21] [i_21];
                            var_65 = ((/* implicit */long long int) arr_27 [i_7 - 1]);
                        }
                    } 
                } 
                var_66 ^= ((((/* implicit */int) arr_50 [i_7] [i_7] [i_11] [i_11] [i_15] [i_15])) == (((/* implicit */int) ((1757296396011457986ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned char i_23 = 0; i_23 < 16; i_23 += 2) /* same iter space */
            {
                var_67 = ((/* implicit */long long int) min((var_67), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15147)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (short)-28884)))))));
                var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_7 - 2] [i_7 - 2])))))));
                var_69 = ((/* implicit */unsigned char) max((var_69), (((/* implicit */unsigned char) (((-(87165278501233961ULL))) * (((/* implicit */unsigned long long int) arr_34 [i_7 - 2] [(unsigned short)7] [i_7 - 1])))))));
            }
            for (unsigned int i_24 = 0; i_24 < 16; i_24 += 1) 
            {
                arr_66 [i_7] [i_11] [i_7] [i_24] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -1115527265)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))) : (2723926254U)));
                var_70 &= ((/* implicit */unsigned int) 0);
                var_71 = ((/* implicit */unsigned char) min((var_71), (((/* implicit */unsigned char) ((signed char) arr_40 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 - 2])))));
            }
            var_72 = ((/* implicit */unsigned char) max((var_72), (((/* implicit */unsigned char) var_2))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_25 = 0; i_25 < 16; i_25 += 2) 
        {
            var_73 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_7 + 1] [i_25] [i_25] [(short)1] [i_7] [i_25])) / ((~(((/* implicit */int) (signed char)22))))));
            var_74 = ((/* implicit */_Bool) max((var_74), (((/* implicit */_Bool) var_7))));
            var_75 = ((/* implicit */unsigned short) min((var_75), (((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [i_7] [i_25] [i_7 + 1] [i_7 - 1])) & (((/* implicit */int) arr_41 [i_7] [i_25] [i_25] [i_25])))))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            var_76 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_7 + 1] [i_7 - 1] [i_7 - 1])) || (((/* implicit */_Bool) arr_63 [i_7 - 1] [6] [13ULL] [i_7 + 1]))));
            var_77 = ((/* implicit */long long int) max((var_77), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) | (arr_73 [i_7 - 1] [i_7 + 1]))))));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_28 = 0; i_28 < 16; i_28 += 1) /* same iter space */
            {
                var_78 = ((/* implicit */unsigned int) max((var_78), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_77 [i_7 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_13 [i_27]))))))))));
                var_79 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7 + 1])) ? (7840351816878329370ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 - 2])))));
            }
            for (signed char i_29 = 0; i_29 < 16; i_29 += 1) /* same iter space */
            {
                var_80 = ((/* implicit */signed char) max((var_80), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_7 + 1])) && (((/* implicit */_Bool) var_3)))))));
                var_81 = ((/* implicit */unsigned short) min((var_81), (((/* implicit */unsigned short) arr_33 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7 - 1]))));
                var_82 = ((/* implicit */int) min((var_82), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)9924)) : (((/* implicit */int) (unsigned short)17))))) || (((((/* implicit */int) arr_30 [(unsigned short)0] [i_27])) > (((/* implicit */int) (_Bool)1)))))))));
            }
            for (unsigned short i_30 = 0; i_30 < 16; i_30 += 2) /* same iter space */
            {
                var_83 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65408)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7 - 2] [i_7 + 1]))) : (11130017828742223154ULL)));
                /* LoopSeq 1 */
                for (short i_31 = 2; i_31 < 15; i_31 += 1) 
                {
                    var_84 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_89 [i_27] [(_Bool)1] [i_30] [i_30]))) : (((((/* implicit */_Bool) (unsigned short)32226)) ? (-6181063553917522846LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [4ULL] [i_30])))))));
                    var_85 = ((/* implicit */int) arr_65 [i_7 - 1] [i_27] [i_30] [i_31 + 1]);
                }
            }
            for (unsigned short i_32 = 0; i_32 < 16; i_32 += 2) /* same iter space */
            {
                var_86 = ((/* implicit */unsigned short) max((var_86), (((/* implicit */unsigned short) arr_0 [i_7 - 2]))));
                /* LoopSeq 2 */
                for (unsigned short i_33 = 0; i_33 < 16; i_33 += 1) 
                {
                    var_87 = ((/* implicit */long long int) max((var_87), (((/* implicit */long long int) var_5))));
                    var_88 = ((/* implicit */unsigned char) max((var_88), (((/* implicit */unsigned char) ((signed char) arr_19 [i_7 - 1])))));
                    var_89 = ((/* implicit */signed char) min((var_89), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_98 [i_33] [i_33] [i_7 + 1] [i_27] [i_7 + 1] [15U])) >= (((/* implicit */int) arr_91 [1U] [i_27] [i_32] [i_33]))))))))));
                    var_90 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_7 - 2] [i_7] [i_7 - 1]))));
                    arr_99 [i_7 - 1] [i_7 - 1] [i_7 - 2] [i_7] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (short)5325)) : (((/* implicit */int) var_10))));
                }
                for (signed char i_34 = 0; i_34 < 16; i_34 += 4) 
                {
                    var_91 ^= ((/* implicit */short) var_5);
                    var_92 = ((/* implicit */unsigned short) max((var_92), (((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)31926)))) ^ (((arr_73 [i_7] [i_27]) / (((/* implicit */int) var_5)))))))));
                    var_93 ^= ((/* implicit */unsigned long long int) var_14);
                    arr_104 [i_7 - 1] [i_27] [i_32] [7ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_102 [i_7 - 2] [i_7 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_102 [i_7 - 1] [i_7 + 1]))));
                }
            }
            var_94 = ((/* implicit */short) max((var_94), (((/* implicit */short) ((unsigned short) arr_31 [i_7 + 1])))));
            /* LoopNest 3 */
            for (unsigned short i_35 = 0; i_35 < 16; i_35 += 2) 
            {
                for (signed char i_36 = 3; i_36 < 15; i_36 += 4) 
                {
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                    {
                        {
                            var_95 *= ((((/* implicit */_Bool) ((((((/* implicit */int) arr_63 [i_7 + 1] [i_7] [i_7] [1U])) + (2147483647))) >> (((((/* implicit */int) (short)16383)) - (16369)))))) ? (arr_76 [(_Bool)1] [i_35] [i_36]) : (arr_64 [i_35]));
                            var_96 = ((/* implicit */int) min((var_96), (((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_7 + 1] [i_7 - 1] [i_36 - 1])) || (((/* implicit */_Bool) arr_45 [i_7] [i_7 - 2] [i_36 - 1])))))));
                        }
                    } 
                } 
            } 
        }
        var_97 += ((/* implicit */int) ((unsigned char) arr_13 [i_7]));
    }
    for (unsigned int i_38 = 2; i_38 < 15; i_38 += 2) /* same iter space */
    {
        var_98 = ((/* implicit */_Bool) min((var_98), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_89 [i_38 - 1] [i_38] [i_38 - 2] [i_38 - 2])) * (((/* implicit */int) var_2)))))))));
        var_99 = ((/* implicit */long long int) max((var_99), (((/* implicit */long long int) (unsigned short)20798))));
        var_100 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (2097410175U) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_25 [(short)13] [(short)13] [i_38])) : (((/* implicit */int) (short)8385)))))))) ? ((+(arr_21 [i_38 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162)))));
        var_101 *= ((/* implicit */unsigned int) var_9);
        var_102 += ((/* implicit */unsigned short) max((((((/* implicit */int) arr_59 [i_38 + 1] [i_38 + 1] [i_38] [i_38 - 1] [i_38 - 2] [i_38] [i_38])) << (0U))), (((/* implicit */int) (short)-10703))));
    }
    var_103 = ((/* implicit */int) max((var_103), (((((/* implicit */_Bool) min((var_2), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)65523)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_12))))));
    var_104 *= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_13)), (max((230861255807319480LL), (((/* implicit */long long int) var_12)))))) / (((/* implicit */long long int) max((3230286989U), (((/* implicit */unsigned int) var_4)))))));
    var_105 -= ((/* implicit */signed char) (unsigned char)128);
}
