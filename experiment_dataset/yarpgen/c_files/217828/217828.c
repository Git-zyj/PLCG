/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-((max(var_1, var_12)))))) / (((13136038241350152160 & 18446744073709551586) ? var_17 : (~var_7)))));
    var_20 = (!18446744073709551592);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((((arr_1 [8] [8]) & (arr_1 [i_0 - 2] [i_0 - 4]))) & (((arr_1 [i_0] [i_1 - 3]) ^ (arr_1 [i_0 + 1] [i_1 + 2])))));
                var_22 = var_17;
            }
        }
    }
    #pragma endscop
}
