/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209417
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
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((unsigned int) var_14)) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) ((signed char) arr_1 [(short)2]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (arr_6 [11U] [i_1])));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)28659)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))) - (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_22 = ((/* implicit */signed char) max((var_22), (arr_5 [i_1] [i_1])));
    }
    var_23 = ((/* implicit */signed char) var_2);
}
