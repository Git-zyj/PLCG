/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221724
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
    var_18 = ((/* implicit */signed char) 0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) (-(var_10)));
                var_20 -= ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                var_21 = ((/* implicit */unsigned short) (((-(((((/* implicit */int) var_14)) >> (((var_5) - (3445666199U))))))) <= (((/* implicit */int) var_17))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (2919307702U)))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_1 [i_0] [i_1]))) != (((/* implicit */int) arr_6 [i_0] [i_1]))))) : (min((min((0), (((/* implicit */int) var_8)))), (((/* implicit */int) arr_6 [i_0] [i_1]))))));
            }
        } 
    } 
}
