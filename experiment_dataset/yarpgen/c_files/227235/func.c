/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227235
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_2))))))) || (var_0)));
    var_14 += ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_12))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (_Bool)1))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_12))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_4)) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) var_12))));
        arr_4 [i_0] = ((/* implicit */short) max((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0] [(short)3])))), ((~(((/* implicit */int) var_4))))));
    }
}
