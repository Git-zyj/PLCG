/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37748
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */unsigned short) (+(6690067368924653386LL)));
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3402593182U)) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_1]))))), (min((892374114U), (((/* implicit */unsigned int) 5))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((79740716U), (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7)));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_8)));
    var_22 = ((/* implicit */long long int) var_16);
}
