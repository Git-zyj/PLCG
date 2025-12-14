/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189676
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [1] [3])) * (((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_1 [15] [(_Bool)1])) * (770006894))))));
                var_16 = ((/* implicit */int) arr_4 [i_1 + 1] [i_0] [(_Bool)1]);
                arr_5 [i_1] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1]))))) | ((((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1])) : (arr_2 [10] [6]))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) || (((/* implicit */_Bool) arr_0 [6])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(var_9)));
    var_18 = ((/* implicit */int) var_9);
    var_19 = ((/* implicit */_Bool) min((min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) var_13)))), (((/* implicit */int) var_1))));
}
