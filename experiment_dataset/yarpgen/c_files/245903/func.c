/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245903
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_5)))) >= (((((/* implicit */int) max((arr_9 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */short) var_7))))) >> (max((((/* implicit */int) (_Bool)1)), (-442468103)))))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(arr_8 [i_0] [i_1] [i_1] [i_3])));
                        var_12 = ((/* implicit */short) -442468103);
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9137)) ? (442468102) : (-442468104)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 - 1] [i_1 + 1]))) - (((arr_0 [i_1 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_3])))));
                            var_14 += ((/* implicit */_Bool) (+(max((arr_4 [i_1] [i_1 + 1]), (((/* implicit */unsigned int) arr_14 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_4 - 1]))))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-8727189832590754960LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_0] [i_1 - 1]), (arr_15 [i_1 + 1] [i_1 - 1] [i_3] [i_0] [i_4 - 1] [i_4] [i_4 - 1]))))) : (var_2)));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 442468096)) : (min((arr_12 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) (_Bool)1))))))));
                            var_17 = ((/* implicit */long long int) (short)30367);
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */short) (-((+(((/* implicit */int) var_6))))));
                            var_19 |= var_7;
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 14937854269803830480ULL)) ? (((arr_5 [i_1] [6LL]) | (((/* implicit */long long int) arr_12 [i_1] [i_2] [i_1] [i_6])))) : (((/* implicit */long long int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))) * (((((/* implicit */_Bool) -442468102)) ? (((/* implicit */int) arr_3 [i_0] [i_6])) : (((/* implicit */int) var_7))))));
                        }
                        var_22 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)3)) & (((/* implicit */int) (short)30367))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            var_23 += ((/* implicit */signed char) var_2);
                            arr_27 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = ((var_0) >= (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) 262136U)) || ((_Bool)0)))), ((short)17058)))));
                        }
                    }
                    for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        arr_30 [12] [12] [12] [12] |= ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)0] [i_8])) : (((/* implicit */int) arr_20 [i_0] [(short)16] [i_2] [(short)16] [i_8 + 1])));
                        var_24 *= ((/* implicit */_Bool) (~((~(arr_12 [i_0] [i_1 + 1] [i_8] [i_1 - 1])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_9] [i_2] [i_0] [i_0] [i_1 - 1]))) <= (var_3)));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_26 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 442468099))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-442468104)))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_1 + 1] [i_0] [i_1 - 1] [i_2] [i_2]))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (+(arr_12 [i_0] [i_1] [i_2] [i_1])))))))));
                            arr_36 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (((~(var_2))) | (((/* implicit */long long int) arr_17 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1]))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967276U)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) arr_3 [i_0] [i_0])))) : (-442468119)));
                        }
                        for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            arr_41 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_2] [i_9] [i_1] [i_1]))) : (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])));
                            arr_42 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_43 [i_0] [i_1 - 1] [i_2] [i_2] [i_9] [i_11] [i_9] &= ((/* implicit */signed char) -442468110);
                            arr_44 [i_0] [i_9] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_0] [i_2] [i_2] [i_11]))) : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_29 |= ((/* implicit */_Bool) (signed char)-5);
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                    {
                        arr_49 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [i_2] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_0] [i_1 + 1] [i_12] [i_1] [i_2] [i_0]))) : (arr_17 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_2])))) ? (((/* implicit */int) arr_34 [i_0] [i_1] [i_2] [i_12] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_1 + 1] [i_0] [i_1 + 1]))));
                        arr_50 [i_0] [i_1 - 1] [i_2] [i_12] [i_12] &= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30395))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_13 = 4; i_13 < 16; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            arr_56 [i_0] [i_13 + 2] [i_2] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_1 + 1] [i_2] [i_13] [i_14])) & (((/* implicit */int) arr_25 [i_14] [i_13] [i_2] [i_1 + 1] [i_0]))))) ? (var_0) : (((/* implicit */int) max((arr_25 [i_0] [i_0] [i_2] [i_13] [i_14]), (arr_25 [i_0] [i_1] [i_2] [i_0] [i_14]))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_13 - 1] [i_13 - 1] [i_1 - 1] [i_1 + 1] [i_1])) * (((/* implicit */int) ((((/* implicit */int) arr_18 [i_1 + 1] [i_1 - 1] [i_13 - 1])) >= (((/* implicit */int) var_1)))))));
                            var_31 = ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) arr_54 [i_0] [i_1] [i_0] [i_13] [i_13])) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (unsigned char)220)))), (((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (unsigned short)65527))))))));
                            arr_57 [i_0] [i_14] = ((/* implicit */unsigned int) arr_3 [i_13] [i_1 + 1]);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            arr_61 [i_0] [i_1] [i_2] [i_13] [i_2] [i_0] [i_15] = arr_19 [i_0] [i_1] [i_1] [i_1] [i_2] [i_13 + 4] [i_13 + 4];
                            var_32 |= ((/* implicit */signed char) ((arr_8 [i_0] [i_1] [i_1 - 1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) min((arr_60 [i_1 + 1] [i_2] [i_15] [i_2] [i_15]), (arr_60 [i_1 - 1] [i_1] [i_1 - 1] [i_15] [i_1 - 1])))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            arr_64 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_28 [i_0] [i_1 + 1] [i_2] [i_0] [i_16]))));
                            var_33 ^= ((/* implicit */signed char) arr_32 [(unsigned char)2] [i_2]);
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                    }
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        var_35 |= ((/* implicit */int) (-(3583420675U)));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1711190489U))))));
                        var_37 = ((/* implicit */long long int) max((var_37), (arr_53 [i_0] [i_1 - 1] [i_2] [i_17] [i_17])));
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 4) 
                        {
                            arr_70 [i_0] = ((/* implicit */int) min((min((((/* implicit */long long int) (short)30343)), (((((/* implicit */_Bool) arr_8 [i_18] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) 399583629U)) : (arr_59 [i_0] [i_0] [i_2] [i_18] [i_18] [i_18]))))), (((/* implicit */long long int) arr_54 [i_0] [i_0] [i_0] [i_1 + 1] [i_1 + 1]))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_0] [i_18])) : (((/* implicit */int) ((((/* implicit */_Bool) 9374386755374610850ULL)) && (((/* implicit */_Bool) (short)-30368)))))));
                            arr_71 [i_0] [i_1] [i_0] [i_17] [i_18] = ((/* implicit */long long int) min((((/* implicit */int) var_1)), (max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (short)30368))))))));
                        }
                        arr_72 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) 1711190489U)) ? (-7773735717535143966LL) : (((/* implicit */long long int) (~(((/* implicit */int) (short)30358)))))))));
                    }
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned char) ((max((min((((/* implicit */long long int) (unsigned char)242)), (-6458392033405308792LL))), (((/* implicit */long long int) var_7)))) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 411281143U)) ? (2598385536U) : (((/* implicit */unsigned int) -1353011707))));
}
