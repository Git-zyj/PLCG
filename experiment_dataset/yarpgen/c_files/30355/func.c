/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30355
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (arr_0 [i_0] [i_0])));
                arr_5 [i_0] = ((/* implicit */int) arr_4 [i_1 - 1] [i_0]);
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned char) var_11);
}
