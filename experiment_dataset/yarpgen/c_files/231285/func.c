/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231285
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (var_6)))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_6 [i_0]) : (arr_6 [i_0 + 1]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-125))))) : (var_4)))));
                var_16 += min((((/* implicit */unsigned long long int) arr_0 [3ULL] [i_1])), (var_11));
                var_17 = (_Bool)1;
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_5))))))) : (min((18446744073709551615ULL), (min((((/* implicit */unsigned long long int) (signed char)77)), (var_9))))))))));
}
