/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191750
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 *= ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */int) (short)-19343)) > (((/* implicit */int) (short)-29306))))), (max((((/* implicit */short) (_Bool)1)), ((short)19345)))));
                    arr_8 [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)21565)) ? (((arr_4 [i_0 - 3]) ? (((/* implicit */int) (short)-19328)) : (var_0))) : ((~(((/* implicit */int) arr_4 [i_0]))))))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-19343)) ? (7355007602211828471LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            arr_18 [i_2] [(unsigned short)1] [i_2] [i_0] [i_4] [(unsigned char)14] [i_2] = ((((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4])) / (((((/* implicit */int) (unsigned short)32632)) * (((/* implicit */int) (short)31744)))));
                            var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_2] [i_2 + 3] [i_2 + 2] [i_2 + 3])), (var_0)))) ? (((((/* implicit */_Bool) (short)29306)) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) (short)19343)))))) : (((((/* implicit */int) arr_14 [i_1] [i_4] [i_4] [i_4] [i_4 + 1])) ^ (((/* implicit */int) arr_14 [i_3] [(unsigned short)8] [(unsigned short)8] [(signed char)0] [i_4 - 1]))))));
                            arr_19 [(unsigned short)16] [i_0] [i_2 - 3] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) 41984296U)) > (arr_12 [i_0] [i_1 + 4] [(short)0] [5U] [i_2 + 1] [5U])))) | (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_2] [(unsigned short)5] [i_1]))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ ((+(var_6)))));
                            var_17 ^= ((/* implicit */unsigned long long int) (short)-29293);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            arr_22 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)14336))));
                            var_18 = ((/* implicit */long long int) (short)29293);
                        }
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)32904)) < (((/* implicit */int) arr_17 [i_2 - 1] [(short)2] [i_2 + 1] [i_3] [(short)2]))))) : ((+(((/* implicit */int) (short)-22744))))));
                        arr_23 [i_0] [i_1] [19U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-64))))) ? (((((/* implicit */int) (unsigned short)32904)) - (var_8))) : (((((/* implicit */_Bool) arr_1 [i_2 - 2] [i_2 - 2])) ? (arr_1 [i_2 - 1] [16U]) : (var_0)))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_12 [20] [(unsigned short)2] [20] [20] [i_3] [i_3]))) / (((/* implicit */long long int) ((/* implicit */int) (short)-31744))))), (((/* implicit */long long int) (+(var_13)))))))));
                        arr_24 [i_0] [i_2 + 1] [i_1] [i_1 + 4] [i_0] = ((/* implicit */int) ((((min((4252983000U), (((/* implicit */unsigned int) arr_15 [3U] [3U])))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)29306))))) ? (41984298U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32640)))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned short)59079)))) + (2147483647))) << (max((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (short)-31744)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))))));
                        var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_26 [20LL] [i_0] [i_2] [10U]))) & (min((arr_21 [i_0] [i_1] [i_1 + 1] [(unsigned short)2] [i_2] [(unsigned short)2]), (((/* implicit */long long int) (unsigned short)1023))))))));
                        var_23 += var_3;
                        arr_28 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)64513)))) == ((~(((/* implicit */int) (short)31744))))))), (arr_27 [i_0 - 1])));
                    }
                    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((min((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (unsigned short)64512)), (2660623198U))))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-31745)))));
                        var_25 *= ((/* implicit */unsigned long long int) (unsigned short)64513);
                    }
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned long long int) ((4252983000U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((short) var_10)))));
}
