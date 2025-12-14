/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248056
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 *= max((((unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 12916512247722227463ULL))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12916512247722227450ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (12916512247722227441ULL)))) ? (min((12916512247722227463ULL), (5530231825987324175ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1])))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */signed char) var_3);
}
