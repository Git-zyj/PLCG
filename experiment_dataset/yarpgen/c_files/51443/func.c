/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51443
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
    var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1359307123U))));
    var_19 = 2484388614U;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 += ((var_13) ^ ((~(min((1543013024U), (1810578690U))))));
                var_21 = max((185311693U), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3999366026U))))), (min((3723827373U), (arr_2 [i_0 + 1]))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) ((arr_4 [i_0 - 1]) | (var_15)))) ? ((~(arr_4 [i_0 + 3]))) : (3995497549U)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (3668969933U)));
}
