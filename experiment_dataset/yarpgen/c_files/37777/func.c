/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37777
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) min((min((((/* implicit */int) var_0)), (var_10))), (max((((/* implicit */int) var_2)), (var_11)))))) : (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_7))));
                var_14 -= (+(((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
