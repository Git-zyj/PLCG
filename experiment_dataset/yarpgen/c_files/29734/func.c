/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29734
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
    var_10 ^= ((/* implicit */long long int) var_2);
    var_11 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_0 [i_0 + 1])) << (((-5532912393801075439LL) + (5532912393801075440LL)))))));
                arr_4 [i_1] = ((/* implicit */_Bool) var_9);
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned char)34))));
            }
        } 
    } 
}
