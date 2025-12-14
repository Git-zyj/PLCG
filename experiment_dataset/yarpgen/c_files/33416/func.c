/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33416
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_19))));
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_19)), (var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1])))))));
                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (((!((_Bool)1))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) : (min((((/* implicit */long long int) var_18)), (((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_25 = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned long long int) var_0))));
}
