/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39422
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
    var_10 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */signed char) 0ULL);
                arr_5 [i_0] [i_0] &= (unsigned char)128;
                var_12 = ((/* implicit */int) (~((+(max((((/* implicit */unsigned int) var_6)), (var_8)))))));
            }
        } 
    } 
}
