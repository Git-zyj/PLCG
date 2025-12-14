/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20782
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
    var_15 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) var_3);
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_2 [i_0]) != (arr_2 [i_0])))) <= (max((((/* implicit */int) var_8)), (var_5)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_14);
}
