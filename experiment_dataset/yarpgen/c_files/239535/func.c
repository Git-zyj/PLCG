/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239535
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
    var_15 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1))) * (((/* implicit */long long int) ((/* implicit */int) var_8))))) == (((/* implicit */long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_13)) / (((/* implicit */int) var_2)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (var_3)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_0)))) & (((/* implicit */int) var_13))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */int) (signed char)-68)), (-968158675))), (((-968158675) & (((/* implicit */int) (_Bool)0))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((arr_4 [i_1]), (arr_5 [i_1] [i_1])))), (var_7)))) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned char) var_4)))))));
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_8))));
}
