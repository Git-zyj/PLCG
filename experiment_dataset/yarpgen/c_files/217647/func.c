/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217647
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) var_9);
                arr_5 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)44944), (((/* implicit */unsigned short) (short)63)))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (signed char)-44))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */long long int) 525636489U)), (((long long int) 776138971U))))));
                var_16 = ((/* implicit */int) (unsigned char)22);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)89))))));
}
