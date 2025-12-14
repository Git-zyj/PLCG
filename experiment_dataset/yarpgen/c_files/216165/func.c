/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216165
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
    var_18 = ((/* implicit */_Bool) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_5)) * (((/* implicit */int) arr_3 [i_0]))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) min((1098845134U), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)81)) != (((/* implicit */int) (unsigned char)105)))))))) : (4935714638895870952ULL))))));
                var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))) >= (((((/* implicit */_Bool) arr_2 [i_0])) ? (11964275726836130117ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))) ? (max((((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (6482468346873421507ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
            }
        } 
    } 
}
