/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203897
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
    var_14 = ((/* implicit */signed char) (short)6);
    var_15 = ((/* implicit */unsigned long long int) var_0);
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) var_0));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (signed char)12))));
                var_18 -= ((/* implicit */long long int) arr_0 [i_0 + 1]);
            }
        } 
    } 
}
