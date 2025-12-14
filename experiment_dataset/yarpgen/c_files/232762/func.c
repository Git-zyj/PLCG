/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232762
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((arr_4 [i_1] [i_1] [i_2]) << (((((((/* implicit */_Bool) (unsigned short)16)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20840))))) - (4294967295U)))))) : (((/* implicit */unsigned char) ((((arr_4 [i_1] [i_1] [i_2]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (unsigned short)16)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20840))))) - (4294967295U))))));
                    var_10 = ((/* implicit */unsigned short) var_7);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */short) 2147483647);
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)240))));
                            var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 3]))) : (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */long long int) 2102299953U)) : (1804325903395178135LL)))));
                        }
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */int) arr_1 [i_0] [(short)0]);
                            var_15 = ((/* implicit */signed char) arr_12 [i_0] [i_1 + 1] [i_2] [i_2] [i_5]);
                            arr_17 [i_1 + 3] [i_1] [0LL] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_8 [i_2] [i_3 + 2])) : (((/* implicit */int) (unsigned char)240))));
                            arr_18 [i_1] [i_1 + 1] [4U] [(signed char)13] [(unsigned short)6] [i_5] = arr_10 [i_1 + 2] [i_3 + 3] [i_5] [i_5];
                            var_16 *= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) << (((/* implicit */int) (unsigned char)4))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (var_9)));
                            var_18 *= (!(((/* implicit */_Bool) 19834609066868129ULL)));
                            var_19 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)2] [i_1 + 3] [i_2] [i_3 + 2]))) != (arr_6 [i_2] [i_6])));
                            arr_23 [i_1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) var_0))))));
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 4194303))) ? (((arr_11 [i_0] [i_1] [i_0] [i_3 + 2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)132)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 *= ((/* implicit */_Bool) var_0);
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((18097606735640638683ULL) * (((/* implicit */unsigned long long int) 7341771934050997500LL))));
                            var_22 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_3 + 2] [i_7]);
                        }
                        arr_29 [i_2] [i_2] [i_0] [i_2] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))));
                        /* LoopSeq 1 */
                        for (int i_8 = 3; i_8 < 18; i_8 += 4) 
                        {
                            arr_34 [i_0] [(signed char)18] [i_2] [i_0] [i_3 + 3] [(unsigned short)12] [i_2] |= ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) var_3)))));
                            var_23 = ((/* implicit */unsigned char) arr_16 [i_1 + 2] [i_1 + 2] [i_3 + 3] [i_8 - 2] [i_8 + 2] [i_8 - 3]);
                            arr_35 [i_8] [i_1 - 1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) var_9));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_38 [i_0] [i_0] [i_2] |= ((short) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_9]))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (arr_1 [i_1 + 2] [i_1 + 2])));
                        var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2])) ? (((/* implicit */int) var_1)) : (var_9)));
                        var_26 |= ((/* implicit */long long int) arr_37 [i_0] [i_0] [i_0] [i_9]);
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_4)))) ? ((+(((/* implicit */int) (unsigned char)255)))) : ((+(((/* implicit */int) arr_40 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4158928667U)))))) : (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_19 [i_0] [(unsigned short)19] [i_0] [i_11] [i_0] [(unsigned short)19])))))));
                            arr_43 [0ULL] [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11] [i_10] [(unsigned char)1] [(unsigned char)1] [i_0])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [(unsigned short)1] [(unsigned char)16] [(unsigned char)16]))))) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (signed char)104)))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)80)) <= (((/* implicit */int) (signed char)-117))))), ((unsigned char)242))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 |= var_1;
    /* LoopSeq 1 */
    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_29 = ((/* implicit */short) var_4);
        /* LoopSeq 2 */
        for (unsigned char i_13 = 1; i_13 < 21; i_13 += 3) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-14)) * (((/* implicit */int) arr_46 [i_13 - 1] [i_12]))))))));
            var_31 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) : (2526333622U)));
        }
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            arr_51 [i_12] [i_12] = ((/* implicit */signed char) min((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_46 [i_12] [i_12])) ^ (((/* implicit */int) arr_46 [i_12] [i_14]))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)175)))))) < (((/* implicit */int) min((((/* implicit */unsigned short) (short)8191)), (max((((/* implicit */unsigned short) arr_49 [i_14] [i_12] [i_12])), (arr_44 [i_12]))))))));
            var_33 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
        }
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 22; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                        {
                            arr_61 [i_15] [i_15] [i_16] [i_17] [i_18] = arr_46 [i_15 + 1] [i_17];
                            arr_62 [i_15] [(unsigned char)22] [i_16] [(signed char)2] [i_12] |= ((/* implicit */unsigned char) ((unsigned short) arr_44 [i_18]));
                        }
                        /* LoopSeq 1 */
                        for (short i_19 = 3; i_19 < 20; i_19 += 4) 
                        {
                            arr_67 [i_12] [i_15] [i_16] [14ULL] [i_15] [i_19 + 2] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) ((-882740656) <= (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (72057594037927935LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023)))))));
                            var_34 = ((/* implicit */int) ((unsigned char) arr_66 [i_17] [i_15] [i_17] [i_17]));
                            var_35 |= ((/* implicit */_Bool) 7796161735160297626ULL);
                            var_36 |= ((/* implicit */short) (-(((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (short)15996))))));
                            var_37 = ((/* implicit */signed char) var_1);
                        }
                        var_38 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2227578926659396071LL)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)15))));
                        /* LoopSeq 2 */
                        for (int i_20 = 0; i_20 < 23; i_20 += 4) 
                        {
                            arr_72 [i_12] [i_15] [i_15] [i_16] [i_17] [i_16] [i_20] = ((/* implicit */unsigned int) (signed char)127);
                            arr_73 [i_12] [i_15] [i_15] [(short)8] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_65 [i_12] [i_12] [i_12] [i_12] [i_12] [i_15])) / (((/* implicit */int) var_2))))));
                            arr_74 [i_12] [i_20] [10] [i_17] [i_20] |= ((/* implicit */short) (-(4294967295U)));
                            var_39 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_65 [i_15] [i_12] [i_17] [i_16] [i_12] [i_15])) ? (((/* implicit */int) (unsigned short)37009)) : (((/* implicit */int) var_3)))));
                        }
                        for (unsigned int i_21 = 2; i_21 < 21; i_21 += 3) 
                        {
                            arr_78 [i_12] [i_15] [i_15] [i_17] [i_17] [i_21] = ((/* implicit */_Bool) 65535);
                            arr_79 [i_12] [5LL] [(short)2] [i_15] [i_21] = ((/* implicit */unsigned int) ((var_4) > (((/* implicit */unsigned long long int) arr_60 [(signed char)18] [(signed char)18]))));
                            var_40 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_15] [i_15 - 1] [i_16] [i_15] [(unsigned short)17]))) | (((unsigned int) (signed char)74))));
                        }
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_23 = 2; i_23 < 22; i_23 += 4) 
                        {
                            var_41 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)64510)) + (((/* implicit */int) arr_54 [i_23 + 1] [i_12])))) + (((((/* implicit */_Bool) ((29ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [(unsigned char)18] [i_16] [(unsigned char)18])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_54 [i_15] [i_12]))))));
                            var_42 = ((/* implicit */signed char) 18446744073709551615ULL);
                        }
                        for (unsigned char i_24 = 1; i_24 < 21; i_24 += 4) 
                        {
                            var_43 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_81 [i_12] [i_12] [i_15 - 1] [i_12] [i_24 + 2]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_77 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_12] [i_24 + 2] [i_24 - 1] [i_24 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_81 [i_15] [i_15 - 1] [i_15 - 1] [i_16] [i_24 + 2]))))));
                            arr_87 [i_15] [i_12] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_15 + 1]))) & (arr_80 [i_15]))))));
                            var_44 *= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_71 [i_22])) ? (((/* implicit */int) arr_58 [i_15 + 1] [i_22] [(unsigned short)0] [i_15 + 1] [i_15 + 1] [i_12] [16ULL])) : (((/* implicit */int) (signed char)-39))))));
                            var_45 = ((/* implicit */unsigned char) max((((/* implicit */long long int) 2764341413U)), (-538451507801041519LL)));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            arr_90 [i_15] [(signed char)10] [i_16] [i_15] [i_25] = ((/* implicit */unsigned char) (((-(((var_9) / (((/* implicit */int) (signed char)107)))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_84 [i_12] [i_15 + 1] [i_12] [i_15 + 1] [i_22] [i_22] [i_15 - 1])) : (((/* implicit */int) var_5))))));
                            arr_91 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_48 [i_25]), (arr_48 [i_25])))) ? ((-(arr_86 [i_12] [i_15] [i_15 - 1] [i_16] [i_15] [i_22] [(unsigned char)4]))) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_2)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            arr_94 [i_26] [i_15] [i_22] [i_12] [i_15] [i_12] = ((/* implicit */unsigned int) (short)31);
                            var_46 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8192)) << (((((/* implicit */int) (signed char)29)) - (25)))));
                            var_47 = ((/* implicit */unsigned short) arr_75 [i_15] [13U] [(short)7] [i_15 - 1] [13U] [i_15]);
                        }
                        var_48 *= ((/* implicit */int) 9223372036854775807LL);
                    }
                    for (short i_27 = 0; i_27 < 23; i_27 += 4) 
                    {
                        arr_99 [i_12] [i_15] [i_12] = ((/* implicit */_Bool) (~(-678365788979025787LL)));
                        var_49 = ((/* implicit */unsigned int) (+(-4066341960827455520LL)));
                    }
                    arr_100 [i_16] [i_15] [i_15] [i_12] = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)3))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_86 [i_15] [i_15 - 1] [i_16] [i_16] [i_16] [i_15 + 1] [i_15 - 1])) % (arr_63 [i_12] [i_15] [i_15 + 1] [i_15] [i_12]))))));
                }
            } 
        } 
        var_50 = ((/* implicit */short) (-(((/* implicit */int) (signed char)29))));
    }
    var_51 *= ((/* implicit */unsigned char) (_Bool)1);
}
