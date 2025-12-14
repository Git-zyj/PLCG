/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241219
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (40)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                var_11 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */long long int) ((arr_0 [(_Bool)1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) var_0))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_5))));
}
