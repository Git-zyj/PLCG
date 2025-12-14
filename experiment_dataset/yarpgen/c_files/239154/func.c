/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239154
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
    var_14 ^= ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)218)))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_6)))))))));
    }
    var_17 = (~((-(var_7))));
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
}
