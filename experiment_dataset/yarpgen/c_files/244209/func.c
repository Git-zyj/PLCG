/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244209
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
    var_19 ^= ((/* implicit */unsigned char) var_18);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4867322755400974327LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)191)))))));
                var_21 |= ((/* implicit */unsigned int) (+(min((((unsigned long long int) arr_1 [i_1])), (((/* implicit */unsigned long long int) var_18))))));
                var_22 = ((/* implicit */int) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)-20595)), (14100660155584543792ULL))) <= (((/* implicit */unsigned long long int) 9223372036854775807LL))))) >= (((/* implicit */int) (short)32767))));
            }
        } 
    } 
    var_23 |= ((/* implicit */short) var_4);
}
