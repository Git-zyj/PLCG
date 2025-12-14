/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237190
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
    var_13 |= (_Bool)1;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] |= (+((+(arr_2 [i_0] [i_0]))));
                var_14 |= ((/* implicit */short) max(((+(((/* implicit */int) (unsigned short)65526)))), ((-(max((((/* implicit */int) (unsigned short)4096)), (var_1)))))));
                var_15 *= ((/* implicit */unsigned long long int) max((var_3), (((_Bool) (_Bool)0))));
            }
        } 
    } 
}
