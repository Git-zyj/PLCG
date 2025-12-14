/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198695
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
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_16)), ((+(((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) - (arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_4))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 - 1] [(short)16] [(short)16] [i_0 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((var_6) ? (((/* implicit */long long int) var_16)) : (5902241738245063652LL))), ((~(var_11))))))));
}
