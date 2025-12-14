/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35208
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned char) (_Bool)0))))), (min((2043250511U), (var_0))))));
                arr_5 [i_0] [i_1] |= ((/* implicit */_Bool) ((long long int) ((long long int) 1296317875)));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((1022228524088252493ULL), (1022228524088252493ULL)));
}
