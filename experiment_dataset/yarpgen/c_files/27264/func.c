/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27264
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) var_1);
                var_12 = ((/* implicit */short) (-(((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))));
                var_13 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (signed char)-81)) ? (1459940972U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8476)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */_Bool) max((var_15), (((((((/* implicit */_Bool) (signed char)23)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 190217685)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
    var_16 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
}
