/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max((arr_0 [i_0]), ((max(-64, var_6)))));
                var_20 = ((-(min((arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_3 [i_1 - 4] [i_1 - 1] [i_1 - 2])))));
            }
        }
    }
    var_21 = ((var_8 - (-27994 % var_3)));
    var_22 = var_6;
    var_23 = var_9;
    #pragma endscop
}
