/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229015
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((int) max((((/* implicit */int) (_Bool)0)), (1444431634))));
                var_11 |= ((/* implicit */int) var_9);
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) && (((arr_5 [i_0 + 1] [i_0] [i_0 + 1]) && (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-16767)))))));
}
