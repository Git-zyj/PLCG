/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190323
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [17] [(short)22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_0 + 1])) || (((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0 - 2]))))) : ((+(arr_4 [i_1 - 2] [i_0 + 1])))));
                arr_7 [i_1 - 1] = max((((/* implicit */unsigned long long int) var_17)), (min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))));
                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_2 [(short)1] [(short)17]))))))) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) max(((short)-4315), ((short)-4315))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_3);
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -2124145059)) : (10064516296341538472ULL)))))));
}
