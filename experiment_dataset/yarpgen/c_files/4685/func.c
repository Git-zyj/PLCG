/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4685
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17494365906328583040ULL)) ? ((((_Bool)0) ? (17494365906328583008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4031))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4020)))));
                var_19 = ((/* implicit */_Bool) ((unsigned int) ((arr_4 [i_1] [i_1] [(short)7]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (3916740398U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) : (var_8))));
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) && (((/* implicit */_Bool) var_5)))) ? (((arr_1 [i_0] [i_1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_1] [i_1])))));
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_8))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
}
