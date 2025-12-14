/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43710
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
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) max((((unsigned long long int) arr_3 [7LL] [i_1 + 2])), (((/* implicit */unsigned long long int) (!(arr_3 [i_0 - 2] [i_1 - 4]))))));
                var_20 = ((/* implicit */unsigned char) arr_3 [i_0 - 2] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775807LL)))) ? ((-(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
}
