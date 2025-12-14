/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199583
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
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)60044)))), ((+(((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 4]))))));
        arr_2 [i_0] = ((/* implicit */signed char) var_14);
        var_17 = ((/* implicit */int) max((var_17), (min((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)60033)))), (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_0 [i_0]))))))))));
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)22624))))) : (var_15))) / (var_4)))));
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= ((~(var_11)))))))));
}
