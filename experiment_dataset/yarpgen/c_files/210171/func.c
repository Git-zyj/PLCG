/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210171
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (var_2)));
        arr_2 [i_0] = var_12;
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1] = arr_4 [i_1] [8U];
        var_21 -= var_12;
        arr_6 [i_1] [6U] &= max(((+(3458439656U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1758242501U)) ? (2512252216U) : (arr_3 [i_1] [i_1])))) ? (max((var_1), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2512252216U)))))))));
        var_22 = var_8;
    }
    var_23 = ((((/* implicit */_Bool) 1758242501U)) ? (((((/* implicit */_Bool) 134217727U)) ? (233268848U) : (2512252216U))) : ((+(2536724789U))));
}
