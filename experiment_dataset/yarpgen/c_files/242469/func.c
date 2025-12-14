/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242469
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                var_16 *= ((/* implicit */_Bool) arr_4 [i_1] [10LL] [10LL]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) 12802430442462258454ULL);
    var_18 = 93245484U;
}
