/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239411
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    var_14 = ((/* implicit */long long int) min((((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) ((unsigned short) (-(var_9)))))));
}
