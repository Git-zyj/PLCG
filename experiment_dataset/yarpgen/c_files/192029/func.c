/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192029
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
    var_11 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) (signed char)-1))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = arr_1 [i_0];
        var_13 ^= ((/* implicit */unsigned long long int) arr_0 [(short)18] [i_0]);
    }
}
