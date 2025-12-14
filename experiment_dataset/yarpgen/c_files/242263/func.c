/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242263
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) arr_1 [i_1] [i_1])))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((short) var_1));
            }
        } 
    } 
    var_17 = var_9;
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) var_11)) / ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (5983909764522906686LL)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-5941916191854994176LL), (((/* implicit */long long int) ((var_14) - (0U))))))) ? (max((((/* implicit */unsigned long long int) var_10)), (((var_5) ^ (var_5))))) : (min((((/* implicit */unsigned long long int) ((unsigned int) var_8))), ((~(var_1)))))));
}
