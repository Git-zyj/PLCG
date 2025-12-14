/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224510
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)38897)) : (((/* implicit */int) (short)32766)))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))));
                var_17 = ((/* implicit */unsigned short) 1094042545U);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (max((var_9), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))))));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (~(((/* implicit */int) (short)32766))))) & (var_5))) | (((/* implicit */long long int) 1094042567U))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && ((!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
}
