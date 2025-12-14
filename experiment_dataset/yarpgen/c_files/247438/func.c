/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247438
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 216882436);
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [23ULL]);
        arr_4 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    var_20 = var_17;
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    var_22 = (!(((/* implicit */_Bool) var_13)));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (signed char)127))));
}
