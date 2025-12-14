/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225472
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
    var_14 = ((/* implicit */short) ((var_1) < (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7918)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-7921)) - (((/* implicit */int) (short)-7908))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7915)) ? (((/* implicit */int) (unsigned short)19393)) : (((/* implicit */int) (unsigned short)19393))))) : (7169261644697800822LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)16])))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [17])) ? (((/* implicit */int) (short)-7923)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_1]))))) ? (((unsigned long long int) arr_0 [i_0 - 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7885)) / (arr_2 [i_0 - 1]))))));
            }
        } 
    } 
}
