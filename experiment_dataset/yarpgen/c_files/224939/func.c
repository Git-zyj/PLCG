/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224939
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
    var_15 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_0)))))) & (((/* implicit */int) var_5))));
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_6)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [(_Bool)1])) * (((/* implicit */int) arr_0 [i_0])))) != (((((/* implicit */int) var_8)) & (((/* implicit */int) var_2))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (((~(((((/* implicit */long long int) 250030639U)) ^ (-2038796147638270141LL))))) >> (((((2914166322U) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) << (((262143U) - (262112U)))))));
    }
}
