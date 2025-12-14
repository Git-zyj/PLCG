/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191035
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
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) min((((/* implicit */int) var_11)), (((int) 410586810U)))))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), (var_8))))));
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 3])) * (((/* implicit */int) min((arr_2 [i_1 - 1] [i_1 - 2]), (arr_2 [i_1 + 4] [i_1 + 4])))));
            }
        } 
    } 
}
