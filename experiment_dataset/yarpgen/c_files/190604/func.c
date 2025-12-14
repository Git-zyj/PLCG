/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190604
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
    var_18 |= ((signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]);
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_4 [i_1 - 1] [i_0] [i_1]), (((/* implicit */short) var_15)))))));
                arr_6 [i_0] = ((/* implicit */short) var_0);
            }
        } 
    } 
}
