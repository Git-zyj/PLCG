/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53993
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
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)62))))) : ((+(var_0))))), (965488565287280994ULL))))));
                var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (297935102U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                var_22 -= min(((((!(((/* implicit */_Bool) var_5)))) ? (var_0) : (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) (signed char)97)));
                var_23 = ((/* implicit */unsigned char) 965488565287281010ULL);
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 2541890395U))));
}
