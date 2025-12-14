/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238011
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
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) 31U);
        arr_3 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0 + 1]))) ? ((~((-(var_9))))) : ((((!(((/* implicit */_Bool) 1811401513)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((913031789) / (var_1)))))));
    }
    var_17 = ((/* implicit */unsigned int) var_16);
    var_18 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (var_9) : (var_2))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_6))));
}
