/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47178
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
    var_20 |= ((/* implicit */long long int) var_8);
    var_21 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
        var_22 = ((/* implicit */unsigned char) var_18);
    }
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        var_23 |= max((arr_0 [i_1 - 3]), (((/* implicit */unsigned char) arr_1 [i_1] [i_1])));
        arr_6 [(unsigned char)8] |= ((/* implicit */signed char) var_15);
    }
}
