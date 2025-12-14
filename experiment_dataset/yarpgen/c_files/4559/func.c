/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4559
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
    var_20 ^= ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) var_2))));
    var_21 = var_3;
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_15)))) * (((/* implicit */int) (_Bool)0))))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_5), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) ((unsigned int) arr_1 [i_0 - 4])))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)-31529), (((/* implicit */short) (_Bool)0))))), (((((int) arr_2 [i_0 - 2] [i_1])) >> (((((((/* implicit */_Bool) -2100675932354334791LL)) ? (((/* implicit */long long int) var_16)) : (-26LL))) - (2765613828LL))))))))));
            }
        } 
    } 
}
