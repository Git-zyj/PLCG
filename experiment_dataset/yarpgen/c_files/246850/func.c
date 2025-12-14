/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246850
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_8))));
                arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) var_6);
                var_17 = ((/* implicit */_Bool) var_6);
                var_18 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 &= ((/* implicit */signed char) var_14);
}
