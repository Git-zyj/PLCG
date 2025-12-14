/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(((20 ? 0 : ((min(255, 4))))), ((((min(var_13, var_8))) ? ((max(0, 255))) : var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((arr_0 [i_1 - 1] [16]) <= 153)))));
                var_22 |= (min((((arr_0 [i_1 - 2] [4]) + (arr_0 [i_1 - 1] [0]))), (arr_1 [10] [i_0])));
            }
        }
    }
    var_23 = (max(var_16, ((255 ? (var_10 || 153) : var_8))));
    var_24 &= (max(((max(153, 0))), ((var_8 ^ ((var_9 ? var_10 : 62))))));
    var_25 = ((var_9 ^ ((((204 >= var_19) == var_8)))));
    #pragma endscop
}
