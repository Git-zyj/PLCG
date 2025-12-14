/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((min(var_5, 130))) ? var_1 : (var_8 / var_5)))) ? (~var_0) : (max(var_5, var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [13] [i_2] [i_0] &= var_6;
                    var_13 &= ((!((min((arr_3 [i_1 + 3] [i_1 + 1] [i_0]), var_7)))));
                    arr_10 [i_0] = ((-(max(((var_6 ? var_9 : 30934)), 32))));
                }
            }
        }
    }
    var_14 = (min((((((57 ? var_7 : var_11))) ? (((var_3 ? var_5 : var_9))) : var_3)), var_10));
    var_15 = var_5;
    #pragma endscop
}
