/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22801
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
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 1565181318856015755LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_0))))), ((+(((/* implicit */int) var_3))))))) : (1692762912347728619LL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (unsigned short)24))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) max((((int) max((arr_0 [i_1] [i_0]), (((/* implicit */long long int) 0U))))), (((/* implicit */int) max((((var_5) >= (var_9))), (var_11))))));
                var_15 = ((/* implicit */unsigned int) (short)32767);
                var_16 = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
            }
        } 
    } 
}
