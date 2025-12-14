/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229459
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
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_3]);
                            arr_11 [i_2] [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned int) 17ULL);
                            var_20 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_0] [i_0]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) max((((-131072LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7936)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */int) (short)4064))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))))));
                var_22 -= ((/* implicit */long long int) -1);
                var_23 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (4294967295U))) ? ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            {
                arr_17 [i_4] [i_5] |= min(((((_Bool)1) ? (16ULL) : (36028797010575360ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) / (arr_13 [i_5] [i_5])))));
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned char) (_Bool)1);
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7 - 1] [i_7 - 1] [i_8 + 1] [i_8 - 1])) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) : (((/* implicit */int) arr_18 [i_4] [i_5] [i_7] [i_8]))));
                                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (274609471488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))));
                                var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)768)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1792))))) : (((arr_21 [i_7 - 1] [i_5] [i_7] [i_8 + 1] [i_8 + 1] [i_5]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4079)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (arr_14 [i_5] [i_9]) : (((arr_14 [i_4] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4]))))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                arr_32 [i_4] [i_9] [i_4] [i_10 - 1] [i_11] = ((/* implicit */short) min((arr_12 [i_5] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_11] [i_10 - 1])) ? (448) : (arr_15 [i_11])))) ? (((/* implicit */int) arr_27 [i_5] [i_9] [i_10] [i_11])) : (((var_16) << (((1879048192U) - (1879048191U))))))))));
                                arr_33 [i_4] [i_5] [i_9] [i_4] [i_10 - 2] [i_4] [i_11] = ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_5] [i_10] [i_4]))))), (((unsigned int) arr_20 [i_4] [i_4] [i_5] [i_9] [i_10] [i_5])))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_24 [i_10 + 2])) : (((/* implicit */int) (short)4044))))));
                                arr_34 [i_4] [i_10] [i_4] [i_4] [i_4] [i_4] &= arr_27 [i_10 + 2] [i_5] [i_9] [i_10 - 2];
                            }
                        } 
                    } 
                    var_29 *= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((131072LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */_Bool) arr_29 [i_9] [i_5] [i_4] [i_4])) ? (arr_30 [i_4] [i_4] [i_4] [i_4] [i_5] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_5] [i_5]))))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-448) : ((-2147483647 - 1))))) : ((~(19ULL)))))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 2; i_12 < 17; i_12 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_12 - 1] [i_12 - 2])) || (((/* implicit */_Bool) arr_22 [i_12 - 2] [i_12 - 1]))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) arr_12 [i_4] [i_12 + 1]);
                            var_32 = ((/* implicit */_Bool) arr_16 [i_12 - 2] [i_13] [i_4]);
                        }
                        for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 2) 
                        {
                            var_33 ^= ((/* implicit */unsigned char) ((short) 26ULL));
                            var_34 |= ((/* implicit */unsigned short) arr_24 [i_15 - 1]);
                            var_35 &= ((/* implicit */short) ((((/* implicit */int) arr_39 [i_5] [i_15 + 2] [i_4] [i_12 - 1] [i_12 - 1] [i_12])) * (((/* implicit */int) arr_39 [i_13] [i_15 - 1] [i_13] [i_12 - 1] [i_15] [i_5]))));
                        }
                        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            var_36 = (((_Bool)0) || (((/* implicit */_Bool) (unsigned char)128)));
                            var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551597ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4] [i_5] [i_13] [i_16]))))))) : (arr_41 [i_4] [i_4] [i_12] [i_13] [i_16] [i_12])));
                            var_38 ^= ((/* implicit */unsigned int) arr_42 [i_16] [i_16] [i_16] [i_16] [i_16]);
                            arr_48 [i_5] [i_16] &= ((/* implicit */short) ((arr_42 [i_16] [i_16] [i_16] [i_16] [i_16]) / (arr_42 [i_4] [i_5] [i_12 + 1] [i_13] [i_16])));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_52 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_39 [i_4] [i_5] [i_4] [i_13] [i_17] [i_13]);
                            arr_53 [i_4] [i_4] [i_12 - 1] [i_13] [i_12 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_5] [i_4] [i_5] [i_12 - 1] [i_12 - 2])) ? (arr_38 [i_5] [i_4] [i_12] [i_12 + 1] [i_12 - 1]) : (-433)));
                            arr_54 [i_4] [i_5] [i_17] [i_4] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_12] [i_5] [i_17] [i_12 + 1])) & (((/* implicit */int) (unsigned char)255))));
                            var_39 = ((/* implicit */unsigned short) ((unsigned long long int) arr_31 [i_5] [i_12 + 1] [i_12 + 1] [i_12 - 2] [i_12 - 1]));
                        }
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294705152U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))));
                        arr_57 [i_4] [i_5] [i_12] [i_18] [i_18] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_4] [i_12 - 2] [i_5] [i_5])) ? (arr_29 [i_4] [i_12 - 2] [i_4] [i_5]) : (arr_29 [i_4] [i_12 + 1] [i_4] [i_4])));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_41 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_12] [i_5] [i_12] [i_12 + 1] [i_12])) ? (((/* implicit */int) arr_27 [i_12] [i_12] [i_12] [i_19])) : (((/* implicit */int) arr_51 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 2; i_20 < 16; i_20 += 3) 
                        {
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_12] [i_12] [i_12] [i_12] [i_12 - 1])) ? (((/* implicit */unsigned int) arr_38 [i_20 - 1] [i_5] [i_20 - 1] [i_20] [i_20])) : (arr_56 [i_20 + 1] [i_19] [i_12 - 2] [i_19]))))));
                            var_43 = ((/* implicit */unsigned char) (_Bool)1);
                            var_44 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_56 [i_4] [i_5] [i_4] [i_19]) >> (((((/* implicit */int) arr_20 [i_19] [i_5] [i_19] [i_5] [i_5] [i_19])) + (75)))))) || (((/* implicit */_Bool) (unsigned char)160))));
                        }
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_22 = 3; i_22 < 15; i_22 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (((+(0U))) >> (0ULL))))));
                            var_46 -= ((/* implicit */unsigned int) ((unsigned short) arr_16 [i_12 - 1] [i_12] [i_5]));
                            var_47 = ((/* implicit */_Bool) (short)(-32767 - 1));
                        }
                        arr_72 [i_4] [i_4] [i_5] [i_12 - 1] [i_4] [i_21] = ((unsigned int) arr_62 [i_12 + 1] [i_5] [i_12] [i_21] [i_5]);
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) arr_18 [i_4] [i_4] [i_4] [i_4]))));
                            var_49 *= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1879048192U)));
                        }
                    }
                    /* LoopSeq 2 */
                    for (int i_24 = 1; i_24 < 15; i_24 += 3) 
                    {
                        var_50 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_59 [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12]))));
                        var_51 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_5] [i_24 + 3] [i_24 + 3])) >> (((((((/* implicit */_Bool) arr_60 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32737))) : (arr_74 [i_5] [i_4] [i_5] [i_5] [i_5] [i_12] [i_24]))) + (32737LL)))));
                        var_52 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)48)) : (98304))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))));
                        var_53 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_76 [i_4] [i_4] [i_4] [i_5] [i_12] [i_24] [i_24 + 3])) ? (arr_76 [i_4] [i_12] [i_12 - 2] [i_24] [i_12 + 1] [i_12 + 1] [i_12]) : (arr_76 [i_4] [i_5] [i_5] [i_12 + 1] [i_12] [i_24] [i_24 + 1])));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        arr_81 [i_4] [i_5] [i_12 - 1] [i_4] [i_25] = ((/* implicit */short) ((unsigned char) 10U));
                        var_54 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) != (545460846592ULL)))) - (((((/* implicit */_Bool) arr_16 [i_25] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 0; i_26 < 18; i_26 += 4) 
                        {
                            var_55 -= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_60 [i_4] [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_4] [i_25] [i_12 + 1] [i_25])))))) ? (((/* implicit */int) arr_61 [i_12 - 2] [i_4])) : (((/* implicit */int) arr_59 [i_5] [i_12] [i_12 - 2] [i_26] [i_26])))))));
                            var_57 += ((/* implicit */unsigned char) ((int) arr_73 [i_12 + 1] [i_12 + 1] [i_12 - 2] [i_12 - 2] [i_12 - 1] [i_12 - 2] [i_5]));
                            var_58 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_4] [i_5] [i_26] [i_12 + 1] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_4])) >> (0))))));
                        }
                        var_59 &= ((/* implicit */short) (!(((/* implicit */_Bool) 4261412864U))));
                        var_60 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) || ((_Bool)1)));
                    }
                    var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_4] [i_5] [i_12] [i_12 - 1])) ? (arr_60 [i_4] [i_4] [i_4]) : (arr_60 [i_12] [i_12 - 2] [i_12 - 2])));
                    /* LoopSeq 2 */
                    for (short i_27 = 0; i_27 < 18; i_27 += 1) /* same iter space */
                    {
                        var_62 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_86 [i_4] [i_5] [i_12 - 1] [i_27] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_27] [i_12 + 1] [i_12] [i_12])) ? ((((_Bool)0) ? (arr_76 [i_4] [i_5] [i_12 - 1] [i_27] [i_4] [i_12 - 1] [i_27]) : (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_4] [i_12 + 1] [i_5])))));
                        arr_87 [i_4] [i_4] [i_5] [i_4] [i_12 + 1] [i_27] = ((/* implicit */long long int) arr_26 [i_12 - 1] [i_5] [i_12]);
                        var_63 += ((/* implicit */unsigned char) arr_68 [i_12 - 2] [i_12] [i_4]);
                    }
                    for (short i_28 = 0; i_28 < 18; i_28 += 1) /* same iter space */
                    {
                        var_64 = ((/* implicit */_Bool) arr_22 [i_4] [i_4]);
                        var_65 = ((/* implicit */_Bool) ((arr_89 [i_12 + 1] [i_12 + 1] [i_5] [i_4]) ? (((/* implicit */int) arr_37 [i_5] [i_12 + 1] [i_28] [i_28])) : (((/* implicit */int) ((_Bool) arr_59 [i_4] [i_4] [i_4] [i_4] [i_4])))));
                    }
                    var_66 = var_9;
                }
            }
        } 
    } 
    var_67 = ((/* implicit */signed char) ((unsigned int) var_17));
    /* LoopNest 2 */
    for (short i_29 = 0; i_29 < 19; i_29 += 1) 
    {
        for (short i_30 = 3; i_30 < 16; i_30 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_31 = 2; i_31 < 18; i_31 += 1) 
                {
                    arr_101 [i_31 + 1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65520U)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */unsigned long long int) arr_99 [i_30 + 1] [i_31 + 1] [i_31 + 1] [i_31 - 1])) : (((((/* implicit */_Bool) arr_96 [i_31 - 1] [i_31])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765)))))));
                    var_68 = ((/* implicit */int) min((var_68), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))));
                    arr_102 [i_29] [i_29] = 15ULL;
                }
                for (short i_32 = 2; i_32 < 17; i_32 += 1) 
                {
                    arr_105 [(signed char)0] &= ((/* implicit */int) min((arr_96 [i_30 + 1] [i_30 + 3]), (arr_96 [i_30 + 2] [i_30 - 2])));
                    var_69 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_103 [i_30 + 3] [i_30] [i_32] [i_32])) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((arr_103 [i_30 - 2] [i_30 - 2] [i_32 - 1] [i_30]), (arr_103 [i_30 - 2] [i_30 + 1] [i_32] [i_29])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (0U)))));
                }
                /* LoopNest 2 */
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    for (unsigned char i_34 = 0; i_34 < 19; i_34 += 3) 
                    {
                        {
                            var_70 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (((((/* implicit */_Bool) (unsigned short)8)) ? (18446743528248705046ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                            var_71 = ((/* implicit */unsigned char) ((9007199254740480LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_72 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_96 [i_33] [i_30])) || ((_Bool)1))) ? (min((((/* implicit */unsigned long long int) -1LL)), (9223372036854775808ULL))) : (((/* implicit */unsigned long long int) ((arr_103 [i_29] [i_29] [i_29] [i_29]) ? (arr_93 [i_33] [i_34]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))) >> (((min((((/* implicit */long long int) (unsigned short)8)), (-9007199254740481LL))) + (9007199254740537LL)))));
                        }
                    } 
                } 
                var_73 -= ((/* implicit */unsigned short) arr_109 [i_29] [i_29] [i_29] [i_30] [i_30 - 2] [i_30 - 2]);
            }
        } 
    } 
}
