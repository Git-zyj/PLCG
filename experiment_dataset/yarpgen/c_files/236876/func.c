/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236876
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */long long int) arr_0 [i_1] [i_0]);
                var_21 = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_2);
}
