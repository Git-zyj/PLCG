/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234189
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
    var_10 ^= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2414049650U)))) > (((((/* implicit */_Bool) var_7)) ? (-418896418764781898LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_7))))) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_4) | (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) var_5)))) ? (((var_0) << (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_7)) - (466)))))))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (418896418764781897LL)));
            }
        } 
    } 
}
