/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((((var_8 ? 1 : 1))) ? ((var_8 ? 1 : var_12)) : var_6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 &= 2785471654470084219;
                    var_17 &= ((60 ? 2013265920 : 1));
                }
            }
        }
    }
    var_18 = ((var_10 ? ((min(((max(var_5, 1))), -var_0))) : (var_11 ^ var_8)));
    #pragma endscop
}
