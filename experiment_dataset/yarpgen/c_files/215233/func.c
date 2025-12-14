/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215233
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_1 - 1]))) ? (var_16) : (((/* implicit */int) (short)-13191))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_0]))))) : (((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    var_23 = (+(var_7));
}
