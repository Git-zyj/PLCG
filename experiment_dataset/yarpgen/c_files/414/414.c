/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = 12128;
                var_21 = var_9;
                var_22 -= (arr_0 [i_0] [i_0]);
                var_23 *= ((var_3 >> ((min(65527, 8)))));
            }
        }
    }
    var_24 = var_15;
    var_25 = var_16;
    #pragma endscop
}
