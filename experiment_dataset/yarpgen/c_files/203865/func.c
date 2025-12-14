/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203865
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))) ? ((~(((var_16) ? (var_9) : (((/* implicit */unsigned long long int) var_13)))))) : (((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (var_5))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_7)))))))));
        var_18 |= ((/* implicit */unsigned short) max((((/* implicit */int) ((short) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (max((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_12)))), ((+(((/* implicit */int) var_8))))))));
        arr_2 [i_0] [7ULL] = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))));
        arr_3 [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (var_1)))) && (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (var_0)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_3))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) var_13)), (var_5)))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((signed char) var_16));
    }
    var_19 = ((long long int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))));
}
