/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_2));
                var_18 = var_11;
                var_19 = (min((1279761153 == 124), -2147483641));
            }
        }
    }
    var_20 = ((-76 ? 1279761138 : 3015206143));
    var_21 = (max(-24357, ((var_1 ? (((var_1 ? var_11 : var_3))) : ((0 ? var_4 : 32758))))));
    #pragma endscop
}
