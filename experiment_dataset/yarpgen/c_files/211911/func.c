/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211911
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_14);
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [(short)14]))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        arr_13 [5U] [i_1 + 1] [i_2] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) var_15)), (((/* implicit */unsigned short) var_11)))))) + (min((((/* implicit */long long int) var_8)), (arr_2 [i_2] [4ULL])))));
                        var_18 = ((/* implicit */unsigned short) max((arr_1 [i_0]), ((unsigned char)0)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (min((((/* implicit */unsigned int) (_Bool)1)), ((-(arr_15 [17U] [i_3 + 1] [i_2] [(short)7] [i_0])))))));
                            arr_18 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */int) (short)23074);
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_5])) ? (((((/* implicit */_Bool) ((70093866270720ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)13)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) arr_14 [(signed char)17] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1] [(_Bool)1] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_5]))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_6))))));
                        var_21 = max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) + (0ULL))));
                        arr_23 [(unsigned short)20] [i_1] [i_2] [i_5] = ((/* implicit */signed char) arr_21 [i_0] [i_0]);
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) var_9))), (((short) var_6))))) ? (min((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (signed char)-86)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_30 [i_0] = ((/* implicit */signed char) var_4);
                            arr_31 [6LL] [8U] [i_2] [(short)3] [i_7] [i_0] = ((/* implicit */unsigned char) var_7);
                            var_23 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [(unsigned char)13] [i_1] [(unsigned char)13] [i_1 - 1]))) : (var_15))), (((/* implicit */long long int) ((arr_25 [i_1] [17U] [i_1 + 1]) ? (((/* implicit */int) arr_24 [i_1 + 3] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_25 [12LL] [i_1 + 3] [i_1 - 1])))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) -762389995);
                                var_25 = ((/* implicit */short) ((((((/* implicit */int) arr_16 [(_Bool)1] [i_8] [20] [i_8] [i_8 + 1] [(signed char)12] [i_8])) > (((/* implicit */int) (short)0)))) && (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6))))));
                                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_9 + 1] [(_Bool)1] [i_9 + 1] [17] [(unsigned short)6] [i_9])) + (((/* implicit */int) arr_16 [7LL] [i_9 - 2] [i_9] [i_9 - 2] [i_9] [(unsigned short)15] [i_9 + 1]))))) ? ((+(((/* implicit */int) arr_16 [3LL] [i_9 - 1] [i_9] [i_9 + 1] [(_Bool)1] [i_9 + 1] [i_9])))) : (min((((/* implicit */int) arr_16 [i_1] [i_9 + 1] [i_9] [(signed char)15] [i_9] [i_9 - 1] [i_9 - 2])), (var_13)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) + (-1)));
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */int) arr_20 [i_0] [i_1] [(_Bool)1] [i_11])) != (((/* implicit */int) (short)-1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
                                arr_41 [i_0] [(unsigned short)4] [i_2] [i_10 - 1] [i_11] = ((/* implicit */short) (((!((_Bool)1))) ? (min((2646497126U), (((/* implicit */unsigned int) (signed char)-24)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_11))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_46 [i_13] [i_12] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_12))));
                        arr_47 [i_0] [i_1] [i_12] [i_13] = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        arr_51 [(_Bool)1] [i_1] [20] [i_14 + 1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned char)47)), (-251075096843957592LL))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)71)))))));
                        arr_52 [i_0] [i_1 + 3] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (-(524287U)))) ? (min((arr_50 [i_14 + 1]), (arr_50 [i_14 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            arr_55 [12LL] [i_1] [i_12] [(_Bool)1] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) min((((9ULL) + (16602799896913163973ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_1] [i_12] [i_15])) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) arr_28 [i_0] [(_Bool)1])) : (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) arr_24 [i_1 - 1] [i_14] [i_14 + 1] [i_14 + 1]))))));
                            arr_56 [i_0] [16U] [(signed char)9] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_14 + 1] [i_1 + 1]), (((/* implicit */long long int) arr_17 [i_1 - 1] [i_1] [i_1] [i_14 + 1] [i_14 + 1]))))) ? (4165052543U) : (((/* implicit */unsigned int) -785125174))));
                            arr_57 [i_0] [i_14] [i_12] [i_14] [i_15] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (2541281321U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [1] [i_1 + 3] [i_12] [i_14] [7U])))));
                            arr_58 [(_Bool)1] [(short)19] [(unsigned char)3] [i_14 + 1] [i_15] [(signed char)10] = ((/* implicit */unsigned short) (((!(((_Bool) 18446744073709551615ULL)))) ? (((((/* implicit */int) min((((/* implicit */unsigned char) arr_38 [i_0] [i_1] [i_0])), ((unsigned char)50)))) & (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_12] [(unsigned short)21] [i_15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) : ((+(((/* implicit */int) (unsigned char)239))))));
                        }
                        /* vectorizable */
                        for (short i_16 = 2; i_16 < 19; i_16 += 2) 
                        {
                            var_29 -= ((/* implicit */long long int) (_Bool)1);
                            arr_63 [i_0] [(unsigned short)12] = ((/* implicit */int) (_Bool)1);
                        }
                    }
                    for (long long int i_17 = 1; i_17 < 21; i_17 += 2) 
                    {
                        arr_67 [i_0] [i_0] [i_1 - 1] [i_12] [i_17] [i_17 - 1] = var_6;
                        var_30 &= ((/* implicit */signed char) ((_Bool) arr_15 [i_1] [(_Bool)1] [i_1 + 1] [i_1] [(short)3]));
                    }
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            var_31 = ((/* implicit */int) min((arr_45 [i_1] [(_Bool)1] [(unsigned char)21] [i_1] [(_Bool)1] [i_1 + 2]), (((/* implicit */unsigned int) (_Bool)1))));
                            var_32 += ((/* implicit */short) min(((~(((/* implicit */int) max((arr_59 [(short)15] [i_19] [(_Bool)1] [(short)8] [(_Bool)1] [1U] [i_19]), (((/* implicit */short) (_Bool)0))))))), (((/* implicit */int) min((arr_17 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1]), (arr_17 [(unsigned short)13] [i_0] [i_0] [i_1 + 2] [(_Bool)1]))))));
                            arr_74 [i_0] [i_1 + 2] [(unsigned char)11] [i_18] [5ULL] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [(signed char)7] [i_1] [i_18] [(short)17])) >= (((/* implicit */int) var_6))))), (var_7))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_49 [i_0] [i_1] [i_0] [i_18])))))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_13) ^ (((/* implicit */int) (unsigned char)206)))), (((/* implicit */int) max(((signed char)64), ((signed char)53))))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) arr_69 [7ULL] [i_1] [18]))))));
                        }
                        var_34 = ((/* implicit */unsigned char) arr_29 [i_0] [19LL] [(short)12] [i_0] [17U] [(_Bool)1]);
                        arr_75 [(unsigned char)9] [i_1 + 3] [i_12] [i_18] = ((/* implicit */unsigned short) var_5);
                    }
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) max((arr_42 [i_1 + 1] [i_1 + 3] [i_1 + 3]), (((/* implicit */unsigned short) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 1; i_20 < 21; i_20 += 4) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 22; i_21 += 4) 
                        {
                            {
                                arr_81 [i_0] [i_1 + 1] [i_12] [i_20] [i_20] [i_21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_73 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2]), ((unsigned char)54))))));
                                arr_82 [i_0] [i_1] [i_12] [i_20] [(unsigned short)11] = ((((/* implicit */int) (signed char)-62)) > (((((/* implicit */int) arr_66 [i_20 + 1] [i_1 + 3] [i_1 - 1])) ^ (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_14 [(_Bool)1] [0LL] [i_12] [i_12] [i_12] [i_20 - 1] [i_21])) : (((/* implicit */int) arr_66 [i_21] [i_20] [7])))))));
                                arr_83 [10LL] [i_20 + 1] [(unsigned char)17] [(unsigned short)10] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1 - 1] [(unsigned char)8] [i_1 + 2])) ? (arr_79 [(signed char)5] [(_Bool)1] [i_1 - 1] [i_1] [i_1 + 3]) : (((/* implicit */unsigned int) var_13)))));
                                arr_84 [(_Bool)1] [i_20 + 1] [i_12] [(unsigned short)1] [(short)4] [i_0] = ((/* implicit */unsigned short) (!(min((arr_33 [13LL] [i_0] [13LL] [i_1 + 1]), ((_Bool)1)))));
                            }
                        } 
                    } 
                    arr_85 [i_0] [i_1] [i_12] = ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (((long long int) (unsigned char)245)))) + (9223372036854775807LL))) << (((min((max((18446744073709551596ULL), (var_16))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-8675))))))) - (8675ULL)))));
                }
            }
        } 
    } 
    var_36 = min((min(((((_Bool)1) ? (2541281321U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (short)-8674)))), (((/* implicit */unsigned int) var_6)));
    var_37 = ((/* implicit */_Bool) var_7);
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)0))));
}
