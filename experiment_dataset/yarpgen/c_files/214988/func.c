/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214988
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 3] [i_0]);
                arr_5 [i_0] [(_Bool)1] [i_1] = ((/* implicit */_Bool) max((max((arr_2 [i_0] [i_1 - 2]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)0)), ((short)-18940))))));
                var_19 = ((/* implicit */unsigned int) max((-1LL), (((/* implicit */long long int) arr_4 [i_0] [i_0 + 3] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(var_7))))));
    var_21 = ((/* implicit */_Bool) ((294191989) >> (((/* implicit */int) (_Bool)0))));
    var_22 &= ((/* implicit */long long int) var_0);
}
