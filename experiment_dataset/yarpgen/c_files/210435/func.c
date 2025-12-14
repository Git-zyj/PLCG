/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210435
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
    var_13 = ((/* implicit */unsigned int) ((var_0) > (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_11)))))))));
    var_14 = ((short) min((var_0), (min((3353045624U), (((/* implicit */unsigned int) var_11))))));
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (max((((/* implicit */unsigned int) ((unsigned char) var_9))), (var_0)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((int) arr_1 [i_0]));
        var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    }
}
