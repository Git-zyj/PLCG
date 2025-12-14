/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37009
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
    var_16 = max((4294967295U), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (signed char)29))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))))));
    var_17 = ((var_12) ? ((+(min((((/* implicit */unsigned int) (_Bool)1)), (4294967294U))))) : (4294967295U));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 1])), (max((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((14U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                var_19 = ((/* implicit */signed char) max((min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) | (8U)))))), (((/* implicit */long long int) (((_Bool)1) || ((_Bool)1))))));
                arr_5 [i_0 - 2] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_6 [(signed char)22] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 3]))))));
            }
        } 
    } 
}
