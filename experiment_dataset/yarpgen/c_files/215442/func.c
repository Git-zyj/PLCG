/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215442
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
    var_17 ^= ((/* implicit */signed char) var_6);
    var_18 -= ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)81)))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))));
    var_19 = ((/* implicit */int) min((max((((/* implicit */unsigned int) var_11)), (min((var_5), (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) (~(var_6))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) var_7);
        var_21 = ((/* implicit */_Bool) var_2);
    }
}
