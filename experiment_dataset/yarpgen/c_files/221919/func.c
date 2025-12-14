/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221919
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2536686148U)) ? (((/* implicit */int) (unsigned short)62897)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 36020000925941760ULL)) ? (2536686148U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) + (((((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)248))))) : (var_6)))));
    var_12 |= ((/* implicit */unsigned long long int) (unsigned short)65276);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_3 [(unsigned short)5] = arr_0 [i_0] [i_0];
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_13 ^= ((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_1] [i_4] [i_3] [6LL] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]) % (arr_11 [i_0] [i_0] [i_2] [i_3 + 1] [i_4])));
                            var_14 = ((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [(_Bool)1] [i_3] [i_4]));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                            var_16 *= ((/* implicit */long long int) ((_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]));
                            arr_19 [i_5] [i_1] [i_2] [9LL] [i_5] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                            arr_20 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_4 [i_0]);
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [(unsigned short)2] [i_1] [(_Bool)1] [(unsigned short)2]))))))));
                        }
                        var_18 = ((/* implicit */long long int) ((unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        arr_25 [i_0] [i_3 + 1] [10LL] [9U] [i_3] [i_0] = ((/* implicit */signed char) arr_12 [i_0]);
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1]))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    arr_33 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [7LL] [2ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))) : (arr_15 [i_8] [i_7] [i_1] [i_0] [i_0])))) + (((((/* implicit */_Bool) (signed char)0)) ? (-4178353140744617671LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15378)))))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(arr_14 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] [i_0]))))));
                    var_21 = ((/* implicit */_Bool) arr_0 [i_7] [i_0]);
                    arr_34 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned int) (((+(arr_27 [i_8] [i_7] [3U] [3U]))) >= (((/* implicit */long long int) ((1345914585U) << (((arr_1 [i_0]) + (5052602703967793634LL))))))));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    arr_37 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) (unsigned short)65258));
                    var_22 *= ((/* implicit */unsigned int) arr_26 [i_0]);
                    arr_38 [(unsigned short)3] [i_9] [10U] [i_1] [i_1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) : (4448738569533460276ULL)))) ? (((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) (unsigned short)65535))));
                }
                arr_39 [i_1] = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [(signed char)4] [i_7]);
                /* LoopSeq 3 */
                for (signed char i_10 = 2; i_10 < 8; i_10 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_0] [i_10 + 4] [i_7]));
                    arr_42 [i_0] [i_1] = arr_41 [2U] [i_1] [i_1];
                    arr_43 [i_0] [2U] [(signed char)2] [(signed char)2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1345914594U))))));
                }
                for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned short)11] [i_1] [i_7] [i_11])) || (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)11]))));
                    var_25 = ((/* implicit */unsigned long long int) ((signed char) arr_13 [i_0] [i_0] [i_0] [i_0] [0ULL] [i_0]));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (_Bool)1))));
                }
                for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 1; i_13 < 10; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) (+(arr_48 [i_0] [i_0] [(_Bool)1])));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3171))) - (9223372036854775807LL))))));
                        var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_5 [(signed char)7] [i_1]))) && ((!((_Bool)0)))));
                        var_30 |= ((/* implicit */unsigned int) ((_Bool) ((arr_48 [i_0] [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12288))))));
                        var_31 = ((/* implicit */_Bool) ((14123457341398440477ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) > (-9020661848974543679LL)))))));
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_12] [i_14] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (6736066519793217106ULL)));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (signed char)-24))));
                        arr_55 [i_0] [i_1] [i_7] &= ((/* implicit */_Bool) arr_17 [i_14] [i_12] [i_1] [i_12] [i_1] [(_Bool)1] [i_0]);
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_12])))))));
                    }
                    arr_56 [i_0] [i_1] [5LL] [i_12] [(unsigned short)2] [9U] = ((/* implicit */long long int) arr_17 [i_12] [i_12] [i_7] [i_1] [i_7] [i_0] [10LL]);
                    var_35 = ((/* implicit */long long int) (~(var_3)));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 1; i_15 < 10; i_15 += 4) 
                    {
                        arr_60 [i_0] [i_1] [i_7] [i_7] [i_15] [0U] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_0] [6LL] [i_0])) ? (9020661848974543679LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_61 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15378)))))));
                    }
                    for (long long int i_16 = 3; i_16 < 10; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (((_Bool)1) ? (-6848441990490676428LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50158))))))));
                        arr_64 [i_16] [i_1] [i_7] [i_12] = ((/* implicit */_Bool) arr_22 [i_16 - 3] [i_1]);
                    }
                }
                arr_65 [i_0] [i_1] [i_1] [(signed char)10] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((6848441990490676428LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
            }
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                arr_69 [i_0] &= ((/* implicit */unsigned short) (signed char)-98);
                arr_70 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [(unsigned short)1] [i_17] [i_0] [i_1] [i_17]))));
                arr_71 [(unsigned short)6] [9U] [i_1] [i_17] = (~(var_2));
            }
            arr_72 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? ((+(arr_32 [i_0] [3LL] [(unsigned short)5] [i_0] [i_0]))) : (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        for (unsigned int i_18 = 2; i_18 < 9; i_18 += 2) 
        {
            arr_76 [i_0] [(signed char)11] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) arr_40 [i_0] [i_18 - 2] [i_0] [i_0] [0U] [i_18])) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_5 [i_0] [6U])))))), (((/* implicit */int) ((_Bool) arr_58 [i_18 - 2] [i_18 - 1] [i_18] [5U] [i_18 - 1])))));
            arr_77 [i_18 + 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)62607), (((/* implicit */unsigned short) (_Bool)1)))))) != ((((_Bool)1) ? (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_18] [i_0] [i_0] [i_0] [i_0])) : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) > ((~(4485947321896679260ULL)))));
        }
        for (signed char i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_37 = max((((/* implicit */long long int) (unsigned short)16524)), (6635120030759899232LL));
                            var_38 = ((/* implicit */long long int) ((_Bool) 5072082154657777080LL));
                        }
                    } 
                } 
                arr_91 [i_19] [i_19] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_12 [i_20])) - (((/* implicit */int) arr_12 [i_0])))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_86 [i_0] [i_19] [7U] [i_20]))))) << (((/* implicit */int) (_Bool)1))))));
                arr_92 [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_81 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_41 [i_0] [i_19] [(unsigned short)7]) : (((/* implicit */unsigned long long int) 137436856320LL))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [(unsigned short)11] [(_Bool)1] [(_Bool)1] [i_20] [(_Bool)1])))))));
            }
            for (unsigned int i_23 = 2; i_23 < 11; i_23 += 2) 
            {
                var_39 = ((/* implicit */_Bool) min((arr_17 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_19] [(unsigned short)2] [i_0]), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_88 [i_0] [i_19] [i_23] [i_23 - 2])), (arr_51 [i_0] [i_19] [i_23]))))));
                var_40 = ((/* implicit */unsigned short) arr_51 [(_Bool)1] [i_19] [i_0]);
            }
            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) arr_29 [(signed char)9] [(signed char)9]))));
            var_42 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)44135)) ? (((/* implicit */int) (unsigned short)10380)) : (((/* implicit */int) ((arr_4 [i_0]) || (((/* implicit */_Bool) arr_66 [i_0] [0U] [i_19]))))))));
            var_43 |= ((/* implicit */signed char) arr_9 [i_0] [i_19] [i_19] [i_19]);
            var_44 *= ((/* implicit */unsigned int) ((unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) arr_67 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13718))))))));
        }
        for (long long int i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            arr_98 [(unsigned short)6] [i_24] = arr_58 [i_0] [i_24] [i_24] [i_0] [i_0];
            var_45 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_58 [i_0] [i_0] [(_Bool)1] [i_24] [i_0])) ? (((/* implicit */int) ((_Bool) arr_57 [i_0] [i_24]))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)62)) && (((/* implicit */_Bool) 4469159365366791075ULL))))))) + (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_24])) : (1546303565113040067ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_0] [i_24]))))))));
        }
        arr_99 [i_0] = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) arr_17 [6LL] [8U] [(_Bool)1] [i_0] [4U] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 3061799669U))))))));
        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_45 [i_0])) : ((-(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0])))) : (((/* implicit */int) ((((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) 1621930750U)))) && (((/* implicit */_Bool) 0U)))))));
    }
    /* vectorizable */
    for (signed char i_25 = 0; i_25 < 12; i_25 += 3) /* same iter space */
    {
        arr_102 [i_25] = ((/* implicit */unsigned long long int) 4294967295U);
        arr_103 [i_25] [11LL] = ((/* implicit */unsigned int) (signed char)77);
        /* LoopSeq 1 */
        for (unsigned short i_26 = 0; i_26 < 12; i_26 += 3) 
        {
            var_47 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((2673036545U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12288)))))) << ((-(((/* implicit */int) (_Bool)0))))));
            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_44 [7ULL] [i_25] [i_25] [i_25] [i_26])) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [(_Bool)1]))) : (arr_27 [i_25] [i_26] [(_Bool)1] [i_26])))))));
            arr_106 [i_26] [(_Bool)1] = ((((/* implicit */_Bool) (unsigned short)20665)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))));
            /* LoopNest 3 */
            for (long long int i_27 = 2; i_27 < 11; i_27 += 2) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (unsigned int i_29 = 3; i_29 < 11; i_29 += 3) 
                    {
                        {
                            var_49 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_25] [(unsigned short)6] [i_27 - 1] [(unsigned short)0] [i_27] [(_Bool)1] [(unsigned short)6]))));
                            arr_113 [i_27] [i_28] &= ((/* implicit */unsigned int) arr_97 [i_25]);
                        }
                    } 
                } 
            } 
        }
    }
    var_50 = ((/* implicit */unsigned short) (((((~(var_8))) + (9223372036854775807LL))) << ((((+(((unsigned int) var_7)))) - (2487789970U)))));
    /* LoopNest 3 */
    for (long long int i_30 = 0; i_30 < 24; i_30 += 2) 
    {
        for (long long int i_31 = 2; i_31 < 23; i_31 += 2) 
        {
            for (unsigned int i_32 = 0; i_32 < 24; i_32 += 2) 
            {
                {
                    arr_121 [i_30] [i_30] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)12288))))), (max((((/* implicit */unsigned int) arr_118 [i_30] [i_31 + 1])), (arr_120 [18LL] [(unsigned short)1] [18LL] [18LL])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62076)))))) : ((((+(1452957188U))) << (((((((/* implicit */_Bool) arr_116 [i_30] [(unsigned short)19] [i_32])) ? (arr_115 [i_30]) : (((/* implicit */unsigned long long int) arr_117 [i_30] [i_31] [i_32])))) - (11287694262807279741ULL)))))));
                    var_51 += ((((((/* implicit */_Bool) arr_117 [i_30] [i_30] [i_30])) ? (((((/* implicit */unsigned long long int) 1497066356U)) & (arr_115 [i_30]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 520192U)) ? (arr_116 [i_30] [i_31] [i_32]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) >= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_119 [i_30])) ? (-3951050667125170886LL) : (((/* implicit */long long int) ((/* implicit */int) arr_118 [i_30] [(unsigned short)9]))))), (((/* implicit */long long int) arr_117 [i_31 - 2] [i_31 - 1] [i_31]))))));
                }
            } 
        } 
    } 
}
