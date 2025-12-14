/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50451
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) var_0)), (288230376151711743LL))) / (((/* implicit */long long int) ((/* implicit */int) (short)20689))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))));
                var_16 -= ((/* implicit */unsigned long long int) 288230376151711743LL);
                var_17 = ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_1)), (((unsigned int) arr_4 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_18 &= var_9;
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) 2074396800));
}
