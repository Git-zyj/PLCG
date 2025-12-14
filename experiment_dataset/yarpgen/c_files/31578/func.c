/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31578
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
    var_12 = ((/* implicit */unsigned short) 16694866774633530897ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_3))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (16694866774633530898ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_0))))))))));
                var_14 = ((/* implicit */long long int) 950709643);
            }
        } 
    } 
}
