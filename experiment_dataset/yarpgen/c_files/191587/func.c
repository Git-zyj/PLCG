/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191587
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (signed char)28))));
    var_20 |= ((/* implicit */signed char) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_9)) + (71)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((arr_1 [i_1 - 1]) / (var_8)))));
                var_21 = ((/* implicit */int) arr_2 [i_0]);
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_0 [i_0] [i_1]))));
                var_23 += ((/* implicit */signed char) max((((/* implicit */int) arr_6 [6ULL] [6ULL])), ((-(((/* implicit */int) arr_6 [16LL] [16LL]))))));
            }
        } 
    } 
}
