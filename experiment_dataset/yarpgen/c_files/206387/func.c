/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206387
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)78))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) (((+(((/* implicit */int) min(((unsigned short)31805), ((unsigned short)5741)))))) == (((((/* implicit */_Bool) max(((unsigned short)59789), (((/* implicit */unsigned short) (unsigned char)233))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59810))) <= (268435455U)))) : (((/* implicit */int) (signed char)-85))))));
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((1863023261U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))))));
    }
}
