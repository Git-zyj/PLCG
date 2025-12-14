/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/485
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
    var_20 = ((/* implicit */int) max((var_20), (max((((/* implicit */int) var_10)), (min(((-(var_0))), (((-1240846339) + (((/* implicit */int) (signed char)-81))))))))));
    var_21 = ((/* implicit */int) (((~(1240846338))) <= (-1240846338)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */int) min((var_22), (min(((+(((/* implicit */int) (short)2067)))), (((/* implicit */int) ((-923098854) > (((/* implicit */int) arr_2 [i_1] [i_0])))))))));
                var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(1240846339)))), (var_18)));
                var_24 = ((/* implicit */int) max((((/* implicit */long long int) (signed char)(-127 - 1))), (((-8407024778555912790LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
            }
        } 
    } 
}
