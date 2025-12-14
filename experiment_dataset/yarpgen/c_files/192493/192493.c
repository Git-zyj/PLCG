/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 += (((var_0 < 61) >= var_1));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (max(var_5, ((max(-21, 0)))));
                arr_6 [i_0] [i_1 - 1] [i_1] = var_9;
            }
        }
    }
    var_14 = ((var_4 ? var_4 : (((43343 / (max(1, 321942872)))))));
    #pragma endscop
}
