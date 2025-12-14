/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197340
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)880)) ? (((/* implicit */int) ((unsigned short) arr_0 [i_1 - 1]))) : (1005819137)));
                var_15 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
    var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_10))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-880)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_12)) : (((var_6) / (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)880)) < (((/* implicit */int) (short)880))))))));
    var_17 = ((/* implicit */unsigned short) ((var_8) / (((/* implicit */unsigned long long int) var_12))));
}
