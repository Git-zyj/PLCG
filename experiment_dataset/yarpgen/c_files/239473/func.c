/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239473
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
    var_18 = ((/* implicit */signed char) (!((_Bool)1)));
    var_19 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (~(-4565553118143594872LL))))) ? (var_9) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_0 + 1])), (var_0))))));
                arr_5 [i_0] [6] |= ((/* implicit */short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) 4029118916502291809LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (4565553118143594887LL))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))))));
}
