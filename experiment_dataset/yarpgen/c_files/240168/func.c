/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240168
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
    var_15 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (unsigned char)94)), (var_0)))));
    var_16 = ((/* implicit */signed char) 9223372036854775781LL);
    var_17 = ((/* implicit */int) var_11);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((unsigned char) -2147483634)))))) ? ((+(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)25963)), (9223372036854775796LL))))));
                var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned char)102)))));
            }
        } 
    } 
}
