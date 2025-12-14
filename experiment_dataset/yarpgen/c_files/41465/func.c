/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41465
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) 1041913404U);
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((min((((/* implicit */short) var_0)), (min(((short)-6579), (((/* implicit */short) var_12)))))), (var_1)));
    var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))), (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (3253053892U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (780925178U) : (718917877U)))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_6))));
}
