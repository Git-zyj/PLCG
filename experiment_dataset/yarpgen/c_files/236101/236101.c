/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = arr_0 [i_1 - 2];
                arr_5 [i_0] [i_1] [i_1] = ((14336 ? -2147483636 : 18446744073709551601));
            }
        }
    }
    var_11 = (min(var_7, ((var_8 ? (var_4 & var_8) : (var_6 != -5)))));
    var_12 = var_7;
    var_13 = var_3;
    var_14 = (max((((((min(var_1, 2147483636))) ? 6332951979867993886 : var_1))), (min((var_10 - var_3), var_8))));
    #pragma endscop
}
