/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19461
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_2)), (var_1)));
    var_11 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 + 1])), (6899002579367381456LL))), (((/* implicit */long long int) max((arr_3 [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 - 1])))))))));
                    var_13 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((20262572), (((/* implicit */int) var_3))))), (min((arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_7);
}
