/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41064
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
    var_19 = ((/* implicit */short) min((((/* implicit */int) var_2)), (min((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_5))))), ((-(1902318073)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)104)) : (((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */int) (unsigned char)239)))))))))));
                arr_6 [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 179232185452223783ULL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) ((unsigned char) 1569262157311465606ULL))))))));
            }
        } 
    } 
}
