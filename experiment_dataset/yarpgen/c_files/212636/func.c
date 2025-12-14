/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212636
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1 - 2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0] [i_0])))) || (((/* implicit */_Bool) min((arr_2 [i_0] [i_1] [i_2]), (arr_2 [i_1 - 1] [i_1 - 1] [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) ^ (var_9)));
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
                        arr_11 [i_2] = ((/* implicit */unsigned int) ((4329327034368ULL) == (((/* implicit */unsigned long long int) var_5))));
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_2] = ((/* implicit */_Bool) ((long long int) min((arr_12 [i_2] [i_2 - 1]), (arr_12 [i_2] [i_1 - 2]))));
                        arr_17 [i_1] [i_2 - 1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_4])) >> (((var_1) + (49123946)))))), (4329327034364ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4329327034368ULL), (18446744073709551606ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2 - 1] [i_4] [i_1 + 1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_4]))))) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                        arr_18 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((arr_4 [i_0] [i_2]), ((signed char)-122))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_1 + 1] [i_1 - 2])) | (((((/* implicit */_Bool) arr_7 [i_4] [i_1 + 1] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_4] [i_2 - 1] [i_2] [i_2])) : (-134217728)))))) : (max((((arr_12 [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (~(var_1))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((2147483647), (((/* implicit */int) (_Bool)1))));
                        arr_23 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_5 - 2] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_5] [i_2 - 1] [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)0)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_1])), ((unsigned char)96))))) : (min((((/* implicit */unsigned long long int) arr_15 [i_5 + 2])), (arr_2 [i_1 - 2] [i_1 - 2] [i_5 + 1])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_28 [i_2] [i_1 + 1] [i_1 + 1] [i_5] [i_6] = ((/* implicit */unsigned short) min((arr_14 [i_0] [i_2]), (((/* implicit */unsigned char) var_6))));
                            arr_29 [i_0] [i_1] [i_2 - 1] [i_5 - 3] [i_1] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_5] [i_5 + 2] [i_1] [i_5]))))));
                            arr_30 [i_1] [i_6] [i_6] = ((/* implicit */unsigned char) (unsigned short)48113);
                            arr_31 [i_0] [i_2] [i_2 - 1] [i_5 + 1] [i_5 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 1])))) << ((((+(((/* implicit */int) var_3)))) + (88)))));
                        }
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 6857653015462480625LL)))) ? (((((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_2 - 1])) * (((/* implicit */int) arr_13 [i_0] [i_0] [i_2 - 1])))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned short) ((((8611739460392798541ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)113))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                arr_37 [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) != (-4520837995329012640LL)));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_44 [i_8] [i_8] [i_9] [i_10] [i_10] [i_9] [i_10] = (((!(((/* implicit */_Bool) (signed char)78)))) ? (4520837995329012640LL) : (((/* implicit */long long int) 8U)));
                                arr_45 [i_7] [i_8] [6U] [i_9] [6U] [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8]))) < (arr_42 [18ULL] [i_8] [i_9] [i_8] [i_11]))))) ^ (((long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7]))))))));
                            }
                        } 
                    } 
                    arr_46 [i_7] [i_7] [14ULL] [i_8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [(unsigned short)8] [i_7] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_7]))))) : (((/* implicit */int) arr_38 [i_7] [i_8] [i_8]))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_50 [6LL] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((0) / (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_7))));
                    arr_51 [i_8] [(unsigned short)14] = (+(((arr_48 [i_7] [i_7] [i_8] [i_8]) % (arr_48 [i_7] [i_8] [i_12] [i_12]))));
                    arr_52 [14U] [14U] = ((/* implicit */unsigned short) arr_41 [i_12] [i_7] [i_7] [i_7]);
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_56 [i_12] [i_12] = ((/* implicit */signed char) ((((var_6) ? (((var_8) >> (((var_1) + (49123971))))) : (((((/* implicit */_Bool) 4294967276U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))));
                        arr_57 [i_7] [i_13] [i_12] [i_13] = ((/* implicit */signed char) (+(arr_55 [i_7] [i_7] [i_7] [i_13])));
                        arr_58 [i_7] [i_7] [i_12] [i_13] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)99)) || (((/* implicit */_Bool) 9380236070232336614ULL))))), (3U))) >> (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-50))) | (((var_0) ? (-5921372048665661517LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) + (4LL)))));
                        arr_59 [i_7] [i_8] [i_13] [i_7] = ((/* implicit */long long int) ((signed char) (signed char)65));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            arr_64 [i_7] [i_8] [i_12] [i_7] [i_13] = ((/* implicit */unsigned short) var_5);
                            arr_65 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((_Bool) (signed char)-4));
                        }
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 18; i_15 += 3) 
                    {
                        arr_70 [(signed char)16] [i_8] [i_8] [i_8] [i_15 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) < (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_53 [i_7] [i_7] [i_7] [14ULL]))))))) ? ((-(((/* implicit */int) (unsigned short)28081)))) : ((~(((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_49 [i_8] [i_8] [i_12]))))))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            arr_75 [i_7] [i_8] [i_8] [i_12] [i_15 + 2] [i_12] [i_16] = ((/* implicit */signed char) ((unsigned short) 4222552797U));
                            arr_76 [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_33 [i_15 + 2])) && (((/* implicit */_Bool) arr_36 [i_15 + 1])))) ? ((-(((/* implicit */int) arr_33 [i_15 + 2])))) : ((+(((/* implicit */int) (_Bool)0))))));
                            arr_77 [i_12] [i_16] [i_12] [i_16] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_7] [i_8] [i_7])) ? (arr_43 [i_7] [i_8] [i_16] [i_7] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned long long int) arr_42 [i_16] [i_15 + 1] [i_15 - 1] [i_16] [i_15 - 1])), (15013907876589206847ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_3)))))));
                            arr_78 [i_16] [i_15 + 1] [i_12] [i_7] [i_16] = ((/* implicit */unsigned short) arr_71 [i_7] [i_7]);
                        }
                    }
                }
                arr_79 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) var_4);
                arr_80 [i_7] [i_8] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}
