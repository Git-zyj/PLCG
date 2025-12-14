/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226367
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
    var_11 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 4294967292U))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-64), (var_6))))) : ((~(4294967295U)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-64)) > (((/* implicit */int) (short)-1))))), ((~(4294967268U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (1U)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [6U]))));
                var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
            }
        } 
    } 
}
