/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242154
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((short) arr_0 [i_0 - 1]);
        var_12 -= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)129)) || (((/* implicit */_Bool) (signed char)127)))) || (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1]))));
    }
    var_13 = ((/* implicit */unsigned int) var_9);
}
