/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38673
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) (+(((arr_1 [i_1]) ? (((/* implicit */int) var_11)) : (var_2)))));
                    var_17 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4180637610346604605ULL))));
                }
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (max((arr_13 [i_5] [i_1] [i_1] [i_1]), (((/* implicit */int) arr_11 [i_1] [i_3] [i_3] [i_3]))))))) && ((((+(((/* implicit */int) arr_7 [i_1] [i_3] [i_1])))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) <= (var_15))))))));
                                arr_17 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5951056912330175846ULL)))))));
                            }
                        } 
                    } 
                    var_19 = (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63114))) : (15925707173758361891ULL));
                }
                for (short i_6 = 4; i_6 < 11; i_6 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        arr_24 [i_6] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)7005)))) ^ (((/* implicit */int) (_Bool)1))))) >= (7017699769748817904ULL)));
                        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                        arr_25 [i_7] [i_7] [i_7] [i_7] [i_1] [i_7 - 1] = (-(min((((/* implicit */unsigned long long int) max((arr_21 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_13 [i_7 + 1] [i_1] [i_1] [i_0]))))), (8592277873368851281ULL))));
                        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(arr_10 [i_1])))), (max((7309684814768030824ULL), (((((/* implicit */_Bool) 8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122)))))))));
                        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_6 - 1] [i_6])) ? (var_3) : (((/* implicit */int) arr_18 [i_6] [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) -2110068057);
                            var_25 = ((/* implicit */int) 8098149155072848051ULL);
                            arr_31 [i_1] [i_1] [i_6 - 2] [(signed char)10] [i_9] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                            arr_32 [(unsigned short)3] [i_1] [i_6 - 4] [i_6] [i_8] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_28 [i_0] [i_6] [i_8] [i_9]))));
                        }
                    }
                    for (short i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [(short)0]))))) : (4294967295U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)8532)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) arr_23 [i_10 + 2] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_6 - 3]);
                            var_28 ^= ((/* implicit */unsigned short) var_15);
                            var_29 = ((/* implicit */unsigned short) var_12);
                            arr_39 [i_6] [i_6 - 3] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        var_30 = (i_1 % 2 == 0) ? (((/* implicit */int) ((signed char) ((min((var_7), (((/* implicit */unsigned long long int) arr_2 [i_1])))) * (((/* implicit */unsigned long long int) ((((arr_13 [i_0] [i_1] [i_0] [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_38 [i_0] [i_1] [i_1] [i_10] [6LL] [i_0] [i_10])) - (239)))))))))) : (((/* implicit */int) ((signed char) ((min((var_7), (((/* implicit */unsigned long long int) arr_2 [i_1])))) * (((/* implicit */unsigned long long int) ((((((arr_13 [i_0] [i_1] [i_0] [i_0]) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_38 [i_0] [i_1] [i_1] [i_10] [6LL] [i_0] [i_10])) - (239))))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        var_31 -= ((/* implicit */signed char) (-(arr_34 [i_0] [i_1] [i_1] [i_12])));
                        arr_42 [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_1]);
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_32 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((max((((((((/* implicit */int) (signed char)-81)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (102))))), (((arr_22 [i_14] [(signed char)6] [(signed char)6] [(signed char)6] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))) != (((((((arr_4 [(unsigned char)4]) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_14])) : (var_3))) + (2147483647))) >> (((arr_13 [i_0] [i_1] [i_14] [i_1]) + (1395499254)))))))) : (((/* implicit */unsigned long long int) ((max((((((((/* implicit */int) (signed char)-81)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (102))))), (((arr_22 [i_14] [(signed char)6] [(signed char)6] [(signed char)6] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))) != (((((((arr_4 [(unsigned char)4]) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_14])) : (var_3))) + (2147483647))) >> (((((arr_13 [i_0] [i_1] [i_14] [i_1]) - (1395499254))) - (271257))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                            {
                                var_33 = ((/* implicit */unsigned long long int) var_11);
                                arr_51 [i_1] [i_1] [i_13] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_13] [i_14]);
                                var_34 = ((/* implicit */unsigned char) var_3);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 2; i_16 < 22; i_16 += 4) 
    {
        var_35 &= ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 3 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_36 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)12600)) & (((/* implicit */int) (short)12118))))));
            var_37 = ((/* implicit */signed char) var_12);
            var_38 = ((/* implicit */unsigned int) var_1);
        }
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            arr_60 [i_16 - 2] [i_16] [i_16] = ((/* implicit */unsigned char) (~(arr_58 [i_16] [i_16 - 1] [i_18])));
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) arr_54 [i_16]))));
        }
        for (int i_19 = 1; i_19 < 24; i_19 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) arr_63 [i_19]);
                        var_41 = ((((/* implicit */_Bool) max((22U), (((/* implicit */unsigned int) var_2))))) ? ((~(10327393370808303994ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)15846)), (1627356608U)))));
                        /* LoopSeq 3 */
                        for (int i_22 = 0; i_22 < 25; i_22 += 1) 
                        {
                            arr_72 [i_19] [i_16 - 2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) / (((/* implicit */int) (short)19032)))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_16 - 1] [i_19] [i_19] [i_21] [i_22])))))));
                            arr_73 [i_19] [20ULL] [i_19] = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) 4014924614504607025ULL)) ? (var_1) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_57 [i_16] [i_16])))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_61 [i_19] [i_19 + 1] [i_19])) ? (((/* implicit */unsigned long long int) var_14)) : (var_15)))))));
                            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) ((unsigned short) (signed char)-118)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (18ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_16] [i_19] [i_19] [i_21] [i_22]))))) <= (((/* implicit */unsigned long long int) (+(var_3)))))))));
                        }
                        for (signed char i_23 = 0; i_23 < 25; i_23 += 2) 
                        {
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (+((+(((/* implicit */int) var_8)))))))));
                            var_44 = ((/* implicit */unsigned short) (~((((+(2237616614U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_16]))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_24 = 1; i_24 < 24; i_24 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (3363330914U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_16 + 2])))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)4))) : (((((var_13) + (2147483647))) >> (((1270930373) - (1270930354)))))));
                            var_46 = var_15;
                            var_47 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_54 [i_16 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_16]))) : (2460270479954135604ULL)))));
                        }
                    }
                } 
            } 
            var_48 |= ((/* implicit */signed char) 733720806005802918ULL);
        }
    }
    var_49 = ((/* implicit */_Bool) var_7);
    var_50 = ((/* implicit */int) var_0);
}
