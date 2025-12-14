/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221143
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
        var_14 |= ((unsigned int) arr_1 [i_0]);
        var_15 *= ((/* implicit */short) (-(((((/* implicit */_Bool) min(((unsigned short)15791), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [(signed char)3])))))));
        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_12 [i_1] [i_2] [(short)6] [i_4] [i_4] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))) + (var_0))));
                        var_17 = max((arr_6 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (var_6)))) : (min((((/* implicit */int) arr_8 [(short)2] [(short)2] [i_3] [0])), (var_3)))))));
                        var_18 = ((/* implicit */unsigned char) arr_2 [i_3]);
                        var_19 ^= min((((/* implicit */int) min((arr_3 [i_3 - 1]), (((/* implicit */unsigned short) arr_8 [i_3 - 1] [0U] [i_3 - 2] [i_2]))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_6)))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_2)))))));
                        arr_13 [(unsigned short)6] [(unsigned short)6] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((666876034300172487ULL) | (((/* implicit */unsigned long long int) arr_6 [12U])))) : (((/* implicit */unsigned long long int) (-(arr_6 [(unsigned char)12]))))));
                    }
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */int) var_8);
                        arr_17 [i_2] = ((/* implicit */unsigned char) (unsigned short)65535);
                        arr_18 [i_2] = ((/* implicit */int) (+(max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (min((var_5), (var_8)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_21 [(signed char)6] [i_2] [(_Bool)1] [i_6] |= ((/* implicit */short) min((min(((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) arr_16 [(unsigned char)8] [i_1] [10ULL] [10ULL] [i_1])))), (min((min((var_0), (((/* implicit */unsigned int) arr_1 [i_1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (2147483647))))))));
                        var_21 += ((/* implicit */short) ((max(((+(((/* implicit */int) arr_9 [4] [i_3] [i_3] [i_6])))), (((/* implicit */int) ((var_3) > (((/* implicit */int) arr_2 [i_2]))))))) == (max((((/* implicit */int) arr_10 [0ULL] [(unsigned short)12] [i_3 - 3] [0ULL])), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            {
                                arr_27 [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_1])), (arr_2 [i_3])))) ? ((+(var_5))) : (min((((/* implicit */long long int) arr_5 [(short)2] [i_2])), (9223372036854775807LL))))), (var_7)));
                                var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [(unsigned char)9] [(unsigned short)1] [i_2]))));
                                var_23 = ((/* implicit */_Bool) arr_25 [i_8 - 1] [12ULL] [i_3 - 1] [5LL] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_1] = ((/* implicit */unsigned long long int) (signed char)-32);
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max(((-(((/* implicit */int) var_2)))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9]))) == (1008904302U))) ? (arr_30 [i_9]) : ((-(((/* implicit */int) var_2)))))))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9]))))))) << (((((unsigned long long int) arr_1 [i_9])) - (12693ULL))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_26 += ((/* implicit */_Bool) (+(3437521579U)));
        arr_33 [i_10] = var_9;
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_3)))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_10]))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_10])) ? (arr_30 [i_11]) : (arr_30 [i_10]))))));
            var_30 *= ((/* implicit */int) ((_Bool) arr_30 [i_11]));
        }
    }
    var_31 ^= ((/* implicit */unsigned long long int) min((var_7), ((+(((var_8) % (var_7)))))));
    var_32 += ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) var_10)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_10))));
                var_34 = ((/* implicit */long long int) ((unsigned char) ((((var_6) + (2147483647))) << (((((/* implicit */int) min((arr_38 [i_13]), (var_9)))) - (43262))))));
                var_35 |= ((/* implicit */unsigned short) ((((_Bool) arr_36 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [15LL]))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_13])) + (((/* implicit */int) var_12))))) ? (min((arr_40 [i_12]), (((/* implicit */unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [i_12])) : (((/* implicit */int) var_10)))))))));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) min((min((arr_40 [i_12]), (((/* implicit */unsigned long long int) arr_39 [i_12])))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (var_2)))))))));
            }
        } 
    } 
}
