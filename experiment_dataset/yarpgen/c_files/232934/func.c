/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232934
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) ((short) max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_5))), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [8ULL]))))));
                var_11 *= ((/* implicit */signed char) (~((~(arr_5 [i_1])))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
}
