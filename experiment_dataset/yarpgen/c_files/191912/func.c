/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191912
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
    var_11 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)110)), (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [(_Bool)1] [i_0] [(unsigned char)4])), (((((arr_2 [i_1]) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_0 [i_1]))) + (5704318592728819449LL))) - (28LL))))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [2ULL] [i_2] = ((/* implicit */_Bool) arr_2 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) arr_5 [i_1] [i_3]);
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)108)) ? (max((((((/* implicit */_Bool) var_0)) ? (arr_8 [2LL] [i_2] [i_1] [2LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [4] [i_2] [i_2]))))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */short) arr_3 [i_1] [i_2] [i_3]))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)64030)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        var_14 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_4])) : (((/* implicit */int) (signed char)-106)))));
                        var_15 = ((/* implicit */unsigned int) ((short) arr_5 [i_1] [i_1]));
                        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [(unsigned char)8] [(_Bool)1] [2LL] [i_4])) ? (((arr_11 [i_4] [i_2] [(unsigned char)14]) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) (short)-12488)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_3 [6ULL] [i_2] [i_4])))))));
                        var_17 = arr_5 [i_1] [i_1];
                    }
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_18 &= arr_1 [i_0];
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 |= ((/* implicit */_Bool) arr_17 [i_6] [i_1] [(unsigned char)0]);
                        var_20 = ((/* implicit */signed char) (unsigned short)65535);
                    }
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_25 [6LL] [i_1] [(unsigned char)5] [i_1] [i_5] [2LL] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 7175687087210975543LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_1] [i_5 - 1]))) : (max((((/* implicit */unsigned int) arr_6 [i_7] [i_5] [2LL])), (arr_8 [i_1] [i_1] [i_1] [i_1])))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65524)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) -6015631591912673282LL)))))));
                        var_22 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)24161))) == (-7175687087210975528LL)));
                        arr_26 [i_1] [i_5] [i_1] [i_5] [i_1] [5] = ((/* implicit */long long int) arr_6 [i_5] [10] [i_5]);
                    }
                }
                arr_27 [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((arr_24 [i_0] [i_0] [i_1] [0LL]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))), (arr_2 [i_0])));
                arr_28 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) 4294967281U))), (896U)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) ((short) var_3))), (((7877685983191524809LL) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
}
