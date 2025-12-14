/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202972
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
    var_18 ^= ((/* implicit */unsigned char) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_8);
        var_19 = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]));
        arr_4 [(_Bool)1] = ((/* implicit */short) ((arr_1 [i_0]) / (arr_1 [i_0])));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_15 [i_1] [(_Bool)1] [i_1] [(unsigned char)15] [i_1] = ((/* implicit */_Bool) (unsigned short)35217);
                        var_20 *= ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) (~(var_0))));
        arr_21 [i_4] [i_4] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_18 [i_4])));
        var_21 ^= ((/* implicit */signed char) ((2487250060492194464LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21857)))));
        var_22 = ((/* implicit */unsigned char) arr_16 [i_4]);
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned int) arr_16 [i_4])) : (var_15)));
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 17)) ? (((/* implicit */long long int) -18)) : (-5395752113401983866LL))))));
        arr_24 [i_5] [24LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5 + 2])) ? ((-(((/* implicit */int) (unsigned short)35217)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(_Bool)1])))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_25 ^= ((/* implicit */int) max((2678892599U), (((/* implicit */unsigned int) (unsigned short)32760))));
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            arr_30 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_25 [i_6])) > (((/* implicit */int) var_6))))), ((+(((/* implicit */int) arr_0 [i_7]))))))) / (var_11)));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9063796960482457155LL)) ? (((/* implicit */int) (unsigned short)14875)) : (((/* implicit */int) (unsigned short)50660))));
                arr_33 [i_8] [i_6] = ((/* implicit */unsigned int) var_5);
                var_27 = ((/* implicit */unsigned short) var_2);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) (((~(((int) arr_34 [i_6] [i_6])))) / (((/* implicit */int) arr_7 [i_7] [i_6]))));
                            arr_41 [i_11] [12U] [12U] [i_6] &= ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                arr_42 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_9])) < (((/* implicit */int) (short)22874))));
                var_29 ^= ((/* implicit */int) arr_10 [i_6] [i_7] [i_9] [i_9]);
                arr_43 [5] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((_Bool) ((long long int) ((((/* implicit */_Bool) -3586103276169849932LL)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (_Bool)1))))));
            }
        }
        for (signed char i_12 = 2; i_12 < 14; i_12 += 2) 
        {
            var_30 -= ((/* implicit */unsigned int) ((signed char) ((arr_38 [i_12 - 2] [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12] [i_12]) + (arr_38 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12 + 2]))));
            var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_47 [i_12] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3U))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_52 [i_6] = ((/* implicit */long long int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
            arr_53 [i_6] [i_6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6])) ? (arr_38 [i_6] [i_6] [i_6] [i_6] [i_13] [i_13] [i_13]) : (((/* implicit */int) var_8))))));
        }
        for (short i_14 = 2; i_14 < 15; i_14 += 1) /* same iter space */
        {
            arr_56 [i_6] [i_14] [11U] = ((/* implicit */_Bool) ((unsigned char) var_3));
            arr_57 [i_6] = arr_45 [i_14 + 1] [i_14 + 1] [i_14 - 1];
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) ((((var_14) + (2147483647))) << (((1037187710) - (1037187710)))))));
                            var_33 = ((/* implicit */unsigned short) max((((unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_23 [i_16])))), (((/* implicit */unsigned long long int) min((((arr_59 [i_6] [i_6]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_15] [i_15] [i_15] [i_6] [i_6] [i_15]))))), (((/* implicit */unsigned int) var_9)))))));
                        }
                    } 
                } 
            } 
            var_34 ^= ((/* implicit */unsigned short) ((var_2) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_40 [i_14 - 1])))))));
            var_35 = ((/* implicit */unsigned int) ((_Bool) min((var_16), (((/* implicit */long long int) arr_31 [i_6] [i_14 - 1] [i_6] [1ULL])))));
        }
        for (short i_18 = 2; i_18 < 15; i_18 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(-3586103276169849938LL)))) & (((unsigned long long int) ((unsigned char) -3586103276169849916LL))))))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */long long int) 2678892599U)) / (3586103276169849931LL))) <= (((/* implicit */long long int) arr_14 [i_6] [i_6] [i_6]))))) << ((((((_Bool)1) ? (max((var_1), (((/* implicit */unsigned long long int) -3586103276169849932LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -3586103276169849932LL)))))) - (14860640797539701684ULL))))))));
                        var_38 = ((/* implicit */unsigned long long int) ((arr_66 [i_18] [i_18]) ? (max((((/* implicit */long long int) (unsigned char)119)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_6] [i_6] [i_6] [i_6]))) : (arr_50 [i_6]))))) : (((/* implicit */long long int) (+(((int) var_7)))))));
                        arr_74 [i_6] [i_18 - 2] = ((/* implicit */long long int) (~(((/* implicit */int) min((((_Bool) (_Bool)0)), ((!(((/* implicit */_Bool) var_4)))))))));
                        arr_75 [i_6] [i_6] [i_19] [i_20] = ((/* implicit */unsigned int) arr_17 [i_18]);
                        var_39 ^= ((/* implicit */unsigned char) (-((~(((3586103276169849931LL) / (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_18] [(_Bool)1])))))))));
                    }
                } 
            } 
        }
        for (short i_21 = 2; i_21 < 15; i_21 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)254))));
            arr_79 [(signed char)4] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned long long int) 252201579132747776LL))))) ? (((/* implicit */unsigned int) arr_34 [i_21] [i_21 - 2])) : (((unsigned int) arr_65 [i_6] [i_6])))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), ((~(arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_21] [(_Bool)1]))))))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_22 = 0; i_22 < 19; i_22 += 3) 
    {
        for (int i_23 = 0; i_23 < 19; i_23 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (signed char i_25 = 3; i_25 < 17; i_25 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_26 = 0; i_26 < 19; i_26 += 2) 
                            {
                                var_41 = ((/* implicit */unsigned short) (-((~(14153882375323941067ULL)))));
                                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && ((!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) arr_89 [2] [i_23] [i_24] [i_25] [i_26]))));
                            }
                            arr_91 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) arr_11 [i_25 + 1] [16] [i_23] [i_22])));
                            arr_92 [i_22] [i_23] [i_22] [i_25] = (+(((/* implicit */int) var_12)));
                            var_43 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)23));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_96 [i_22] [i_22] [i_23] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? ((-(14107647369118140324ULL))) : (((/* implicit */unsigned long long int) arr_22 [i_27]))));
                    var_44 = arr_9 [i_22] [i_22] [i_27];
                    var_45 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_81 [18LL] [i_23])) >= (((/* implicit */int) arr_89 [i_22] [i_22] [i_22] [i_22] [i_27])))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))) == (var_4)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 19; i_28 += 1) 
                    {
                        for (int i_29 = 2; i_29 < 17; i_29 += 4) 
                        {
                            {
                                arr_105 [16] [i_22] [16] [i_29] [i_27] [i_28] [i_29 - 2] &= ((/* implicit */_Bool) ((unsigned long long int) 12629488620065560388ULL));
                                var_46 = ((/* implicit */_Bool) arr_90 [i_22] [i_22] [i_22] [i_23] [i_22]);
                            }
                        } 
                    } 
                }
                for (signed char i_30 = 2; i_30 < 17; i_30 += 4) 
                {
                    var_47 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_2 [i_22] [i_22]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_97 [i_22] [i_22] [i_23] [i_30 + 1]))))))));
                    var_48 = ((/* implicit */unsigned int) ((((int) max((arr_19 [i_22]), (((/* implicit */long long int) var_14))))) & (((/* implicit */int) var_12))));
                    var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) arr_7 [i_30] [i_23]))));
                    /* LoopSeq 2 */
                    for (long long int i_31 = 1; i_31 < 18; i_31 += 1) 
                    {
                        var_50 = ((((/* implicit */_Bool) ((unsigned short) min((var_16), (((/* implicit */long long int) (signed char)115)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -3016339577407146722LL)) >= (min((((/* implicit */unsigned long long int) var_0)), (var_1)))))));
                        var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_108 [14] [i_23] [14U] [i_31] [i_31] [i_22]))))), ((((_Bool)1) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50660)))))))) ? (((/* implicit */int) max((max((arr_89 [i_22] [i_22] [(_Bool)1] [(_Bool)1] [i_31]), (arr_9 [i_30] [i_23] [i_30]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))))) : (((((/* implicit */int) min((arr_84 [i_22] [(_Bool)1] [i_22] [(unsigned short)3]), ((_Bool)1)))) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (0LL)))))))))));
                        arr_111 [i_22] [i_30] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_103 [i_22] [i_22] [i_30] [13LL] [i_22] [i_31 + 1]))) | (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_103 [i_22] [i_23] [i_30 - 1] [8U] [i_22] [i_31 + 1])) ? (9) : (((/* implicit */int) arr_103 [i_22] [i_23] [i_23] [i_23] [i_30 + 1] [i_31 - 1]))))) : (((14040942923872528256ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_103 [i_22] [i_22] [i_30] [i_31 - 1] [i_22] [i_31 - 1])))))));
                        var_52 = ((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((((/* implicit */int) arr_81 [i_23] [i_30 + 2])) >> (((/* implicit */int) arr_81 [i_22] [i_22]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_32 = 2; i_32 < 18; i_32 += 1) /* same iter space */
                        {
                            var_53 ^= ((/* implicit */_Bool) max((min((((/* implicit */long long int) (signed char)24)), (4645146103288171941LL))), (min((arr_109 [i_30 + 2] [i_31 + 1] [i_32] [i_32 + 1]), (arr_107 [i_30 - 1] [i_31 - 1] [i_30] [i_32 + 1])))));
                            arr_115 [i_22] [i_30 + 2] [i_30 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_107 [i_22] [i_31] [i_22] [i_22]) / (((/* implicit */long long int) ((/* implicit */int) var_12))))) & (min((12582912LL), (((/* implicit */long long int) var_8))))))) ? (((((/* implicit */_Bool) (-(arr_22 [i_22])))) ? (((((/* implicit */_Bool) var_16)) ? (arr_6 [13ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_99 [i_22] [i_22] [i_22] [i_30 + 2] [i_31 - 1] [i_32]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_112 [i_22] [i_22] [i_23] [i_30] [i_22] [i_22])))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -3586103276169849916LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-91)))))));
                            arr_116 [i_22] [i_23] [i_31] [i_32] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_104 [i_22] [i_22] [i_22] [i_22] [i_22]))) && (((((/* implicit */int) arr_104 [i_22] [i_22] [i_30] [i_22] [i_32 - 2])) <= (((/* implicit */int) arr_112 [16] [16] [16] [i_31] [i_23] [i_30 + 2]))))));
                            var_54 = ((/* implicit */unsigned int) ((((long long int) arr_12 [i_31] [i_31 - 1] [i_31] [i_31])) >= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)34501)))))));
                        }
                        for (unsigned char i_33 = 2; i_33 < 18; i_33 += 1) /* same iter space */
                        {
                            arr_120 [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((unsigned int) min((var_9), (arr_94 [i_31 - 1] [i_22] [i_31 - 1] [i_31 - 1]))));
                            var_55 = var_1;
                            var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_101 [i_22] [i_23]))))), (((unsigned int) var_4))))) ? (12582912LL) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_82 [i_22])) && (((/* implicit */_Bool) var_6))))))));
                            var_57 -= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((arr_83 [i_22] [i_31 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (-4645146103288171940LL))) - (max((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (17LL)))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_34 = 0; i_34 < 19; i_34 += 2) 
                    {
                        var_58 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_6)))) && (((/* implicit */_Bool) (unsigned char)47))));
                        arr_123 [i_22] [i_22] [i_34] = ((((/* implicit */_Bool) arr_95 [i_30 - 2])) ? (arr_95 [i_30 + 2]) : (arr_95 [i_30 - 2]));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_35 = 0; i_35 < 19; i_35 += 3) 
                        {
                            var_59 = ((/* implicit */unsigned int) ((_Bool) var_0));
                            arr_126 [i_22] [i_22] [i_22] [i_30] [i_35] = ((/* implicit */signed char) var_6);
                        }
                        for (long long int i_36 = 0; i_36 < 19; i_36 += 1) 
                        {
                            arr_129 [i_36] [i_22] [i_30] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_108 [i_22] [i_23] [i_23] [i_34] [i_36] [i_22]))))) ? (((/* implicit */int) arr_0 [i_30 + 2])) : (((/* implicit */int) (_Bool)1))));
                            arr_130 [i_22] [(unsigned short)2] [i_22] = ((/* implicit */unsigned short) (+((+(arr_82 [i_30 + 2])))));
                        }
                        var_60 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)59847))));
                        arr_131 [i_22] [i_22] [i_22] [i_22] [i_34] [i_22] = (i_22 % 2 == zero) ? (((/* implicit */unsigned int) ((var_2) << (((((/* implicit */int) arr_103 [i_22] [i_23] [(unsigned short)13] [i_23] [(unsigned char)9] [i_23])) - (56003)))))) : (((/* implicit */unsigned int) ((var_2) << (((((((/* implicit */int) arr_103 [i_22] [i_23] [(unsigned short)13] [i_23] [(unsigned char)9] [i_23])) - (56003))) + (3308))))));
                    }
                    var_61 = ((/* implicit */unsigned int) ((long long int) (-(arr_117 [i_22] [i_30] [i_22] [i_30 + 2]))));
                }
                arr_132 [i_22] = ((/* implicit */long long int) arr_98 [i_22] [(_Bool)1] [i_22]);
            }
        } 
    } 
    var_62 = ((/* implicit */int) var_2);
}
