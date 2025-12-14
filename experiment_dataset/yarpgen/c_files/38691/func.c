/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38691
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (min((arr_2 [i_1 + 2] [i_1 - 1] [i_1 - 2]), (arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                var_20 = arr_5 [i_1 + 2] [i_1 - 2] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? ((~(var_14))) : (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) var_5))))))) | (var_14))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_16))));
    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
}
