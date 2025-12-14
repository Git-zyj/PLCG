/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197953
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_12))));
                var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (max((((/* implicit */long long int) var_14)), (arr_0 [i_0])))));
                var_17 *= ((_Bool) var_11);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) (-(var_0)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
