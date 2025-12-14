/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222462
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_2))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_14))) | (((var_9) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) var_15)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)29))))))) : ((-(((long long int) (_Bool)1))))));
}
