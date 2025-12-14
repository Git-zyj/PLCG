/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53923
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) var_6))) : ((+(((/* implicit */int) var_0))))));
    var_21 = ((/* implicit */_Bool) max((var_21), ((!(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)512))))) && (((/* implicit */_Bool) var_6))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_22 -= ((/* implicit */short) ((((((/* implicit */_Bool) (short)28654)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((arr_1 [(short)18]), ((short)-30997)))))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-26898)))))))));
        var_23 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_24 -= ((/* implicit */short) (_Bool)1);
    }
}
