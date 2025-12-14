/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28889
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) ((long long int) arr_3 [i_0 - 3]));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_11 &= ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((625948971689395410LL), (arr_1 [i_0 - 1])))), (max((arr_3 [i_3]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))));
                        arr_13 [i_3] [i_1] [i_2 + 1] [i_3] [i_0 + 2] [i_2 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_10 [(_Bool)1] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2 - 1]))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_6 = 1; i_6 < 14; i_6 += 2) 
            {
                arr_22 [i_5] [i_5] [i_5] [6LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_6 + 3])) && (((/* implicit */_Bool) arr_12 [i_6 + 3]))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))) != (var_5)))))));
                var_14 ^= ((/* implicit */unsigned long long int) (+(arr_1 [i_4])));
                arr_23 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */long long int) (~(arr_7 [i_6 + 1] [i_4] [i_6 + 2])));
                arr_24 [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (1111135018335712872LL) : (((/* implicit */long long int) arr_7 [i_6 + 2] [i_5] [i_4])))))));
            }
            for (signed char i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                arr_29 [i_7 - 1] [i_4] [i_4] [i_4] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_27 [i_4] [i_5] [i_5] [i_4])) ? (arr_3 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4])))))));
                var_15 += ((/* implicit */short) (-(((/* implicit */int) (signed char)-107))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_16 = ((/* implicit */unsigned char) (signed char)-124);
                var_17 &= ((/* implicit */short) arr_30 [i_4] [i_8] [i_8] [i_4]);
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned int i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_18 = (!(((/* implicit */_Bool) arr_28 [i_10 - 2] [i_9 - 1] [i_8])));
                            var_19 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_34 [i_4] [i_8]))));
            }
            for (unsigned char i_11 = 1; i_11 < 15; i_11 += 2) 
            {
                arr_39 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned int) arr_37 [i_11 - 1] [(signed char)0] [i_11] [i_11 + 2]));
                arr_40 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */long long int) arr_4 [i_5]);
                /* LoopNest 2 */
                for (short i_12 = 3; i_12 < 16; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned char) ((unsigned long long int) (+(2611510462U))));
                            arr_45 [i_11 + 1] [i_5] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2434323684U)) ? (1111135018335712867LL) : (1111135018335712872LL)));
                            arr_46 [i_5] [i_5] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-116)) ? (3448637265529186542LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4]))))) | (((/* implicit */long long int) arr_21 [i_12 + 1] [i_11 - 1] [i_11]))));
                        }
                    } 
                } 
                arr_47 [i_11 + 1] [i_5] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1111135018335712844LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4])))))) || (((/* implicit */_Bool) arr_11 [i_11 + 1] [i_11 - 1] [i_11 + 2] [i_11 + 1]))));
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_11 - 1] [i_14])) && (((/* implicit */_Bool) arr_20 [i_11 - 1] [i_4]))));
                    arr_50 [i_4] &= ((/* implicit */unsigned int) (-(-1111135018335712870LL)));
                    var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_14] [i_11 - 1] [i_5]))) < ((~(arr_10 [i_14] [i_11 + 1] [i_5] [i_4] [i_4] [i_4])))));
                }
                for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    var_24 = arr_16 [(short)14] [i_5] [i_15];
                    arr_53 [8U] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5104493001934927603LL)));
                }
            }
            var_25 *= ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (arr_2 [i_4]));
            /* LoopSeq 3 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                var_26 = ((/* implicit */long long int) (short)-26423);
                arr_56 [i_5] [i_5] [i_16 - 1] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)214))));
                var_27 += ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) ((arr_4 [i_16]) <= (((/* implicit */int) (signed char)-53))))) : (((/* implicit */int) var_1)))))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_29 += ((/* implicit */long long int) arr_9 [i_4] [i_5] [i_4]);
                arr_60 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_4] [i_5] [i_5]))))) ? (((long long int) 0U)) : (((/* implicit */long long int) arr_7 [i_5] [i_4] [i_5]))));
                arr_61 [i_4] [i_5] = ((/* implicit */signed char) ((arr_30 [i_4] [i_5] [i_17] [i_17]) ? (((/* implicit */int) arr_30 [i_4] [i_5] [i_17] [i_17])) : (((/* implicit */int) arr_30 [i_4] [i_5] [i_4] [i_4]))));
                /* LoopNest 2 */
                for (signed char i_18 = 4; i_18 < 16; i_18 += 1) 
                {
                    for (unsigned int i_19 = 1; i_19 < 15; i_19 += 4) 
                    {
                        {
                            var_30 += ((/* implicit */long long int) ((261325853U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_18 + 1] [i_19 + 1] [i_19 - 1] [i_4])))));
                            var_31 = ((/* implicit */signed char) (((!(arr_25 [i_4] [i_4] [i_5]))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_55 [i_4] [i_4] [i_4]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_20 = 3; i_20 < 14; i_20 += 2) 
                {
                    arr_69 [i_4] [i_5] [i_17] [i_5] [i_4] [i_20] = ((/* implicit */long long int) (short)22226);
                    var_32 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 3821530013037985568LL)) || (((/* implicit */_Bool) arr_49 [i_20 - 2] [i_20 + 1]))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_21])) ? (((/* implicit */long long int) 632367151U)) : (arr_1 [i_4]))))));
                        var_34 = ((/* implicit */unsigned char) 927806342U);
                    }
                    var_35 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_5] [i_20 - 1]))) / (arr_49 [i_20] [i_20 + 2]));
                }
                for (short i_22 = 4; i_22 < 13; i_22 += 3) 
                {
                    arr_74 [6U] [i_5] [i_5] [6U] [i_22] [i_4] = ((/* implicit */unsigned int) var_4);
                    var_36 = ((/* implicit */long long int) ((unsigned int) arr_44 [(signed char)16] [i_22 - 1] [i_22] [i_22]));
                    arr_75 [i_22] [i_5] [i_5] [i_5] [(short)3] = ((short) arr_73 [i_17] [i_5] [i_22 - 1] [i_22 + 1] [i_22]);
                    var_37 = ((/* implicit */unsigned int) arr_15 [i_5]);
                    arr_76 [i_5] = ((/* implicit */unsigned long long int) var_1);
                }
                for (unsigned char i_23 = 2; i_23 < 15; i_23 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_24 = 0; i_24 < 17; i_24 += 3) 
                    {
                        arr_82 [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-107))) ? (((/* implicit */long long int) 1104929481U)) : (((((/* implicit */_Bool) (short)26427)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-30842)))))));
                        arr_83 [i_4] [16U] [i_5] [3LL] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [(_Bool)1] [i_5] [i_17]))))) > (((((/* implicit */_Bool) 5764183213963897956LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)32765)))))));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        arr_88 [i_5] = ((/* implicit */short) arr_12 [i_23 + 1]);
                        var_38 = ((/* implicit */unsigned long long int) ((arr_1 [i_25]) & (arr_1 [i_23 + 2])));
                        var_39 = ((/* implicit */long long int) ((short) (+(((/* implicit */int) (unsigned char)51)))));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 3) 
                    {
                        arr_93 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_32 [i_5] [i_17] [i_23] [i_5]);
                        arr_94 [i_4] [i_5] [i_17] [i_23] [i_5] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) 1723142055U)) && (((/* implicit */_Bool) arr_34 [i_5] [i_5]))));
                        arr_95 [i_5] [i_5] [(short)4] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_73 [i_4] [i_5] [i_23] [i_23 + 1] [i_23 + 1]))));
                    }
                    var_40 = ((/* implicit */long long int) (short)-15235);
                    arr_96 [(signed char)1] [i_5] [i_5] [i_17] [i_17] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_23] [5] [i_17] [i_5] [9LL])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_5] [i_17] [i_23 - 1])))));
                }
            }
            for (long long int i_27 = 0; i_27 < 17; i_27 += 3) 
            {
                var_41 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)17271))))) | (arr_43 [i_27] [i_4] [i_4] [i_4] [i_5])));
                /* LoopNest 2 */
                for (signed char i_28 = 1; i_28 < 16; i_28 += 3) 
                {
                    for (signed char i_29 = 2; i_29 < 14; i_29 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */short) arr_105 [i_5]);
                            arr_106 [(short)13] [13] [i_27] [i_27] [i_5] = ((/* implicit */short) (-(arr_28 [i_28 - 1] [i_29 - 1] [i_27])));
                            arr_107 [i_29] [i_29] &= ((-5339105093352389560LL) / (((/* implicit */long long int) 296448671U)));
                            arr_108 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */short) ((signed char) (short)-26423));
                        }
                    } 
                } 
                var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)19811))));
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_66 [i_4] [i_5] [i_5] [i_4]) : (arr_66 [i_4] [i_5] [i_5] [i_27])));
                /* LoopSeq 2 */
                for (int i_30 = 0; i_30 < 17; i_30 += 1) 
                {
                    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_97 [i_4] [i_5] [i_4] [i_27])) ? (((/* implicit */int) (short)-30817)) : (((/* implicit */int) var_6)))))));
                    /* LoopSeq 3 */
                    for (signed char i_31 = 0; i_31 < 17; i_31 += 3) 
                    {
                        var_46 = var_5;
                        var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_4] [i_5] [i_27] [i_4] [i_31])) ? (arr_81 [i_5] [i_5] [i_30] [i_31]) : (arr_43 [i_4] [i_5] [i_27] [i_4] [i_31])));
                        arr_113 [i_31] [i_4] [i_27] [10ULL] [i_4] [i_4] |= ((/* implicit */unsigned int) arr_112 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                        var_48 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_5] [i_27] [i_31]))));
                        var_49 ^= ((/* implicit */unsigned long long int) arr_11 [i_4] [i_5] [i_4] [i_30]);
                    }
                    for (unsigned int i_32 = 1; i_32 < 15; i_32 += 3) 
                    {
                        var_50 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_104 [i_30] [i_30] [i_30] [i_30] [i_30]))))));
                        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) 2991869643U))));
                        arr_116 [i_5] [i_30] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (2056243029946616373LL)));
                        arr_117 [i_4] [11LL] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)103)) * (((((/* implicit */int) (unsigned char)183)) >> (((arr_49 [i_4] [i_27]) - (5119712556643270570ULL)))))));
                    }
                    for (unsigned int i_33 = 0; i_33 < 17; i_33 += 4) 
                    {
                        arr_121 [i_4] [i_5] [i_27] [i_30] [i_33] = ((/* implicit */short) (~((~(((/* implicit */int) arr_38 [i_4]))))));
                        var_52 = ((/* implicit */signed char) (unsigned char)229);
                        var_53 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_5] [i_33])) && (((/* implicit */_Bool) 2820259478U))));
                        arr_122 [i_33] [i_5] [i_27] [i_5] [i_4] = arr_7 [i_4] [i_27] [i_33];
                    }
                }
                for (short i_34 = 0; i_34 < 17; i_34 += 1) 
                {
                    var_54 = ((/* implicit */long long int) arr_59 [i_4] [i_5] [(short)5] [i_34]);
                    var_55 += ((/* implicit */unsigned char) (~(arr_118 [i_4] [i_5] [i_5] [i_34] [i_5])));
                    arr_125 [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (short)-26423))));
                    var_56 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_111 [i_4] [i_4] [i_5] [i_5] [i_27] [i_27] [i_34]))));
                    var_57 = ((/* implicit */signed char) ((unsigned char) arr_62 [i_4] [i_5] [i_27] [i_34]));
                }
            }
        }
        var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) max(((-(arr_102 [i_4]))), (((arr_102 [i_4]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
        var_59 = (-(((((/* implicit */_Bool) arr_80 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_62 [i_4] [i_4] [i_4] [i_4]) : (arr_62 [i_4] [i_4] [i_4] [i_4]))));
        var_60 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */long long int) arr_71 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) / (4769489229237898930LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_80 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_33 [i_4] [i_4] [(unsigned char)8])) : (((/* implicit */int) arr_111 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))))), ((+(((/* implicit */int) arr_72 [i_4] [i_4] [i_4] [i_4]))))));
    }
    for (signed char i_35 = 0; i_35 < 17; i_35 += 2) /* same iter space */
    {
        var_61 = ((/* implicit */unsigned char) max((var_61), (((/* implicit */unsigned char) arr_49 [i_35] [i_35]))));
        var_62 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_35])) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_35])) + (42)))))) / (((((/* implicit */_Bool) arr_15 [i_35])) ? (1061700456812994353ULL) : (((/* implicit */unsigned long long int) 543187911U))))));
    }
    var_63 ^= ((/* implicit */long long int) (short)30842);
    var_64 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) | (8057622431182457100LL))), (((/* implicit */long long int) var_7))))) ? ((-(((((/* implicit */_Bool) (short)28862)) ? (((/* implicit */unsigned long long int) 2LL)) : (13332212559080231718ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 18446744073709551610ULL))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-63))))))))));
    var_65 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (((unsigned long long int) ((((/* implicit */long long int) 3279757862U)) != (9223372036854775807LL)))));
}
