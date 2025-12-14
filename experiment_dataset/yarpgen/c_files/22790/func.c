/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22790
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) | (arr_4 [i_0] [i_0])))) > (min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0] [i_1 - 3]))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -7257839621146460684LL)))))) % (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) ((_Bool) (short)-24160)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) min((((/* implicit */short) var_13)), ((short)-24160))))) > (((int) -3))));
    var_18 = ((/* implicit */int) min((8974139590515624841LL), (((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9)))))));
    var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14922821813195227115ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) (signed char)0))) && (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) min((3924909657U), (((/* implicit */unsigned int) (short)32764))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_12))));
}
