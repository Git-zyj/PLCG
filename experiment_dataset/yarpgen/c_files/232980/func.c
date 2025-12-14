/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232980
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
    var_20 |= ((unsigned short) min((var_17), (((/* implicit */signed char) var_16))));
    var_21 = ((/* implicit */short) var_19);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_22 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
        var_23 = ((/* implicit */unsigned char) min((((var_18) >= (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29296)) + (((/* implicit */int) (unsigned short)2804))))) || (((/* implicit */_Bool) ((1196856770) / (-1889442996))))))));
        var_24 = ((/* implicit */short) min((((/* implicit */int) max((min((arr_0 [i_0] [(_Bool)1]), (((/* implicit */unsigned short) var_17)))), (((/* implicit */unsigned short) (unsigned char)242))))), (((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-25085)) : (((/* implicit */int) (unsigned short)25538)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_16))))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1] [i_0 + 2]))) : (((/* implicit */int) min((arr_0 [i_0 + 4] [i_0 + 3]), (((/* implicit */unsigned short) (unsigned char)236)))))));
        var_26 = ((/* implicit */short) max(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) arr_0 [i_0 + 3] [i_0]))))) ? (min((((/* implicit */int) arr_1 [i_0])), (1889443009))) : (((/* implicit */int) var_6))))));
    }
}
