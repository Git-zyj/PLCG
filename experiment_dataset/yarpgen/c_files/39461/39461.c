/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 ^= -var_0;
                var_16 = var_0;
                var_17 = (min(((min(var_10, (arr_1 [i_0] [i_0])))), ((((arr_2 [19]) / var_4)))));
            }
        }
    }
    var_18 = var_3;
    var_19 = (max((((~(!3706901014351356350)))), (min((~var_0), ((min(var_10, var_8)))))));
    #pragma endscop
}
