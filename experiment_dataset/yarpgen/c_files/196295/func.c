/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196295
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(2728357897107807628LL)));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+((~(288230371856744448LL))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_11)), (287518898U)));
}
