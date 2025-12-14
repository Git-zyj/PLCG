/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1642044882;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((((arr_1 [1]) ? var_9 : ((min(2043, var_8)))))) ? (max((min(1, var_12)), (arr_2 [i_1] [i_0] [i_0]))) : (min(((var_9 ? (arr_2 [i_0] [i_1] [i_0]) : (arr_2 [9] [i_0] [i_0]))), (((var_2 ? var_8 : var_7))))))))));
                arr_4 [i_0] [i_0] [i_1] = var_12;
                var_16 = var_6;
            }
        }
    }
    var_17 = -2404235369085483823;
    #pragma endscop
}
