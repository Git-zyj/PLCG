/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232529
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
    var_17 = ((/* implicit */signed char) ((991513396U) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] = var_4;
                var_18 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) -262144)), (2860790969U))), (((/* implicit */unsigned int) (unsigned short)0))));
                var_19 -= ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    var_20 |= ((/* implicit */_Bool) var_13);
}
