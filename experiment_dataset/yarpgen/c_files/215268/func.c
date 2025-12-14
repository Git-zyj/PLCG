/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215268
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 1])) == (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 3] [i_1 - 2])))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 3] [i_1 + 1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 2])))))));
                var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2U))))), (3U)));
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_3);
    var_13 = ((/* implicit */_Bool) min((var_13), (((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
