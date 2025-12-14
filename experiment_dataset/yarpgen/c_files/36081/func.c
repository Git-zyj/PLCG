/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36081
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
    var_18 = ((/* implicit */signed char) var_10);
    var_19 = ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) var_4))))) : (((/* implicit */int) var_12)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_11))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
        var_20 = ((/* implicit */unsigned int) var_12);
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) && (((/* implicit */_Bool) var_15))))))))));
}
