/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247789
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(var_2)));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0])))))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(arr_1 [i_0 + 2]))))));
    }
    var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (8167855104959514421ULL))) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (~(((((var_9) + (2147483647))) << (((((var_9) + (1826255694))) - (13))))))))));
}
