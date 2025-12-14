/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210367
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_17))));
    var_21 += ((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)15)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_16) <= (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) & (((((((/* implicit */int) var_4)) + (((/* implicit */int) var_7)))) ^ (var_18)))));
                var_23 = ((/* implicit */int) max((var_23), (var_18)));
            }
        } 
    } 
}
