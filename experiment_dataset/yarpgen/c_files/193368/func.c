/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193368
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
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_12))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_1 [i_0 - 1])))) ? (((((/* implicit */int) arr_0 [i_0] [i_0 - 2])) ^ (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))) : ((-(arr_1 [i_0 + 1])))));
        var_23 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_0 [6ULL] [i_0 - 2])))));
    }
}
