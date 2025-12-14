/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240953
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
    var_14 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */long long int) (-(var_9)))), (274877906432LL))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)1)))), (var_3)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1]);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_17 = ((/* implicit */int) (+(min((((((/* implicit */_Bool) var_4)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_1] [i_1])))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0])))))));
                        arr_11 [i_3] [i_2] [i_1] [i_0] = var_13;
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_1] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                        arr_15 [i_4] [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) arr_1 [i_1] [i_0]);
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_7 [i_4])))) % ((~(arr_1 [i_2] [i_2]))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] [10] = ((/* implicit */unsigned long long int) var_0);
                            var_20 = ((/* implicit */unsigned char) var_8);
                            var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_6])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [7U] [i_1] [i_2] [i_1])) : (((/* implicit */int) var_11))))))));
                        }
                        var_22 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) arr_16 [i_2] [i_2] [(short)2])))) : (((/* implicit */int) max((((/* implicit */short) arr_5 [i_5] [i_0] [3LL] [i_2])), (arr_12 [i_0] [i_1] [i_0] [(_Bool)1]))))))));
                    }
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            arr_28 [i_7] [i_7] [i_2] [i_0] [i_8] [(signed char)10] [i_7] = ((/* implicit */_Bool) (+((+(((int) (unsigned short)51691))))));
                            arr_29 [i_8] [2U] [i_0] [i_2] [i_2] [(signed char)2] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                            var_23 ^= ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]);
                        }
                        for (signed char i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            arr_34 [i_9] [i_2] [i_0] [i_9] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) -2629728048291585857LL));
                            var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned long long int) 2477506214U))))) ? (((arr_30 [i_7] [i_7] [i_1] [i_7] [(signed char)3]) << (((arr_30 [i_2] [i_2] [i_0] [i_2] [i_9 - 1]) - (1081206215U))))) : ((+(arr_25 [i_9] [i_9 + 3] [i_9 + 2] [i_9 - 1] [i_9 + 3])))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_25 = arr_24 [i_1] [i_1] [(_Bool)1];
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_13) : (arr_25 [i_7] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]))))));
                            arr_37 [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (arr_27 [i_2] [i_7] [10LL] [i_7] [i_1] [i_0] [i_10 + 1]) : (((/* implicit */long long int) arr_3 [i_0] [i_10 + 1] [i_10 + 1]))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 8; i_11 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((var_12) > (((/* implicit */unsigned long long int) (-(arr_27 [i_11] [i_11 + 2] [(unsigned char)2] [(unsigned char)2] [i_11 + 2] [i_2] [i_2]))))));
                            arr_42 [i_0] [(unsigned short)9] [i_11] [i_2] [i_7] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? ((((_Bool)1) ? (arr_17 [i_0] [i_1] [i_2] [(signed char)10] [3U]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(unsigned char)2] [i_0] [i_11]))))) : (max((var_1), (((/* implicit */long long int) var_4)))))) + (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) arr_18 [i_11] [i_0] [i_2] [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
                            var_28 = ((/* implicit */long long int) (!((_Bool)1)));
                        }
                        var_29 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [9LL] [i_1] [i_2] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_2])))))))));
                        var_30 = ((/* implicit */int) var_6);
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned int) var_8)) : (4294967291U)));
                    }
                    arr_43 [(signed char)0] [i_1] [i_0] = ((/* implicit */unsigned char) var_6);
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    arr_46 [i_0] [i_0] [i_1] [i_12] = ((/* implicit */unsigned char) arr_5 [i_12] [i_1] [i_1] [i_0]);
                    arr_47 [i_12] [i_12] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (short)8191)) ? (-139156955) : (-2049895833)))));
                    var_32 += ((/* implicit */unsigned long long int) ((_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_1] [i_12] [i_12]));
                    var_33 = ((/* implicit */unsigned char) arr_17 [i_12] [i_12] [i_12] [i_12] [i_12]);
                }
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) 14216029105763995286ULL);
                    arr_52 [i_1] [i_0] = ((/* implicit */unsigned int) var_7);
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 9; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_35 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 13264741040741065059ULL)) || ((_Bool)1))));
                            arr_59 [i_0] [i_15] [i_0] [9LL] [i_1] [9LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 453534063150824492LL)) ? (((/* implicit */int) (_Bool)1)) : (139156954)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (23ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_1] [i_14])))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)-107)) ? (arr_55 [i_15] [i_14 + 2] [i_1] [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((int) arr_36 [i_14 + 1] [i_14] [i_14 + 2] [i_14] [i_14] [i_14] [i_14 + 2])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_37 = ((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1] [3]), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    arr_62 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_0] [i_1] [i_16]))) : (arr_44 [i_16] [i_1] [i_0])));
                }
                for (signed char i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
                {
                    arr_65 [i_0] [i_17] [i_17] = ((/* implicit */unsigned short) var_0);
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) arr_30 [i_0] [i_1] [i_1] [i_17] [i_17]))));
                    var_39 = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((short) arr_44 [i_0] [i_1] [2])))), (((((/* implicit */_Bool) arr_51 [i_17] [i_1] [i_0])) ? (var_8) : (((/* implicit */int) arr_16 [i_17] [i_17] [i_17]))))));
                    /* LoopSeq 3 */
                    for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) var_12))));
                        var_41 = ((/* implicit */short) (-(((((/* implicit */int) arr_4 [i_17] [i_17] [i_0])) ^ (((/* implicit */int) (signed char)13))))));
                        var_42 = ((/* implicit */short) ((signed char) var_8));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_43 = var_9;
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) arr_33 [i_1]))));
                        var_45 = ((/* implicit */short) arr_45 [4] [i_1]);
                        var_46 = ((((/* implicit */_Bool) (+(((long long int) arr_33 [i_1]))))) ? (arr_17 [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) var_4)));
                        var_47 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_75 [i_20] [i_17] [i_17] [i_0] = ((/* implicit */signed char) arr_57 [i_17] [i_17] [i_17] [i_0]);
                        var_48 -= ((/* implicit */unsigned long long int) arr_5 [i_0] [0] [i_17] [i_20]);
                        var_49 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (min((-4148702813793631094LL), (var_0)))));
                    }
                    var_50 = ((/* implicit */signed char) (unsigned char)252);
                }
                for (signed char i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */signed char) var_3);
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        for (unsigned char i_23 = 2; i_23 < 7; i_23 += 3) 
                        {
                            {
                                var_52 -= ((/* implicit */short) var_12);
                                var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_24 [i_23 - 1] [i_23] [i_23 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((+(arr_17 [i_23] [i_23] [0] [i_23] [i_23 + 3])))));
                                arr_84 [i_1] [i_22] [i_23 - 1] [i_21] [i_1] [i_22] [i_23] = ((/* implicit */unsigned char) var_1);
                                arr_85 [i_21] [i_21] [i_21] [i_0] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-1082989154)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(3LL))))))) : (arr_78 [i_0] [i_21] [i_0])));
                                var_54 = ((/* implicit */int) -4745498906989114274LL);
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) arr_0 [i_21] [9ULL]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_24 = 0; i_24 < 11; i_24 += 2) 
                    {
                        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_56 [i_1] [i_1] [i_24]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_81 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_72 [8ULL] [i_21] [9] [6LL] [i_0])))))) ? (((unsigned int) arr_7 [i_1])) : ((-(arr_79 [i_24] [i_21] [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_25 = 2; i_25 < 7; i_25 += 1) 
                        {
                            var_57 *= ((/* implicit */signed char) min((((short) arr_71 [i_25] [i_24] [i_1] [i_21] [i_1] [i_0])), (((/* implicit */short) arr_89 [i_25 + 3] [i_25] [i_25 + 2] [i_25] [i_25] [i_25]))));
                            var_58 = ((/* implicit */unsigned int) (((-2147483647 - 1)) != (((/* implicit */int) var_2))));
                        }
                    }
                    for (unsigned long long int i_26 = 3; i_26 < 8; i_26 += 1) 
                    {
                        arr_96 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)79);
                        var_59 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min(((short)-2091), (((/* implicit */short) (_Bool)1))))), ((((_Bool)0) ? ((~(((/* implicit */int) (_Bool)1)))) : (341780836)))));
                        /* LoopSeq 3 */
                        for (signed char i_27 = 0; i_27 < 11; i_27 += 3) 
                        {
                            arr_101 [i_27] [i_26] [i_21] [i_0] = ((/* implicit */unsigned char) 18446744073709551596ULL);
                            arr_102 [i_0] [9] [i_21] [i_26] [i_26] [i_27] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_89 [(signed char)2] [i_27] [i_27] [i_27] [10U] [i_27])) >> (((646904045904166768ULL) - (646904045904166753ULL)))))));
                            var_60 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) * (arr_90 [i_26 + 2] [i_26 + 2])))) ? (min((((/* implicit */long long int) ((_Bool) arr_17 [i_26] [i_26] [i_27] [(unsigned short)7] [i_26]))), (((long long int) arr_40 [(unsigned char)8])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_93 [i_21] [i_26 + 2] [i_26 + 2] [i_27] [(signed char)2] [i_27] [i_27])) ? (((/* implicit */int) arr_81 [i_26 + 3])) : (((/* implicit */int) (unsigned char)121))))));
                            var_61 |= (!(((/* implicit */_Bool) ((int) arr_82 [i_0] [i_0] [7U] [i_21] [i_26] [i_26] [i_27]))));
                        }
                        for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 4) 
                        {
                            var_62 = ((/* implicit */unsigned short) 341780834);
                            arr_105 [i_28] [i_1] [i_1] [9] = ((/* implicit */unsigned char) ((((/* implicit */int) min((min(((unsigned short)62854), (((/* implicit */unsigned short) (unsigned char)20)))), (((/* implicit */unsigned short) var_6))))) + (((/* implicit */int) arr_5 [4] [i_26 - 3] [i_1] [i_1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_29 = 0; i_29 < 11; i_29 += 3) 
                        {
                            var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_68 [i_1] [(unsigned char)1] [i_26 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_36 [i_0] [9] [i_21] [(short)9] [i_26 - 2] [i_26] [i_29]) : (((/* implicit */long long int) var_4)))))));
                            var_64 |= ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((long long int) arr_94 [i_0] [i_1] [i_26 - 1] [i_29])) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_11))))));
                        }
                    }
                    for (signed char i_30 = 0; i_30 < 11; i_30 += 2) 
                    {
                        arr_112 [i_0] [i_1] [i_21] [i_21] [i_30] = ((/* implicit */unsigned char) arr_17 [i_30] [i_21] [i_1] [i_0] [i_0]);
                        var_65 = ((/* implicit */long long int) var_12);
                        arr_113 [i_30] [i_30] [i_21] [i_1] = ((/* implicit */int) var_2);
                    }
                }
            }
        } 
    } 
    var_66 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((2108114201U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (var_12) : (((/* implicit */unsigned long long int) -2147483635))))));
    var_67 = ((/* implicit */short) var_3);
}
