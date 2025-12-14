/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43872
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
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_1)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_16))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (-9223372036854775805LL))) : (((/* implicit */long long int) (+(var_15))))));
                var_19 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (min((var_8), (var_9))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (+(var_7)));
    var_21 -= ((/* implicit */unsigned char) var_9);
}
