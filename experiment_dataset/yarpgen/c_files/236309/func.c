/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236309
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
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) 4776492893052475994LL)))) ? ((-(3463941585U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47367)))))) != (((((/* implicit */_Bool) (((_Bool)0) ? (-1930758829) : (((/* implicit */int) (unsigned char)80))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_3 [i_0] [(_Bool)1])) : (3400189986924923218LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15471))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)8486))))) : (arr_1 [i_0 - 4] [i_0 - 2])));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1134208280)) ? (1602760) : (((/* implicit */int) (unsigned short)65535))));
                    arr_8 [(short)15] [i_1] [i_0 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (short)20)), (var_2)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_6 [(short)23] [i_2]) : (((/* implicit */int) (short)5294)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)2))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_10)))) / (arr_13 [(unsigned char)2] [4] [i_2] [4] [i_2])))) ? (((/* implicit */unsigned int) max(((-(1683895187))), (((/* implicit */int) (signed char)-32))))) : (var_12)));
                                var_18 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))), ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47362))) : (var_7)))))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -413772878)), (6997606138978375105ULL)))) ? (arr_13 [i_0] [i_1] [i_0 - 2] [i_0] [i_0]) : (((/* implicit */int) (short)9)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 4; i_6 < 14; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_8 + 1])) + (2147483647))) >> (((18446744073709551608ULL) - (18446744073709551577ULL)))));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 13; i_9 += 1) 
                    {
                        var_21 = ((arr_27 [i_9 + 1] [(short)11] [6ULL] [i_9 + 3] [i_9 - 1]) ? (((/* implicit */int) arr_27 [i_9] [i_9 + 2] [(unsigned short)15] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_27 [(unsigned short)11] [i_9] [i_9] [i_9] [i_9 + 2])));
                        arr_30 [i_5] [i_6 - 2] [i_7] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6 + 1] [i_6 - 3])) ? (((/* implicit */unsigned long long int) -1)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 8191)) : (arr_7 [14] [i_6] [i_7])))));
                        var_22 = ((/* implicit */int) var_11);
                        var_23 = ((/* implicit */int) max((var_23), (((((((/* implicit */int) (short)-32)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)41388))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_9))));
                    }
                    arr_31 [i_8 + 1] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2147483618) : (1134208283)))) ? (((arr_1 [i_8 - 1] [i_7]) / (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                    var_25 = ((/* implicit */int) ((((/* implicit */int) (!(var_6)))) > (((/* implicit */int) var_9))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_11 = 4; i_11 < 14; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_6 - 2] [i_5] [(short)11] [i_11] [i_11 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */int) min((var_27), ((~(((arr_26 [(unsigned short)1] [(unsigned short)1] [i_6 - 4] [(unsigned short)1] [i_10] [i_11]) << (((var_2) - (16411366157875441137ULL)))))))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_28 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)41372)) & (((/* implicit */int) (_Bool)1))))));
                        var_29 = ((/* implicit */short) var_12);
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [i_5] [i_6] [i_7])))) ? (arr_35 [i_10]) : (((/* implicit */int) (!(((/* implicit */_Bool) -1365339555)))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        arr_44 [i_5] [i_13] [i_7] [i_13] [0LL] [i_7] &= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_31 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)1)))) / (((((/* implicit */int) (unsigned char)191)) * (((/* implicit */int) var_0))))));
                        var_32 = ((/* implicit */short) (-(arr_13 [i_6 - 3] [i_10] [i_10] [i_10] [6])));
                        var_33 = ((/* implicit */_Bool) var_7);
                    }
                    arr_45 [i_5] [i_7] [i_7] [i_5] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [(short)13] [i_7] [i_6 - 2] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4296186585300648455LL)));
                }
                for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_14] [i_6] [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (arr_9 [i_5] [i_7] [i_14] [i_15 + 1]))))));
                        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_48 [i_5] [(unsigned char)11] [i_5] [i_6 + 1] [i_6 + 1] [i_14] [i_15]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-31))))) : (var_8)));
                    }
                    var_36 = ((/* implicit */short) var_8);
                    var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_19 [(signed char)14] [i_6] [i_6])) : (arr_26 [i_6 - 2] [i_6 - 4] [i_6] [i_6] [i_6 - 3] [i_6])))));
                }
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_6 - 2] [(unsigned char)14] [(unsigned char)8] [i_5] [i_5])) ? (arr_11 [i_6 - 2] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 1] [i_7]) : (((/* implicit */unsigned long long int) arr_41 [i_16] [i_7] [6] [(unsigned char)1] [4] [i_6 - 4] [11]))));
                    var_39 &= ((/* implicit */long long int) var_11);
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 241656332)) ? (arr_16 [i_6 - 3]) : (arr_16 [i_6 + 2])));
                        var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)31207)) ? (1504961045) : (22)));
                        var_42 = ((/* implicit */unsigned short) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    }
                    for (int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        var_43 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_6 + 1] [i_6] [i_6] [i_6] [i_6] [i_6 - 4] [i_6 - 4])) ? (((((/* implicit */_Bool) 17872871335210830881ULL)) ? (((/* implicit */int) (short)-27907)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)1))));
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [(_Bool)1] [i_6 - 2] [i_6 - 4] [i_6] [i_7] [i_16] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_6 - 2] [(signed char)6] [(_Bool)1] [11] [i_16]))) : (arr_58 [i_7] [i_6] [(unsigned short)12] [6] [i_18] [2ULL]))))));
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) -2301255568722875780LL)) ? (((/* implicit */int) (_Bool)1)) : (241656319)));
                        var_46 ^= ((/* implicit */_Bool) -1686844910);
                    }
                    arr_61 [i_5] [i_6] [i_6] = ((/* implicit */signed char) arr_33 [12] [i_5] [i_6 + 2] [i_6]);
                    var_47 = var_4;
                }
                for (short i_19 = 2; i_19 < 12; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        var_48 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_20] [i_19 + 2] [8LL] [8LL] [i_6 - 3] [i_6 - 3])) ? (arr_58 [i_20] [i_19 + 2] [(unsigned short)4] [(unsigned short)4] [i_6] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_49 += ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_53 [i_20] [i_19 + 1] [i_6 - 3] [i_5] [i_5])) : (((/* implicit */int) var_11)));
                    }
                    var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_3 [i_7] [(short)16])))))))));
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) (_Bool)1))));
            }
            var_53 ^= ((/* implicit */int) max((15720257915722829170ULL), (((/* implicit */unsigned long long int) (unsigned short)56094))));
        }
        var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_5] [i_5] [10LL] [i_5] [i_5])) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)12))))) ? (((((/* implicit */_Bool) arr_13 [i_5] [(short)22] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)12)))) : ((-(((/* implicit */int) arr_42 [i_5] [i_5] [(_Bool)1] [i_5] [(short)6])))))))));
        arr_66 [(_Bool)1] |= ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (arr_9 [i_5] [i_5] [i_5] [i_5])));
        var_55 += ((/* implicit */unsigned short) var_7);
    }
}
