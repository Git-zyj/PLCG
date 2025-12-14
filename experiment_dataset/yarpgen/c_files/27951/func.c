/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27951
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [(signed char)2] [i_0])) : (((/* implicit */int) var_13))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)0))))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : ((-(11769921172059934100ULL))))))));
        var_22 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(arr_2 [i_0])))), (var_19))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_8 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_2 [i_2])));
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) ((var_15) ? (arr_0 [i_1]) : (arr_0 [i_2])));
                    arr_13 [i_3] [i_2] [(unsigned char)14] [i_0] = ((/* implicit */_Bool) (-(11769921172059934100ULL)));
                }
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_25 = ((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [(signed char)10])));
                    var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 11769921172059934102ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (11769921172059934102ULL)));
                }
                for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) var_16);
                        arr_21 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) var_6);
                        var_28 = ((/* implicit */long long int) (_Bool)0);
                    }
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11769921172059934100ULL)) ? (((/* implicit */int) arr_18 [i_0] [10ULL] [i_0])) : (((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
                    var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((3294122589U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                    var_31 = ((/* implicit */short) (~(arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                    var_32 = ((/* implicit */unsigned char) 1871777233U);
                }
                var_33 ^= ((/* implicit */unsigned short) var_3);
            }
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                var_34 = ((/* implicit */long long int) min((var_34), ((-(var_19)))));
                var_35 = ((/* implicit */_Bool) min((var_35), (((((/* implicit */long long int) ((/* implicit */int) var_17))) == (arr_15 [i_0] [i_1] [i_7])))));
            }
            for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                arr_27 [(unsigned char)10] [19U] [i_0] [i_0] = arr_1 [i_1];
                var_36 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_1] [i_1])) | (((/* implicit */int) arr_18 [i_8] [i_1] [i_0]))));
                arr_28 [i_0] [i_0] [i_0] = (-(var_14));
            }
            var_37 = ((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1])))));
            arr_29 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        }
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned short) (-((+(max((2423190081U), (((/* implicit */unsigned int) arr_16 [16ULL] [i_9]))))))));
        var_39 += (+(((unsigned int) var_15)));
        var_40 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-4198803331975971275LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_9]))) : ((+(var_0)))))) ? (arr_8 [i_9]) : (((((/* implicit */_Bool) arr_17 [(unsigned short)16] [(_Bool)1] [10U] [i_9] [(_Bool)1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned char)18] [18U]))) : (arr_14 [i_9] [(short)4] [7ULL] [(signed char)7]))));
        var_41 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(signed char)2])))))))), ((((-(var_1))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (0U)))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        var_42 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (1871777215U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10] [i_10])))));
        /* LoopSeq 3 */
        for (signed char i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (2423190063U)));
            /* LoopNest 3 */
            for (unsigned int i_12 = 1; i_12 < 10; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_47 [i_11] [i_11] [9U] [9U] = ((/* implicit */unsigned short) ((arr_37 [i_11] [i_11 + 1] [i_12 + 2]) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_2))));
                            var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
                            var_45 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) 1823619209U)));
                            var_46 += ((/* implicit */unsigned long long int) ((unsigned char) var_18));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_15 = 3; i_15 < 12; i_15 += 2) 
        {
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (arr_33 [i_15 - 1] [i_15 + 1])));
            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 1871777232U))))))));
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    arr_57 [(unsigned short)10] [i_17] [i_16] = ((/* implicit */long long int) (-((-(var_14)))));
                    var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) > (((((/* implicit */_Bool) 2423190085U)) ? (var_0) : (1000844706U))))))));
                    var_50 = ((/* implicit */_Bool) (-(arr_39 [i_15 - 3] [i_15 + 1] [i_15 + 1])));
                    var_51 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_15 + 1] [i_16] [i_17] [i_17]))));
                    var_52 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_15 - 3])) & ((~(((/* implicit */int) arr_23 [i_17] [i_17]))))));
                }
                for (unsigned int i_18 = 2; i_18 < 12; i_18 += 2) /* same iter space */
                {
                    var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_31 [i_18])) : (((/* implicit */int) var_17))));
                    var_54 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_42 [i_18] [i_16] [i_15] [i_18])) * (((/* implicit */int) var_17))))));
                    var_55 = ((/* implicit */unsigned short) arr_35 [i_18 + 1]);
                }
                for (unsigned int i_19 = 2; i_19 < 12; i_19 += 2) /* same iter space */
                {
                    var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_19 - 2] [i_15 + 1] [i_15 - 2])) / (((/* implicit */int) (unsigned short)49226)))))));
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        var_57 -= ((/* implicit */short) (+(arr_62 [i_10] [i_10] [i_16] [i_19] [i_15 - 1])));
                        var_58 = ((/* implicit */unsigned char) var_14);
                        var_59 = ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 1871777232U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (arr_24 [i_10] [i_10]))));
                    }
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        var_60 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1000844696U))));
                        arr_67 [i_21] [i_19] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65533))));
                        arr_68 [(unsigned char)6] [i_15] [i_16] [i_10] [i_21] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_15 - 3] [i_15 - 3])) ? (((/* implicit */int) arr_3 [i_15 - 3] [i_15 + 1])) : (((/* implicit */int) arr_3 [i_15 + 1] [i_15 - 2]))));
                        var_61 = ((/* implicit */short) ((unsigned short) var_12));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 2) 
                    {
                        var_62 ^= ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)184))))));
                        var_63 = ((/* implicit */unsigned int) var_12);
                        var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1871777222U)) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_8))));
                        arr_72 [i_10] [10U] [i_16] [(unsigned short)6] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_10] [i_10] [i_15 - 1] [i_16] [i_19] [(unsigned short)8] [17LL]))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
                    {
                        var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_15 - 1] [i_15 - 3] [i_15 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_66 = ((/* implicit */_Bool) (-(arr_70 [i_15 - 3] [i_15] [i_15 + 1] [i_15] [i_15 - 3])));
                        var_67 = ((/* implicit */_Bool) min((var_67), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [9LL]))) : ((~(2423190063U))))))));
                    }
                    for (unsigned int i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        var_68 = ((/* implicit */short) (-(arr_15 [i_15 - 3] [i_19 - 1] [i_19])));
                        var_69 = (+(var_1));
                    }
                }
                arr_79 [(unsigned short)2] [(unsigned short)2] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1324513290U)));
                var_70 |= ((/* implicit */_Bool) (~(((var_15) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_16] [i_16] [i_16]))) : (arr_56 [i_10] [i_10] [(unsigned char)11] [(unsigned char)11])))));
                var_71 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_6)) ? (var_1) : (1963110504U)))));
            }
            for (unsigned int i_25 = 1; i_25 < 12; i_25 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_26 = 0; i_26 < 13; i_26 += 3) /* same iter space */
                {
                    var_72 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65533)) : ((+(((/* implicit */int) arr_42 [6U] [6U] [6U] [i_26]))))));
                    var_73 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_69 [i_15 - 2] [i_15 + 1] [(signed char)12] [i_26] [(signed char)12]))));
                }
                for (unsigned short i_27 = 0; i_27 < 13; i_27 += 3) /* same iter space */
                {
                    var_74 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)183)) ? (arr_82 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_27] [i_25] [(unsigned char)1])))))));
                    var_75 = 5614567491150565271ULL;
                    var_76 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned short i_28 = 0; i_28 < 13; i_28 += 3) /* same iter space */
                {
                    arr_92 [i_28] [i_25] [i_15] [i_10] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_90 [i_10] [i_10] [i_10] [i_10] [i_10])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((1963110504U) > (var_1)))))));
                    var_77 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (1823619209U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (arr_8 [i_15 - 2]))))) : (16904138851397669816ULL)));
                }
                /* LoopSeq 1 */
                for (unsigned int i_29 = 3; i_29 < 11; i_29 += 3) 
                {
                    var_78 ^= ((/* implicit */unsigned short) arr_42 [0U] [i_25] [i_25] [i_25]);
                    var_79 = ((/* implicit */short) var_18);
                }
                arr_95 [i_10] [i_10] = ((/* implicit */unsigned int) arr_59 [i_15 - 1] [i_15 - 3] [i_25 + 1] [i_25 + 1] [i_25 + 1]);
                /* LoopNest 2 */
                for (unsigned int i_30 = 2; i_30 < 10; i_30 += 3) 
                {
                    for (short i_31 = 1; i_31 < 10; i_31 += 4) 
                    {
                        {
                            var_80 = var_1;
                            var_81 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_15 - 1] [i_30 - 1]))) - (var_16)));
                        }
                    } 
                } 
            }
            var_82 = ((/* implicit */unsigned short) -4391270516020344833LL);
        }
        for (long long int i_32 = 0; i_32 < 13; i_32 += 4) 
        {
            var_83 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_32] [i_10]))));
            /* LoopSeq 3 */
            for (unsigned short i_33 = 0; i_33 < 13; i_33 += 4) 
            {
                var_84 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_10] [i_32])) & (((/* implicit */int) arr_7 [i_10] [i_10]))));
                /* LoopSeq 1 */
                for (unsigned short i_34 = 0; i_34 < 13; i_34 += 1) 
                {
                    arr_110 [i_34] [i_33] [i_32] [i_10] [i_34] = ((/* implicit */unsigned int) ((signed char) var_11));
                    var_85 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_10] [i_32] [(unsigned short)1] [i_34]))) ^ (((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                    var_86 -= ((((/* implicit */_Bool) 201729185615791745LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (2331856791U));
                }
                /* LoopNest 2 */
                for (unsigned short i_35 = 0; i_35 < 13; i_35 += 2) 
                {
                    for (unsigned short i_36 = 2; i_36 < 11; i_36 += 4) 
                    {
                        {
                            var_87 = ((((0U) << (((((/* implicit */int) var_2)) - (49343))))) << ((((-(((/* implicit */int) var_2)))) + (49377))));
                            var_88 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_86 [i_35] [i_35] [(unsigned char)10] [(_Bool)1] [1LL] [1LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_35] [(unsigned short)1] [i_35] [i_35] [(unsigned short)1] [i_35] [i_35]))) : (17ULL)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_37 = 0; i_37 < 13; i_37 += 4) 
            {
                var_89 = ((/* implicit */signed char) max((var_89), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_86 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-18))))) ? (((/* implicit */int) arr_34 [i_32])) : (((/* implicit */int) (_Bool)1)))))));
                var_90 ^= ((/* implicit */unsigned long long int) ((var_0) < (4294967284U)));
            }
            for (unsigned char i_38 = 1; i_38 < 11; i_38 += 4) 
            {
                arr_122 [i_10] [i_10] [i_38] [i_38] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_114 [i_38] [i_32] [i_32] [(signed char)3] [i_32] [(signed char)3]))));
                var_91 -= ((/* implicit */signed char) (+(var_14)));
                var_92 = ((/* implicit */long long int) max((var_92), (((/* implicit */long long int) (_Bool)0))));
                var_93 = ((/* implicit */_Bool) var_18);
            }
        }
        var_94 = 4294967288U;
        arr_123 [i_10] = ((/* implicit */unsigned int) var_12);
        var_95 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_99 [i_10] [i_10] [10U] [i_10] [i_10]))));
    }
}
