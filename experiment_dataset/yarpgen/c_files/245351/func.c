/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245351
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) 866318674U);
                var_19 = ((/* implicit */signed char) var_2);
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (3428648621U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0]))))))))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_0])) & (((/* implicit */int) var_15))))), (min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_6))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ ((~(1807430907U)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (signed char)3);
    var_22 = ((/* implicit */_Bool) var_3);
}
