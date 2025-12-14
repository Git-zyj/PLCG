/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50017
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
    var_15 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_13)), (arr_2 [6U])));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (max((var_2), (var_14))) : (((/* implicit */unsigned long long int) (~(-1086597166))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [10U] [i_1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0)))))));
                var_17 -= arr_1 [(unsigned short)2];
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_14 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                            arr_15 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 2])), ((~(arr_2 [i_0])))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] = max((((/* implicit */unsigned short) arr_1 [i_1 - 2])), ((unsigned short)65535));
            }
        } 
    } 
}
