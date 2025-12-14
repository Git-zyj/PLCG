/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52301
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
    var_15 = ((int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = min((((/* implicit */int) ((short) arr_0 [i_0 + 3]))), (((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_0 - 1])))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_3 [i_0 + 4] [i_0 + 4] [5]) : (arr_3 [i_0 + 1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1720411982)) ? (arr_1 [(short)17]) : (((/* implicit */int) (short)21581))))) ? (((/* implicit */int) ((short) -1))) : (((/* implicit */int) arr_0 [i_0])))) : (var_6))))));
            }
        } 
    } 
}
