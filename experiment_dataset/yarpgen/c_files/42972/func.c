/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42972
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
    var_19 = (_Bool)1;
    var_20 -= ((((/* implicit */_Bool) max((1026545944), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 1026545944)))))))) && (((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) ((16986408123544437574ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) : (((/* implicit */int) ((unsigned short) 1026545956)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) arr_2 [i_0 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
                var_22 = arr_4 [i_0 - 1] [i_0 - 1];
            }
        } 
    } 
    var_23 -= ((/* implicit */signed char) (-((-(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_16))))))));
}
