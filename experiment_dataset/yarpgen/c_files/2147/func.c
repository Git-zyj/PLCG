/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2147
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (var_6)))) ? ((+(((/* implicit */int) (unsigned short)8326)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_9)))))), (2590408234U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */long long int) arr_1 [i_2])) ^ (arr_5 [i_0] [(short)16] [(short)16]))))) ? (((/* implicit */int) (unsigned short)23765)) : (((/* implicit */int) (unsigned short)57209))));
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) var_7)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2097120U)) ? (((/* implicit */int) (unsigned short)11337)) : (((/* implicit */int) (unsigned char)255))))) ? ((+(min((((/* implicit */long long int) var_7)), (562948879679488LL))))) : (((/* implicit */long long int) arr_1 [(unsigned short)6])))))));
                                var_13 += ((/* implicit */unsigned int) (~(arr_0 [i_4] [i_3 - 2])));
                                var_14 = max((min((((((/* implicit */_Bool) 355417307U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2263600826U)) || (((/* implicit */_Bool) -1276966663))))))), (((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(unsigned char)21] [i_0] [i_0])) || (((/* implicit */_Bool) var_1))))), (max((((/* implicit */short) arr_3 [i_1] [i_2] [i_3])), ((short)32767)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
