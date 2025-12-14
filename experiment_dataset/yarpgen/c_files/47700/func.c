/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47700
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 - 1]))));
                var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (arr_4 [i_0] [i_1 - 1]) : (arr_4 [2LL] [i_1 - 1]))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */int) arr_2 [i_1 + 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1 - 1] [i_1]))))) : ((+(((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                var_16 -= ((/* implicit */short) min(((signed char)-44), ((signed char)39)));
            }
        } 
    } 
    var_17 = ((signed char) var_7);
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((var_0), (var_12))))));
}
