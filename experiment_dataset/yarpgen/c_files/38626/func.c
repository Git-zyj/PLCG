/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38626
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7264076874299209214LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (155925796U)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)20281))));
                var_15 += ((_Bool) arr_5 [i_0] [i_1]);
                arr_7 [i_0] = ((/* implicit */_Bool) arr_1 [11U] [11U]);
                var_16 = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
            }
        } 
    } 
}
