/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36741
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (var_7)))) ? (((((/* implicit */_Bool) 1586070007U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((var_10) ^ (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))))));
                arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((int) var_8));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((var_3) ? (min((max((var_7), (((/* implicit */int) var_9)))), (((/* implicit */int) var_12)))) : (((/* implicit */int) min((var_14), (((/* implicit */short) var_13)))))));
    var_19 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */int) var_5)) % (((/* implicit */int) var_15)))))));
}
