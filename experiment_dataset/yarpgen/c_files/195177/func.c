/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195177
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) arr_4 [i_0 + 2] [i_0 + 2] [i_0]);
                var_11 = ((/* implicit */short) (-(arr_0 [i_0 + 3] [i_0 + 2])));
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_6);
}
