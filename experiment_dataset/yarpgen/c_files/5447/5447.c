/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_11 ^ (min((!var_14), -var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = var_4;
                var_19 = 3467994972;
                var_20 = ((~((var_4 & (arr_3 [16] [i_1])))));
            }
        }
    }
    #pragma endscop
}
