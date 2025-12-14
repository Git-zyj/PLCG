/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (min(15, ((((var_3 - var_4) < (max(var_9, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((((-174147454 || -174147454) ? (~var_8) : -2))) / ((((min(3663413859, 174147462))) ? -174147463 : (arr_1 [1]))));
                var_14 = 33;
                var_15 = arr_0 [i_0];
                var_16 = (((arr_0 [i_0]) ? (((arr_1 [i_1]) ? ((((arr_3 [i_0] [i_0]) > 3074291987))) : 1744793183)) : ((((arr_3 [i_0] [0]) == var_8)))));
            }
        }
    }
    #pragma endscop
}
