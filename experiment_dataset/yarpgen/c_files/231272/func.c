/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231272
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((13019900768024460687ULL) * (((/* implicit */unsigned long long int) 0))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_1 [i_0]))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((13019900768024460710ULL) >> (((((/* implicit */int) (signed char)-34)) + (86)))));
                var_21 += ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~(420590383)));
    var_23 |= ((/* implicit */unsigned int) var_16);
}
