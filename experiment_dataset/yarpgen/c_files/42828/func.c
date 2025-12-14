/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42828
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((short) ((unsigned char) arr_0 [i_1 - 1] [9U])));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_1 [i_0] [i_1 + 1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) ((unsigned char) var_3))))));
}
