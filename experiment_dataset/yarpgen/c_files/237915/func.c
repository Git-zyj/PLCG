/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237915
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || ((!(((/* implicit */_Bool) var_4)))))) ? (1247166325) : (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 + 1])), (var_11))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [i_0 + 1])))) * (((((/* implicit */int) var_2)) + (((/* implicit */int) var_1))))));
    }
}
