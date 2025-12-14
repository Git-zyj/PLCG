/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238081
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
    var_13 = ((/* implicit */long long int) var_7);
    var_14 = ((/* implicit */_Bool) 8385630539555460943LL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)131)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25049))) & (((((/* implicit */_Bool) max((var_4), (arr_1 [i_0])))) ? (min((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_0] [(signed char)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) (unsigned short)3);
        var_17 = ((/* implicit */long long int) var_4);
        /* LoopSeq 4 */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25044)) * (((/* implicit */int) (unsigned char)14))));
            arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((min((((((/* implicit */int) (short)-25062)) * (((/* implicit */int) (unsigned char)25)))), (((/* implicit */int) (short)25056)))) + (2147483647))) >> (((/* implicit */int) ((((arr_5 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) (short)-25064))))) || (((/* implicit */_Bool) (short)-25068)))))));
            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61854)) ? (((/* implicit */int) (short)25052)) : (((/* implicit */int) (short)25068))));
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (1491073653) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_2])))) : (((/* implicit */int) (unsigned char)242)))) + (((/* implicit */int) ((unsigned char) (-(7074175219243907845ULL)))))));
            var_19 -= ((/* implicit */unsigned int) var_7);
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (signed char i_5 = 3; i_5 < 8; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 7; i_6 += 4) 
                    {
                        {
                            arr_23 [i_6] [i_6] [i_6] [(unsigned short)1] [i_6 + 2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(arr_22 [i_5 + 2] [i_5 - 2])))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)15675))))), (((((arr_17 [(unsigned char)1] [i_3] [i_4] [i_5]) + (9223372036854775807LL))) << (((((arr_13 [i_1] [2LL] [(unsigned short)8]) + (2183602951243641271LL))) - (59LL)))))))));
                            arr_24 [i_5] [i_4] [i_4] [i_4] [i_4] [i_1] [i_3] = ((/* implicit */short) ((arr_4 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51651)))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1] [(unsigned short)6]);
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)255)) & (((/* implicit */int) (short)25053))));
                            var_22 = ((/* implicit */unsigned short) ((max((arr_8 [i_7] [i_8 + 1] [i_8 - 1]), (((/* implicit */unsigned int) var_2)))) > (((((/* implicit */_Bool) arr_8 [(unsigned char)4] [i_8 + 1] [i_8 + 1])) ? (arr_8 [i_1] [i_8 - 1] [i_8 - 1]) : (arr_8 [i_7] [i_8 + 1] [i_8 - 1])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1])) ? (((0U) * (arr_22 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)51635)) & (((/* implicit */int) (unsigned short)61695)))))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    arr_33 [i_1] [(short)1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (short)-25062)) != (((/* implicit */int) (short)-25054))));
                    var_24 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_7] [0LL] [i_1] [i_1])) ? (((((/* implicit */_Bool) -95253263342858954LL)) ? (var_9) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2))))));
                }
            }
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
            {
                arr_37 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)51645))) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) max(((unsigned short)255), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [(unsigned short)7] [i_11])) || (((/* implicit */_Bool) (unsigned short)51629))))))))));
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 8; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((min((((/* implicit */int) ((unsigned short) (unsigned char)172))), (((((/* implicit */int) arr_35 [i_1] [i_1] [i_1])) * (((/* implicit */int) (unsigned char)174)))))) | ((-(((/* implicit */int) arr_32 [i_12 + 1] [i_12 - 1] [i_12] [i_12]))))));
                            arr_43 [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) arr_12 [i_11] [i_11] [i_11]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    var_27 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4045703507U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_3] [i_1] [i_1] [i_1]))))))) : (arr_16 [7LL] [7LL] [4U] [i_14]));
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-25052)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_14] [i_3] [i_1] [i_1] [i_3] [i_1]))) : (arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                }
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                {
                    arr_50 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) max((((arr_0 [i_1] [i_15]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51663))))), (((/* implicit */unsigned long long int) arr_45 [i_1]))));
                    var_29 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_46 [i_15] [i_1] [i_3] [i_1])), (arr_31 [(unsigned short)9] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25051))) : (((unsigned long long int) arr_5 [(signed char)0]))))));
                }
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
                {
                    var_30 |= ((/* implicit */unsigned short) arr_51 [i_16] [i_11] [i_11] [i_3] [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 1; i_17 < 9; i_17 += 4) /* same iter space */
                    {
                        arr_57 [7ULL] [i_16] [i_11] [i_16] [i_17] [i_17] [i_1] = ((/* implicit */unsigned int) (!(((arr_42 [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [6LL] [i_17 - 1]) != (arr_42 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 - 1])))));
                        var_31 ^= ((/* implicit */unsigned short) arr_47 [9ULL] [7] [i_11] [i_11]);
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-25053)) >= (((/* implicit */int) (unsigned short)13891)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26197))) : (arr_42 [i_1] [i_1] [i_1] [i_11] [i_16] [8ULL])))), (arr_3 [i_18 + 1]))))));
                        arr_61 [i_1] [i_3] [i_18 - 1] = ((/* implicit */unsigned short) arr_6 [i_11] [5] [i_11]);
                    }
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) min((arr_51 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((signed char) var_5))))))));
                        var_34 = ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9353))))));
                    }
                }
                arr_64 [i_1] [i_3] [i_1] [i_11] &= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_9)) ? (arr_40 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_48 [i_1] [i_3] [i_1] [i_3])))))))) ? (((-6061455687167242671LL) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_60 [i_1] [i_1] [i_11] [i_1] [i_1])))))) : ((-(((((/* implicit */_Bool) (unsigned short)13884)) ? (4926844083437159116LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215)))))))));
            }
        }
        for (signed char i_20 = 0; i_20 < 10; i_20 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_7)))) + (((/* implicit */int) ((unsigned short) arr_19 [i_1] [i_1] [i_1])))));
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    arr_71 [i_22] [i_22] [(unsigned char)8] [i_20] [2U] [i_1] = ((/* implicit */unsigned char) ((signed char) arr_66 [i_1] [i_22]));
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) arr_51 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    var_37 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_63 [i_1] [i_1] [i_1])) - (((((/* implicit */int) arr_52 [i_22] [i_21] [i_20] [i_1])) & (((/* implicit */int) (short)-25049))))));
                    var_38 |= ((/* implicit */unsigned long long int) (~((+(arr_44 [i_1] [i_1] [i_1] [i_1])))));
                }
                for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 1) 
                {
                    var_39 = (unsigned short)51667;
                    arr_74 [(short)8] [i_23] [(short)8] [i_23] [i_1] [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_21] [i_20] [i_21])) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_35 [8U] [i_20] [i_21]))))) : (((((((/* implicit */int) arr_69 [i_1])) + (2147483647))) << (((((/* implicit */int) arr_66 [i_1] [i_1])) / (((/* implicit */int) (unsigned short)37540))))))));
                }
                for (unsigned int i_24 = 0; i_24 < 10; i_24 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_40 [i_1] [6U] [i_1] [i_1]))), (((((((/* implicit */_Bool) (signed char)0)) ? (5250592605784341777LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8142))))) % (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))))))))));
                        var_41 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)61)) > (((/* implicit */int) (unsigned short)27803))))), (max((((long long int) 503203806U)), (var_3)))));
                    }
                    arr_79 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [1U])) ? (((int) arr_12 [4] [i_20] [i_21])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (arr_5 [(_Bool)0]) : (((/* implicit */long long int) arr_16 [i_1] [i_1] [(unsigned short)3] [i_1]))))) ? (((/* implicit */int) arr_27 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */int) (unsigned char)30))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_26 = 0; i_26 < 10; i_26 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_27 = 0; i_27 < 10; i_27 += 1) /* same iter space */
                    {
                        arr_84 [i_1] [i_1] [i_1] [i_21] [i_26] [i_27] = ((/* implicit */long long int) arr_0 [i_1] [i_20]);
                        arr_85 [i_1] [i_1] [i_1] [i_20] = ((unsigned long long int) (signed char)126);
                    }
                    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 1) /* same iter space */
                    {
                        arr_88 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_35 [i_20] [i_20] [i_20]);
                        arr_89 [i_26] [i_26] [i_21] [i_26] [(_Bool)1] [i_26] [i_1] = ((((/* implicit */_Bool) ((unsigned int) 3567025481U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_26]))) : (((((/* implicit */_Bool) arr_31 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])) ? (arr_8 [i_1] [i_20] [i_1]) : (15U))));
                    }
                    for (unsigned short i_29 = 0; i_29 < 10; i_29 += 1) /* same iter space */
                    {
                        arr_92 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) var_0))))) ? (arr_49 [i_29] [i_29] [i_29] [i_29]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1] [i_1] [8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(unsigned short)0] [(unsigned short)0] [i_21]))) : (var_9))))));
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (unsigned char)123))));
                        var_43 = ((/* implicit */short) arr_14 [i_1] [i_26]);
                    }
                    for (unsigned short i_30 = 0; i_30 < 10; i_30 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_22 [i_1] [i_20])));
                        arr_95 [i_26] [i_26] [i_26] [i_30] [i_26] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28575))) : (9792291726769403137ULL)))) && (((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_1] [i_1])));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_31 = 0; i_31 < 10; i_31 += 1) /* same iter space */
                    {
                        arr_98 [i_1] [i_20] [i_20] [i_1] [i_20] = (-(arr_8 [i_31] [i_31] [(signed char)1]));
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (unsigned short)13885)) : (((/* implicit */int) (unsigned char)57))))) == (arr_49 [i_1] [i_1] [i_1] [2LL]))))));
                        arr_99 [i_31] [(unsigned short)9] [i_31] [(unsigned short)9] [i_31] [(_Bool)0] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) : (arr_83 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (unsigned short)16877)) : (((/* implicit */int) arr_91 [i_1] [i_26] [i_21] [i_20] [i_1]))));
                        var_46 = ((/* implicit */signed char) (-(((/* implicit */int) arr_46 [i_1] [i_20] [i_21] [i_1]))));
                    }
                    for (signed char i_32 = 0; i_32 < 10; i_32 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned char) ((((unsigned int) -6061455687167242690LL)) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13873)))));
                        var_48 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((3319988176U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_20] [(_Bool)1] [i_20]))))) : (arr_40 [i_1] [i_1] [(unsigned short)6] [i_1]));
                    }
                    for (signed char i_33 = 0; i_33 < 10; i_33 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */int) (signed char)-83);
                        var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_1] [(unsigned char)7] [i_21])) ? (((/* implicit */int) arr_34 [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_34 [(_Bool)0] [(_Bool)0] [i_21]))));
                    }
                    arr_106 [i_1] [i_1] [i_1] [5ULL] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33736)) ? (((/* implicit */int) (unsigned short)47261)) : (((/* implicit */int) arr_60 [i_26] [i_20] [i_20] [9LL] [i_1]))))) * (arr_14 [i_26] [i_1])));
                }
                /* vectorizable */
                for (long long int i_34 = 0; i_34 < 10; i_34 += 4) /* same iter space */
                {
                    arr_111 [i_34] [i_20] [i_21] [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_20]))) & (var_9)));
                    var_51 = ((((/* implicit */_Bool) (unsigned char)93)) ? (arr_21 [i_1]) : (((/* implicit */long long int) var_10)));
                    var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) (~(6061455687167242681LL))))));
                }
                /* vectorizable */
                for (long long int i_35 = 0; i_35 < 10; i_35 += 4) /* same iter space */
                {
                    var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)15)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_1] [i_20] [i_21] [i_20] [i_1] [i_1] [8ULL]))))))));
                    var_54 = ((/* implicit */int) ((((/* implicit */_Bool) arr_94 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_94 [i_1] [i_1] [i_21] [i_21] [i_21])));
                }
            }
            for (signed char i_36 = 0; i_36 < 10; i_36 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_37 = 0; i_37 < 10; i_37 += 2) 
                {
                    for (unsigned int i_38 = 0; i_38 < 10; i_38 += 4) 
                    {
                        {
                            arr_121 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) 4054805502U);
                            arr_122 [i_37] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -8273047295154780507LL)) ? (-310019022) : (-452854526)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_47 [i_1] [i_20] [i_37] [i_38]))))) : (((/* implicit */int) arr_112 [i_1] [i_20] [i_37] [i_20] [i_38] [i_38]))))));
                        }
                    } 
                } 
                var_55 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)44)) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)24)) && (((/* implicit */_Bool) (unsigned short)51651)))))));
                var_56 = ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) arr_104 [i_1] [i_1] [i_20] [i_1] [i_36])), (arr_0 [i_1] [i_36]))), (arr_105 [8U] [i_1] [i_1] [8U] [i_20]))), (((((/* implicit */_Bool) ((long long int) var_11))) ? (arr_19 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 4239425841U))))));
            }
            arr_123 [i_20] [(_Bool)1] = ((/* implicit */unsigned long long int) var_8);
            /* LoopNest 3 */
            for (unsigned short i_39 = 1; i_39 < 7; i_39 += 2) 
            {
                for (unsigned char i_40 = 0; i_40 < 10; i_40 += 1) 
                {
                    for (int i_41 = 0; i_41 < 10; i_41 += 1) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) ((signed char) max(((-(55541451U))), (((/* implicit */unsigned int) min((((/* implicit */short) var_4)), ((short)16572))))))))));
                            arr_132 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-25052)), (11557491079811729897ULL)))) ? (((/* implicit */unsigned long long int) -6061455687167242679LL)) : (arr_3 [i_1])))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_42 = 0; i_42 < 10; i_42 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
            {
                for (unsigned int i_44 = 0; i_44 < 10; i_44 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_45 = 0; i_45 < 10; i_45 += 1) 
                        {
                            var_58 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)45262)) * (((/* implicit */int) (signed char)-11))))));
                            var_59 = ((/* implicit */unsigned short) var_10);
                        }
                        var_60 = ((/* implicit */unsigned short) (((-(arr_125 [i_1] [i_42] [i_1] [i_44]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_46 [7ULL] [i_44] [i_43] [(unsigned short)4]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_26 [i_44] [i_44] [i_44] [i_44]) : (((/* implicit */int) arr_139 [i_1] [i_1] [i_1] [(signed char)1] [i_44] [i_42])))))))))));
                        var_61 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 10750716705239291891ULL))));
                    }
                } 
            } 
            var_62 *= arr_0 [i_1] [i_1];
            var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)82)), ((unsigned char)220))))) : (1774028609U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25050))))))));
            var_64 += ((/* implicit */long long int) (-(((/* implicit */int) ((arr_21 [i_42]) < (arr_21 [i_1]))))));
            /* LoopNest 2 */
            for (unsigned char i_46 = 0; i_46 < 10; i_46 += 1) 
            {
                for (signed char i_47 = 0; i_47 < 10; i_47 += 1) 
                {
                    {
                        var_65 = ((((((((/* implicit */_Bool) (signed char)86)) ? (2721911178753387614ULL) : (((/* implicit */unsigned long long int) 55541455U)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_117 [4U] [(_Bool)1] [i_46])))))))) || ((!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)30110)), (3819596988176695496LL)))))));
                        arr_148 [i_47] [i_42] [i_42] [i_47] [i_47] [i_47] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((740747884U) * (max((arr_109 [(unsigned short)5] [(unsigned short)5] [i_46] [i_46]), (arr_40 [(unsigned short)8] [i_42] [i_42] [i_1])))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)53)) / (((/* implicit */int) (unsigned char)64))))) * (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_47] [i_47] [i_47] [i_47] [i_47] [i_47] [i_47])))));
                        var_66 = max((max((((/* implicit */unsigned long long int) (short)25058)), (22ULL))), (((/* implicit */unsigned long long int) arr_41 [(unsigned short)9] [(unsigned short)9] [i_42] [(unsigned short)9] [i_47])));
                    }
                } 
            } 
        }
    }
}
