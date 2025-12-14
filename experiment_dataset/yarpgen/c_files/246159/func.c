/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246159
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) var_1);
                arr_5 [i_0] [i_0] [i_1 + 2] = (unsigned char)165;
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((_Bool) (-(var_2))))), ((unsigned char)163)));
    var_16 ^= ((/* implicit */unsigned char) var_3);
    var_17 = ((/* implicit */_Bool) var_11);
}
