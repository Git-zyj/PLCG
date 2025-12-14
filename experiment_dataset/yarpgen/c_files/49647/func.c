/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49647
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (2883524411U)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_1 [i_0]))))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_0 [i_0] [i_0]) + (((/* implicit */long long int) var_8)))) - (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)32))))));
        var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) -515137345)) / (535822336U)))) * (((long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_8)))))));
    var_21 -= (short)64;
    var_22 = 402653184U;
}
