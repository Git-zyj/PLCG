/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228456
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (short)-10856);
                var_19 = ((/* implicit */_Bool) max((var_19), (var_4)));
            }
        } 
    } 
    var_20 &= ((/* implicit */_Bool) (unsigned short)58525);
}
