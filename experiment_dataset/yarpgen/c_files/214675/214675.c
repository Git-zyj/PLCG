/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((min((max(-1095346467, var_0)), (var_10 & var_9))) >> (((((1095346466 ? var_3 : var_9))) - 1551327370)));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [8] [i_1] [i_0] = var_9;
                var_16 -= (((var_10 ? (arr_3 [i_1 + 1]) : (((((arr_0 [13] [8]) != 75)))))));
            }
        }
    }
    #pragma endscop
}
