/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240423
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 3] [i_1] = (((_Bool)1) ? (16052889632812874881ULL) : (((/* implicit */unsigned long long int) ((max((4294967295U), (2948527322U))) * (((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_1]))) : (4294967295U)))))));
                arr_6 [i_0 - 1] = ((signed char) 33521664U);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((min((var_13), (max((((/* implicit */unsigned int) var_5)), (var_9))))), ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_6)))))));
    var_20 = ((/* implicit */unsigned int) var_12);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (((((/* implicit */_Bool) ((23ULL) & (8934444055061267157ULL)))) ? (((/* implicit */unsigned long long int) ((4079751591U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((~(var_15)))))));
}
