/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211239
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_7));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) var_9);
        arr_4 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_1))));
        var_12 = ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))) ? (((/* implicit */unsigned int) ((var_1) | (((/* implicit */int) arr_0 [i_0]))))) : (var_5));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) arr_12 [i_1] [i_2] [4ULL] [19ULL] [(short)16] [i_4]);
                        var_14 = ((/* implicit */int) var_10);
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_16 [i_2] = ((/* implicit */int) ((((((long long int) 15865546051362921560ULL)) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (22)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) max((var_1), (((/* implicit */int) var_8))));
                            var_16 = ((/* implicit */_Bool) (~(-2542164033013124422LL)));
                        }
                        var_17 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((unsigned char) var_1)), (((/* implicit */unsigned char) max((var_8), (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [(short)11])))))))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        arr_24 [2LL] [i_2] [i_7] = ((/* implicit */unsigned long long int) (!(max((arr_18 [i_7] [i_7] [i_7] [20LL] [i_7 - 2] [i_7 - 2]), (arr_18 [i_7 - 1] [i_7 - 2] [12U] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                        var_18 = ((/* implicit */unsigned int) ((var_2) / (((/* implicit */unsigned long long int) (-(var_5))))));
                        var_19 += ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_7])))) + (max((arr_21 [i_7 - 3] [i_7 - 3] [i_7] [i_7] [i_7]), (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_7]))))));
                        arr_25 [i_2] [12U] [i_3] [12U] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_10)), (var_0))))));
                        var_20 = max((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_6))))) ? (((((/* implicit */int) (_Bool)1)) << (((1282256206) - (1282256178))))) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_11 [i_7] [i_7] [i_7 + 1] [i_7 - 2] [i_7] [i_7])));
                    }
                    var_21 = ((/* implicit */unsigned long long int) ((var_1) << (((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) (~(arr_21 [i_2] [i_2] [i_3] [i_1] [i_2])))) : (max((var_7), (((/* implicit */unsigned int) var_9)))))) - (1888885924U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 19; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_22 -= ((long long int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                                arr_32 [i_2] [(_Bool)1] [i_2] [i_2] [i_8] [6U] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
