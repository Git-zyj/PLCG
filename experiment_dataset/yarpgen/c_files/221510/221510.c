/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_1] = var_2;
                    var_14 -= min((min(var_5, var_12)), ((min(-23323, 1))));
                    var_15 = (min((min(var_6, var_9)), ((min(var_7, var_7)))));
                    arr_9 [i_0] [i_0] [i_2] = (min((((var_11 ? var_8 : var_6))), (max((min(var_6, var_10)), ((min(var_7, var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}
