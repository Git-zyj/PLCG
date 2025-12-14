/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31587
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)127))))), (((long long int) var_14)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                var_20 = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
}
