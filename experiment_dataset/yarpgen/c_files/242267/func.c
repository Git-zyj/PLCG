/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242267
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
    var_13 |= ((/* implicit */int) min((((/* implicit */unsigned int) var_6)), ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_3 [i_1 - 2] [10] [i_0]))));
                var_15 = ((/* implicit */unsigned int) (-(arr_2 [i_0 - 1] [i_0])));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [2])))))));
            }
        } 
    } 
}
