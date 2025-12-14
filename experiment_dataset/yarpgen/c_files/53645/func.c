/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53645
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
    var_12 *= ((/* implicit */unsigned int) var_6);
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */short) 9223372036854775807LL);
                var_15 *= ((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_0])));
            }
        } 
    } 
}
