/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22689
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (var_15)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (-8500409029938022172LL))) : (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_3)))))))) ? (((var_9) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (390073319165389580ULL))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))))))));
                var_19 = ((/* implicit */signed char) 2630992120U);
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (min((1663975178U), (((/* implicit */unsigned int) (signed char)-102)))) : (3873841807U)))) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((1663975176U) << (((((/* implicit */int) (signed char)124)) - (121))))) : (1663975191U))) : (var_16)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (signed char)-102);
}
