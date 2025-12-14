/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42366
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
    var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) 8937889557885160248ULL)) ? (1086806784) : (((/* implicit */int) var_2))))));
    var_16 = ((/* implicit */int) ((8937889557885160248ULL) - (((/* implicit */unsigned long long int) var_7))));
    var_17 = ((/* implicit */unsigned int) ((var_5) * (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = var_3;
                var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (9508854515824391367ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
                var_19 = ((max((-633340526), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-95))))))) & (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (signed char)-23)) || (((/* implicit */_Bool) var_5))))), (var_10)))));
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (var_0) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                var_21 = ((/* implicit */long long int) 2494364447760431285ULL);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)28504))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((min((var_5), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_7))))));
}
