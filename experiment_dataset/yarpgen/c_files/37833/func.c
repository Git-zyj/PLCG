/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37833
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_5))));
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_12)))));
    var_18 = max((511U), (((/* implicit */unsigned int) 2147483647)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((2147483647), ((-2147483647 - 1))));
                arr_8 [i_1] [(signed char)4] [7LL] = ((/* implicit */_Bool) ((unsigned int) var_3));
            }
        } 
    } 
}
