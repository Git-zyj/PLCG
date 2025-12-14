/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245208
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
    var_13 = min((min((min((var_5), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_0))))) < ((+(((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 2505085345U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (288230376151711743LL))));
        arr_2 [i_0] [i_0] = var_2;
    }
    var_15 = ((/* implicit */unsigned int) ((var_7) - (((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
}
