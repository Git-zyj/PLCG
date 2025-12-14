/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20973
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
    var_12 |= ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_1] [i_1 - 1]))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((((~(var_0))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)205)) ^ (((/* implicit */int) arr_0 [i_1 + 1] [i_0])))))))));
            }
        } 
    } 
}
