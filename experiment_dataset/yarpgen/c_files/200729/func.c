/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200729
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0 - 1])), (15435786264388716055ULL)))) || (((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0])))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))) ? (((((/* implicit */int) arr_0 [15] [i_0])) | (((/* implicit */int) arr_0 [(signed char)3] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_1))))) != (((((((/* implicit */int) (signed char)-94)) + (2147483647))) << (((arr_1 [i_0 + 1]) - (8569834267815187122ULL))))))))));
    }
    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_12)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7599)))))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (int i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((((int) (unsigned short)3)), (((/* implicit */int) ((_Bool) arr_12 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3] [i_3] [i_3 + 1])))));
                                arr_16 [i_3] [i_3] = arr_6 [i_2] [i_5];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) ((_Bool) 15435786264388716055ULL));
                                var_20 = ((/* implicit */signed char) min((((long long int) arr_15 [i_2] [i_3] [i_3] [i_3 + 2] [i_7])), (((/* implicit */long long int) (~(((int) arr_7 [(unsigned short)2])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) (_Bool)1);
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                arr_32 [i_2] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_2 + 2] [i_9 - 1])) ? (((/* implicit */int) arr_20 [i_2 - 1] [i_9 - 1])) : (((/* implicit */int) (unsigned char)241))));
                                arr_33 [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_10] [i_9] [i_8] [i_9 - 1])) ? (((/* implicit */int) arr_22 [i_2 + 2] [i_2 + 1] [i_9 - 1] [i_9 - 1] [i_2 + 2] [i_9])) : (-408042436)));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10] [3LL] [i_8] [i_2] [i_2] [i_1]))) : (arr_17 [(signed char)4] [i_8] [i_10] [i_10]))))))));
                                arr_34 [i_1] [(signed char)6] [i_2] [i_8] [i_9] [i_10] = ((/* implicit */short) ((15435786264388716055ULL) % (((/* implicit */unsigned long long int) 134209536U))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 + 2] [i_8] [i_11])) ? (arr_9 [i_1] [i_2 + 1] [i_8] [i_11]) : (((/* implicit */unsigned long long int) 35184372088831LL))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (268402688U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94)))))) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2 + 1] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_4 [i_2 + 1]))));
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((short) arr_1 [i_2 + 1]));
                            var_26 = var_14;
                        }
                        for (int i_13 = 3; i_13 < 8; i_13 += 2) 
                        {
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_1] [i_2] [i_2 + 2] [i_2 - 1] [i_13 + 2] [i_13 + 1])) > (((/* implicit */int) arr_29 [7U] [i_2] [i_2 + 1] [i_2 + 1] [i_13 - 1]))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_13 + 2] [i_11] [i_11] [i_2 + 1])) ? (((/* implicit */int) arr_22 [i_8] [i_8] [7U] [(unsigned short)9] [i_13 - 3] [i_13])) : (((/* implicit */int) ((unsigned char) (signed char)118))))))));
                        }
                        for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)253)))))));
                            var_30 -= ((/* implicit */_Bool) 12796360577869165821ULL);
                        }
                        arr_45 [i_11] = ((/* implicit */_Bool) ((int) arr_14 [i_2 - 1] [i_2 - 1] [i_11]));
                    }
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        arr_49 [i_8] [i_8] [i_2] [i_15] [i_1] [(unsigned short)0] = ((/* implicit */int) arr_40 [(_Bool)1] [i_2] [(unsigned short)0] [4ULL] [i_1] [i_1]);
                        arr_50 [i_2] [i_8] = ((/* implicit */unsigned short) ((arr_12 [i_2 - 1] [i_2 - 1] [i_2] [i_1] [i_2 + 2] [i_2 + 1]) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_12))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_16 = 3; i_16 < 7; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_17 = 2; i_17 < 8; i_17 += 2) 
                    {
                        arr_59 [i_1] [i_2] [i_16 - 2] [i_17] [i_16 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_17 + 2] [i_17] [i_17])) ? (arr_9 [i_17] [i_17 + 2] [(unsigned short)4] [i_17 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 3; i_18 < 8; i_18 += 2) 
                        {
                            arr_62 [i_18] [i_17] [i_16] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_47 [i_1] [i_2 + 2] [i_16 - 2] [i_17 + 2] [i_18 + 2]))));
                            arr_63 [i_1] [i_2] [i_16] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_1] [i_2] [i_16 - 2] [7ULL] [i_18] [i_18 + 1]))) ^ (66060288U)));
                        }
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_17 - 1] [i_2 + 1] [i_16 + 1] [i_17] [i_1])) ? (((/* implicit */int) arr_47 [i_17 - 1] [(signed char)1] [i_16] [i_17] [i_16])) : (((/* implicit */int) arr_47 [i_17 - 1] [i_2] [i_16] [i_17] [i_17 - 1]))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [7ULL] [i_16 + 3] [i_2 + 2] [i_1])) != (((/* implicit */int) arr_52 [i_1] [i_1]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_19] [i_16 - 3] [i_2 + 2] [i_19])) ? (((/* implicit */int) arr_12 [i_16 - 3] [i_2 + 1] [i_16] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_29 [(signed char)2] [i_16] [(_Bool)1] [i_2] [(_Bool)1]))));
                        var_34 = ((/* implicit */short) arr_56 [i_19]);
                        arr_66 [i_1] [i_1] [(signed char)8] = ((/* implicit */signed char) ((unsigned long long int) (short)-6129));
                        var_35 = ((/* implicit */unsigned short) 5U);
                    }
                    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        arr_70 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (short)-1);
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            arr_73 [i_1] [i_1] [i_1] [i_1] [6U] = ((/* implicit */int) ((unsigned short) arr_51 [i_1] [i_2 + 2] [i_16 + 3] [i_20]));
                            arr_74 [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */int) (signed char)41);
                        }
                    }
                    for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        var_36 -= ((/* implicit */_Bool) arr_8 [(_Bool)0] [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (int i_23 = 0; i_23 < 10; i_23 += 2) 
                        {
                            arr_80 [i_1] [(unsigned short)2] [i_16 + 3] [i_22] [i_23] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_30 [i_2] [i_2]))))));
                            var_37 = ((/* implicit */signed char) ((unsigned long long int) arr_78 [i_16 - 3] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1]));
                        }
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20090))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (var_14)))) : (((/* implicit */int) arr_43 [i_2 - 1] [i_16] [i_16 + 1] [i_16] [i_22] [i_22] [3U]))));
                    }
                    for (unsigned int i_24 = 0; i_24 < 10; i_24 += 2) 
                    {
                        arr_83 [i_16 + 2] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) 3010957809320835537ULL);
                        /* LoopSeq 1 */
                        for (signed char i_25 = 0; i_25 < 10; i_25 += 2) 
                        {
                            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_25] [i_16 + 3]))));
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((_Bool) (+(arr_38 [i_1] [i_2] [i_1] [i_24])))))));
                            var_41 = ((/* implicit */short) ((unsigned int) arr_72 [i_1] [i_2] [i_16 + 2]));
                        }
                        arr_87 [i_2] [i_2 - 1] [i_16] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_81 [i_1] [i_2] [i_16 - 3] [i_24] [i_2 - 1])) * (0U)));
                        /* LoopSeq 1 */
                        for (unsigned short i_26 = 0; i_26 < 10; i_26 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_16 - 3] [i_16 + 1] [i_16 + 1])) % (((/* implicit */int) arr_24 [i_16 - 3] [i_16 + 1] [i_16 + 1]))));
                            var_43 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2047)) + (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_79 [i_26] [i_24] [i_24] [(unsigned short)0] [i_2 - 1] [i_2] [i_1]))));
                            arr_90 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned char) arr_85 [i_1] [i_2] [i_2] [i_24] [i_26] [i_1] [i_16 + 2]));
                            var_44 = ((/* implicit */short) var_16);
                        }
                    }
                }
                arr_91 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_1] [i_1])), (arr_14 [i_1] [(unsigned short)0] [i_1])))) - (((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2] [i_2]))))) ? (((/* implicit */int) ((unsigned char) ((arr_38 [(signed char)9] [i_2] [i_2] [4ULL]) != (((/* implicit */int) arr_67 [i_2] [i_1] [i_1] [(signed char)6] [i_1])))))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_2] [i_1])) <= (((/* implicit */int) (unsigned char)254)))))));
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) var_4)))))));
}
