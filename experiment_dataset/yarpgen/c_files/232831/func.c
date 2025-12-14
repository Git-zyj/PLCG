/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232831
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
    var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23837))) : (var_9))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_19))) * (var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)0))))))) : ((~(var_2)))));
    var_21 = ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_22 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_17) << (((((/* implicit */int) arr_0 [i_0])) - (99))))))));
        var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_1 [i_0])))));
    }
}
