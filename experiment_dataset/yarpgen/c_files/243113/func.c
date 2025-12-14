/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243113
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
    var_12 |= ((/* implicit */unsigned char) var_2);
    var_13 = ((/* implicit */unsigned int) var_3);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (15LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
                var_16 -= ((/* implicit */unsigned int) ((signed char) arr_3 [i_1 + 1] [i_1]));
            }
        } 
    } 
}
