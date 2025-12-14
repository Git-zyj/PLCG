/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237611
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                var_20 = ((/* implicit */_Bool) min((var_20), (var_12)));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14))))), (var_15)));
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) min(((unsigned char)160), (((/* implicit */unsigned char) (_Bool)1)))))))), (var_18)));
}
