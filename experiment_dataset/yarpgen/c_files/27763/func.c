/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27763
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
    var_20 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)-501)))))));
        var_22 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)501)) ? (((/* implicit */int) (short)-519)) : (1932223399))), (((/* implicit */int) (!((_Bool)1))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) * (arr_1 [i_0])))) ? (((arr_1 [i_0]) << (((arr_1 [i_0]) - (2924765341U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
    }
}
