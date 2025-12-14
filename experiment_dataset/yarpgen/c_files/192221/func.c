/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192221
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
    var_15 = var_10;
    var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (!(arr_2 [i_0])))))), (((/* implicit */int) arr_3 [i_0]))));
        var_18 -= var_13;
        var_19 = ((/* implicit */_Bool) ((arr_2 [i_0]) ? ((+(((((/* implicit */int) var_2)) >> (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((_Bool)1), (var_7))))))));
    }
    var_20 = var_0;
}
