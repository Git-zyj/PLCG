/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218516
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                var_20 = ((/* implicit */_Bool) (((~(((arr_3 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(var_4))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */int) (~(((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */long long int) var_9)) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_16))) : (((long long int) var_16)))) : (((/* implicit */long long int) var_8)))))));
    var_23 = ((/* implicit */long long int) (-(((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1192589928))))))));
}
