/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226189
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
    var_11 = ((int) ((unsigned long long int) var_5));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((492918948), (((/* implicit */int) (signed char)72))));
                var_13 = ((/* implicit */short) min((((arr_3 [i_1]) - (((/* implicit */unsigned long long int) var_6)))), (arr_3 [i_1])));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(-208148927))))))));
    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -244156825)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-407))) : ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) var_5))))) ? ((~((+(var_9))))) : (((/* implicit */long long int) var_6))));
}
