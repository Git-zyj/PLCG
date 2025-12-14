/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42481
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)63820)))))))));
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)11]))) / (arr_0 [4U] [i_1]))))), (var_13)));
                            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */int) arr_10 [i_2]);
                            arr_13 [i_3] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]);
                arr_14 [5LL] [i_0] [i_1] = ((/* implicit */_Bool) max(((-(max((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_1] [i_1] [i_0]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                arr_15 [i_1] [(short)1] = ((/* implicit */short) max((((/* implicit */long long int) arr_7 [i_1] [i_0] [i_0] [i_0])), (((arr_2 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1716))) : (36028522141057024LL)))));
                arr_16 [(unsigned char)4] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))) >= (((((/* implicit */_Bool) ((36028522141057024LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-32)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20459))) >= (4009961004U))))) : (134217696U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((4841425751899704017ULL), (((/* implicit */unsigned long long int) var_7))))) ? (min((var_2), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_17 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_7) ? (((var_6) >> (((var_6) - (922338646U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))))), ((-(max((var_2), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
}
