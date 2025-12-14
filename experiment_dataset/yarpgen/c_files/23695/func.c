/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23695
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
    var_15 = ((/* implicit */unsigned short) var_4);
    var_16 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((var_3) && (((/* implicit */_Bool) ((long long int) ((unsigned short) (_Bool)1))))));
                var_18 = ((/* implicit */short) max((4062106564350903029LL), (((/* implicit */long long int) (short)8064))));
            }
        } 
    } 
}
