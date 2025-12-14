/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242247
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) - (var_0)))) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) max((max((arr_0 [i_0]), ((short)-16))), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_6))))))))));
                var_18 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (0) : (((/* implicit */int) (short)45))))), (var_8)))), (((((/* implicit */unsigned long long int) ((var_14) - (((/* implicit */int) (_Bool)1))))) ^ (var_2)))));
                var_19 = ((/* implicit */short) (~(((long long int) ((((/* implicit */_Bool) (signed char)109)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) min((var_7), (max(((short)-22153), (((/* implicit */short) (_Bool)1))))))) * (min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))), (((/* implicit */int) (short)32767)))))))));
}
