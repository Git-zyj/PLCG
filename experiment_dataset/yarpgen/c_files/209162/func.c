/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209162
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
    var_20 += var_3;
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_0))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) 23604402U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)10262))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_4))));
    }
    var_23 = (~(min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)237)))), (var_19))));
}
