/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214214
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
    var_16 *= ((/* implicit */unsigned int) (+((~(((var_3) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_2 [i_0]) : (((/* implicit */int) var_0))))) / (((var_15) + (((/* implicit */unsigned long long int) var_8)))))) * (arr_3 [(_Bool)1] [(_Bool)1])));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_0 + 1]))) / (2072230830U))))))));
                arr_9 [i_0 + 1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 + 1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_2 [i_0 - 1]) : (((/* implicit */int) (short)384))))) : (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1 + 2])) ? (var_7) : (var_5)))));
            }
        } 
    } 
}
