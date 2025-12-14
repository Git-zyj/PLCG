/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36777
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 &= ((/* implicit */unsigned long long int) ((((var_2) + (2147483647))) >> (((/* implicit */int) ((var_2) > (((/* implicit */int) ((((/* implicit */int) var_9)) > (var_2)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_2))));
                        arr_8 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_11) >> (((((/* implicit */int) var_8)) - (56)))))) == (((var_6) * (var_6))))))));
                        var_14 = ((((/* implicit */int) var_7)) ^ (((((((/* implicit */int) var_1)) >> (((var_6) - (11840997473217906581ULL))))) ^ (((/* implicit */int) var_7)))));
                    }
                    for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        var_15 = ((var_11) > (((/* implicit */int) var_9)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((var_2) + (2147483647))) << (((((/* implicit */int) var_0)) - (123))))) & (((var_11) | (var_2))))))));
                            var_17 = ((/* implicit */int) var_5);
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_5] = ((/* implicit */long long int) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_5))))))));
                        }
                        for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_6] [(unsigned char)6] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6)))))) ^ (var_6)))));
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) var_5)) << (((((((/* implicit */int) var_7)) | (var_11))) - (1364625452)))))));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) | (((((/* implicit */int) var_4)) & (((/* implicit */int) var_1)))))) >> (((((((/* implicit */int) var_9)) - (((((/* implicit */int) var_1)) | (var_11))))) + (1364625500)))));
                            var_19 |= ((/* implicit */long long int) var_0);
                            var_20 ^= ((/* implicit */int) var_1);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_21 [i_1] [i_4] [i_7] = ((((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                            arr_22 [i_1] [i_1] [5] [i_1] [0] [(signed char)0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_1)) - (68))))) > (((/* implicit */int) var_7))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_10))));
                            var_22 -= ((/* implicit */long long int) var_5);
                        }
                    }
                    arr_23 [i_0] [i_0] = ((/* implicit */signed char) ((((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    arr_27 [(short)15] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_0)) - (119))))) * (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9)))))) <= (((((/* implicit */int) var_0)) | (((/* implicit */int) var_3))))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 3; i_9 < 14; i_9 += 3) 
                    {
                        var_24 -= ((/* implicit */signed char) var_11);
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_6))));
                        var_26 = ((/* implicit */unsigned int) var_8);
                        arr_31 [i_9] [i_1] [(unsigned char)7] [i_9] = ((/* implicit */short) var_8);
                    }
                    for (long long int i_10 = 1; i_10 < 16; i_10 += 3) 
                    {
                        arr_34 [i_1] [i_8] = ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_7))));
                            arr_39 [i_0] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */int) var_5);
                        }
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_12] [(unsigned short)9] = ((/* implicit */int) var_6);
                            arr_43 [i_12] [7] [i_12] [i_0] [i_0] = ((0) << (((((/* implicit */int) (unsigned short)38829)) - (38824))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_10))))) > (var_6)))) * (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                        {
                            var_29 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_8))));
                            arr_46 [i_13] [i_10] [15ULL] [i_8] [(short)3] [(short)4] [i_0] = var_9;
                            arr_47 [i_0] [i_8] [i_10 + 2] = ((/* implicit */signed char) var_9);
                            var_30 = ((/* implicit */long long int) var_0);
                        }
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_6))));
                    }
                    arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */short) var_0);
                                arr_56 [i_1] [i_14] [i_1] [i_1] [i_1] [i_0] |= var_11;
                            }
                        } 
                    } 
                }
                for (short i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) /* same iter space */
                        {
                            var_33 -= ((/* implicit */unsigned int) var_9);
                            arr_64 [i_0] [i_1] [i_0] [i_16] [i_17] [i_17] [(unsigned char)11] = var_11;
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) var_9)))))));
                            var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4))));
                        }
                        /* vectorizable */
                        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
                        {
                            var_36 |= ((/* implicit */short) var_7);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) != (var_10)))) & (((((/* implicit */int) var_7)) / (((/* implicit */int) var_1))))));
                            var_38 = ((/* implicit */short) ((((var_11) << (((var_10) - (14609097337498972261ULL))))) / (((/* implicit */int) var_1))));
                            var_39 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_3)))) * (((/* implicit */int) var_0))));
                            var_40 = ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6))))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (0U)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 1) 
                        {
                            var_41 = ((/* implicit */int) var_8);
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) var_3))));
                            var_43 -= ((/* implicit */unsigned int) var_10);
                            arr_70 [i_0] [i_1] [i_16] [i_17] [i_20] [i_17] [i_20] = var_8;
                            var_44 -= ((/* implicit */_Bool) var_10);
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_21 = 0; i_21 < 18; i_21 += 4) 
                        {
                            var_45 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                            var_46 = ((/* implicit */unsigned char) max((var_46), (var_0)));
                            var_47 = ((((/* implicit */int) var_7)) / (((((/* implicit */int) var_0)) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_10))) - (14609097337498972208ULL))))));
                            var_48 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_3))));
                            var_49 = ((/* implicit */unsigned int) var_10);
                        }
                        for (unsigned short i_22 = 0; i_22 < 18; i_22 += 4) 
                        {
                            arr_76 [i_0] [i_17] [i_16] [i_17] [i_22] [i_22] [i_17] = var_11;
                            arr_77 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
                            arr_78 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) << (0ULL))) & (((/* implicit */int) var_1))));
                        }
                        for (unsigned char i_23 = 3; i_23 < 16; i_23 += 4) 
                        {
                            arr_82 [i_0] [i_0] [i_0] [i_17] [i_17] [6U] [i_16] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_4))))) <= (((/* implicit */int) var_9)))))) < (var_6)));
                            arr_83 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23 - 2] [i_23] = ((/* implicit */short) var_10);
                        }
                    }
                    arr_84 [(signed char)8] [(signed char)8] = ((/* implicit */int) var_4);
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 0; i_24 < 18; i_24 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            var_50 = ((/* implicit */int) var_0);
                            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) * (((((/* implicit */int) var_0)) >> (((var_6) - (11840997473217906576ULL))))))))));
                            var_52 += ((/* implicit */signed char) ((((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_0))));
                            var_53 ^= ((/* implicit */short) var_1);
                            var_54 ^= ((/* implicit */unsigned long long int) ((var_11) >> (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))))));
                        }
                        for (int i_26 = 0; i_26 < 18; i_26 += 4) 
                        {
                            arr_93 [i_0] [i_24] [i_24] [i_24] [i_26] = ((/* implicit */short) var_9);
                            var_55 += ((/* implicit */unsigned char) var_5);
                        }
                        var_56 ^= ((/* implicit */_Bool) var_4);
                        arr_94 [i_24] [i_24] [i_16] [i_24] = ((/* implicit */_Bool) ((((((/* implicit */int) ((var_11) >= (((/* implicit */int) var_3))))) ^ (((/* implicit */int) var_3)))) & (((/* implicit */int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) var_7)))) < (var_11))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_27 = 1; i_27 < 16; i_27 += 1) 
                    {
                        var_57 += ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))))));
                        var_58 = ((/* implicit */unsigned long long int) var_11);
                    }
                    /* vectorizable */
                    for (unsigned char i_28 = 0; i_28 < 18; i_28 += 3) 
                    {
                        var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) var_3))));
                        var_60 = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) / (2268535338U))) >> (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_61 = ((/* implicit */unsigned long long int) var_2);
                    }
                }
                var_62 += ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    var_63 = ((/* implicit */long long int) var_8);
}
