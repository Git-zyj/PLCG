/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_11 - (var_8 && 18))) >> (((-1389771291 % var_13) - 68))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 += var_12;
                arr_5 [i_0] [9] = var_12;
            }
        }
    }
    var_16 = ((((((var_2 ? 1 : var_6)))) * var_11));
    #pragma endscop
}
