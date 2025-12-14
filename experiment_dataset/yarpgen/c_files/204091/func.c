/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204091
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
    var_19 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_2)))))) ? (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (var_6))))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((max((var_16), (((/* implicit */long long int) var_18)))), (min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_2)) ? (var_12) : (var_2))))))))));
                var_22 += ((/* implicit */unsigned int) max((((/* implicit */long long int) min((var_15), (((/* implicit */short) var_10))))), (var_17)));
            }
        } 
    } 
}
