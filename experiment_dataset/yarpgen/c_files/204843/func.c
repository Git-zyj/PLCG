/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204843
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), ((-(3569246018464577172LL)))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [i_1] [i_0])))) ? (((unsigned int) arr_4 [i_1])) : (((((/* implicit */_Bool) min((3569246018464577192LL), (3569246018464577187LL)))) ? ((~(arr_2 [i_0] [i_0] [i_1]))) : (((unsigned int) -3569246018464577192LL))))));
            }
        } 
    } 
    var_21 = (-(((((/* implicit */_Bool) var_8)) ? (var_15) : (((((/* implicit */_Bool) -509952219992964621LL)) ? (28LL) : (((/* implicit */long long int) 3890965328U)))))));
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_16))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_18)) : (3569246018464577191LL))) : ((-(3569246018464577187LL)))))) ? (((long long int) (~(var_3)))) : (((/* implicit */long long int) ((unsigned int) var_18))));
    var_23 = ((/* implicit */long long int) min((var_14), (var_9)));
}
