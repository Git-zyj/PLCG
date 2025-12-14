/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238628
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_6 [i_1]))));
                var_13 = ((/* implicit */unsigned int) (+(max((arr_5 [i_0] [i_1 - 1] [i_1 - 2]), (((/* implicit */long long int) var_7))))));
                var_14 -= min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2]))))));
                var_15 = ((/* implicit */_Bool) (short)7558);
            }
        } 
    } 
    var_16 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-7570)))) : ((~(((/* implicit */int) (short)21205))))))) & (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)121)))))) | (var_3)))));
}
