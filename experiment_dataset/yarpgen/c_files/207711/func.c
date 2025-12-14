/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207711
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
    var_18 ^= ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)19)))), (((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned char)32)))))), (((/* implicit */int) ((short) var_12)))));
    var_19 = ((/* implicit */unsigned long long int) var_8);
    var_20 = ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) min((((unsigned int) var_5)), (((/* implicit */unsigned int) var_10))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_1 [(unsigned char)0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2])))))), (max((((/* implicit */unsigned int) ((short) arr_0 [i_2]))), (min((4026358377U), (4026358377U))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [10LL]);
                                arr_11 [i_0 - 2] [i_0 + 1] [i_0 + 1] [(signed char)1] [i_0 + 1] [(_Bool)1] [i_4] = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((((arr_0 [i_0 - 2]) + (2147483647))) << (((((arr_6 [2U] [(signed char)2] [(unsigned short)5] [i_0 + 1]) + (136935973))) - (30)))))) * (268608934U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-1213)), (arr_2 [10LL] [i_2])))) && (((/* implicit */_Bool) 15693175311950246018ULL)))))));
                                var_23 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 8593887054181829866LL)))) ^ (max((((unsigned int) arr_8 [i_4] [i_4] [(unsigned char)0] [i_4] [i_4] [i_4 - 1])), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_5 [i_0 - 2] [i_1] [(signed char)1])), (arr_7 [i_4 - 1] [i_1] [(unsigned char)5] [i_2] [i_1] [i_0]))))))));
                                var_24 = ((((arr_2 [(short)8] [i_0 - 2]) <= (arr_2 [i_0 - 2] [i_0 - 2]))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)2] [i_0 - 1])) ? (arr_2 [(unsigned short)9] [i_0 - 2]) : (arr_2 [i_3] [i_0 - 1]))) : (max((arr_2 [i_3] [i_0 - 2]), (arr_2 [(signed char)6] [i_0 - 1]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_4 [i_2] [i_1]), (arr_2 [i_0 - 2] [i_1])))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4032908574U)) ? (4032908596U) : (268608934U)))))) != (((min((((/* implicit */unsigned long long int) 2147483647)), (arr_2 [(short)10] [4LL]))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_1] [i_2] [(unsigned short)5] [i_2])), (arr_6 [i_0 + 1] [i_0 - 1] [i_1] [i_2]))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        arr_14 [6] [i_1] [(signed char)0] [6] [i_1] = ((/* implicit */unsigned long long int) min((((unsigned char) arr_7 [i_0 - 2] [(_Bool)1] [i_5 - 2] [i_5 - 1] [i_5] [i_5 + 1])), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [7LL] [i_0] [7LL] [5ULL] [i_0] [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (268608934U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0])))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */short) arr_4 [i_0] [i_5 + 1]);
                            var_27 = ((/* implicit */_Bool) ((short) min((arr_13 [(_Bool)1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0]), (arr_4 [i_0] [i_0 - 1]))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned short) (unsigned char)231)))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_29 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_0 - 2] [(unsigned char)3] [(unsigned char)3] [3U] [i_7])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_7])) : (((/* implicit */int) (short)11046)))) == (((/* implicit */int) (short)17379))));
                            var_30 |= ((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 + 1]);
                            var_31 = ((/* implicit */unsigned int) ((short) arr_13 [i_0 + 1] [i_0 + 1] [(signed char)4] [i_0 + 1] [i_0 + 1] [i_7]));
                        }
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 - 1] [7LL] [7LL]))) | (((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 + 1])) ? (arr_12 [i_0 - 1] [i_0 - 2]) : (arr_12 [i_0 + 1] [i_0 - 2])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) 0U)) / (3076773690428771413ULL))));
                            var_34 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_8]))) != (arr_4 [i_8] [i_2]))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [(signed char)6] [7ULL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (arr_4 [i_0 - 2] [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) 268608937U)) ? (-2624230082516899228LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30140))))))));
                            var_37 = ((/* implicit */unsigned long long int) ((arr_16 [4ULL] [5ULL] [10U] [i_0 - 1] [i_1] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 - 1] [i_0 + 1] [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5] [(unsigned short)5])))));
                        }
                        var_38 ^= ((/* implicit */unsigned long long int) arr_6 [(short)0] [(_Bool)1] [i_1] [2LL]);
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 7; i_10 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) arr_16 [i_0] [i_2] [i_2] [i_10] [i_1] [4LL])));
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_10 - 1] [(signed char)3] [(unsigned char)9])) ? (arr_16 [i_0] [i_0] [i_0 + 1] [i_10 - 1] [i_10] [i_10 + 1]) : (arr_16 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_10 - 1] [i_10] [i_10 + 3]))))));
                        arr_26 [i_0] [(short)8] [i_2] [(unsigned char)1] [i_0 + 1] [i_2] |= 27U;
                        arr_27 [i_0 + 1] [i_0 - 2] |= ((/* implicit */short) ((arr_2 [i_0] [i_0]) << (((((((/* implicit */_Bool) 3U)) ? (2753568761759305600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49499))))) - (2753568761759305561ULL)))));
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 1; i_12 < 10; i_12 += 4) 
                        {
                            var_41 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_19 [3LL] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]))));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12812902101650555743ULL)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned short i_13 = 3; i_13 < 8; i_13 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (arr_21 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [5LL] [i_1] [(_Bool)1] [i_1] [i_1] [10ULL] [(_Bool)1])))))))));
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_13 - 2] [(unsigned short)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_13 - 1] [i_13 - 3] [i_13 + 3]))) : (268608943U)));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            var_45 = ((unsigned long long int) arr_38 [i_0 - 2] [i_0 - 1] [i_0 + 1] [7ULL] [i_0 - 2]);
                            var_46 *= ((/* implicit */_Bool) ((long long int) arr_32 [i_0 - 1] [6ULL] [(short)2]));
                        }
                        for (short i_15 = 2; i_15 < 7; i_15 += 2) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1384359823U)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)10] [(unsigned short)4] [i_11] [i_15 - 1]))));
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 268608930U)) ? (((/* implicit */int) arr_24 [i_0 - 1])) : (((/* implicit */int) arr_43 [6LL] [10LL] [(_Bool)1] [4U] [(short)8])))))));
                            var_49 = ((/* implicit */unsigned int) arr_7 [(_Bool)1] [(_Bool)1] [i_2] [i_11] [(_Bool)1] [(_Bool)1]);
                            var_50 = ((/* implicit */long long int) ((signed char) arr_5 [i_15 - 2] [i_1] [i_0 - 1]));
                        }
                        for (short i_16 = 2; i_16 < 7; i_16 += 2) /* same iter space */
                        {
                            var_51 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_30 [i_1] [7U] [i_11] [i_16 + 2])) : (((/* implicit */int) arr_32 [(unsigned short)6] [i_11] [(_Bool)0]))))) ? (((arr_34 [(signed char)7] [(signed char)7] [i_11] [i_16]) ? (8775174966182037010LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_11])) > (((/* implicit */int) arr_31 [i_2] [i_2] [i_2]))))))));
                            var_52 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [(unsigned short)1] [(unsigned short)1]))) && (((_Bool) (unsigned short)14401))));
                        }
                        for (short i_17 = 2; i_17 < 7; i_17 += 2) /* same iter space */
                        {
                            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_34 [(unsigned char)4] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((arr_10 [5ULL] [i_1] [i_1] [(short)1] [i_1] [(unsigned short)3] [(short)1]) && (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1]))))))))));
                            arr_49 [i_0 - 2] [(_Bool)1] [i_2] [(_Bool)1] [(unsigned short)0] [i_0 - 1] [i_1] = ((unsigned char) (signed char)20);
                            var_54 = ((/* implicit */short) ((unsigned short) arr_32 [i_0 - 1] [i_0 - 1] [i_17 + 3]));
                            arr_50 [i_0 + 1] [i_11] [(unsigned short)3] &= ((/* implicit */unsigned short) arr_13 [i_0 - 2] [i_1] [i_2] [i_2] [(short)6] [1U]);
                        }
                    }
                    for (short i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned char) ((unsigned int) ((((((long long int) arr_39 [i_0] [3LL] [i_0] [i_2] [i_18] [(short)9])) + (9223372036854775807LL))) << (((min((18446744073709551615ULL), (arr_15 [i_18] [(unsigned short)2] [i_1] [(_Bool)0] [i_0 - 1]))) - (6965237133441791889ULL))))));
                        var_56 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_23 [i_0 - 1] [i_0 - 2] [i_0 - 2] [(short)4] [i_2] [i_18] [i_18])), (4032908574U)))) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) ((unsigned short) 268608934U))))) <= (((/* implicit */int) arr_30 [i_0 - 1] [i_1] [i_2] [i_18]))));
                        arr_54 [i_1] [i_2] [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((15693175311950246018ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_1])) > (arr_8 [9ULL] [i_0] [(short)6] [i_2] [(signed char)8] [i_18])))) : (((/* implicit */int) arr_52 [i_0 - 1] [i_0 - 1])))) > (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_51 [i_0 - 1] [i_0 + 1]))))));
                        arr_55 [i_0] [i_1] [i_2] [i_18] = ((/* implicit */long long int) arr_42 [3U] [(short)5] [i_2]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_19 = 0; i_19 < 22; i_19 += 2) 
    {
        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            {
                arr_62 [i_19] [(unsigned short)10] = ((/* implicit */short) ((unsigned long long int) arr_60 [(_Bool)1] [i_20] [i_20]));
                var_57 = ((/* implicit */short) ((unsigned short) ((unsigned short) ((unsigned long long int) 15693175311950246018ULL))));
                arr_63 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) arr_60 [(_Bool)1] [i_19] [6LL])));
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 22; i_21 += 4) 
                {
                    for (long long int i_22 = 2; i_22 < 20; i_22 += 2) 
                    {
                        {
                            arr_71 [(_Bool)1] [i_21] [(unsigned short)11] = ((/* implicit */long long int) 3996128700U);
                            var_58 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 262058722U)) / (56061688902971022ULL)));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_23 = 0; i_23 < 22; i_23 += 2) 
                            {
                                var_59 = ((/* implicit */unsigned short) arr_67 [i_19] [i_19] [i_21] [i_21] [i_22 - 2] [i_23]);
                                var_60 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_56 [(_Bool)1] [(signed char)7])) != (((4628017232895582632ULL) ^ (((/* implicit */unsigned long long int) 4026358372U))))));
                                var_61 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_57 [i_19])) && (((/* implicit */_Bool) arr_56 [i_21] [i_22])))));
                                var_62 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_61 [i_19] [(_Bool)1] [i_23])) && (((/* implicit */_Bool) (short)11681)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_66 [i_23] [i_21]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
