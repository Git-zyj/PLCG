/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32809
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
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = var_2;
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)82)))))));
    }
    var_18 = ((/* implicit */long long int) var_6);
}
