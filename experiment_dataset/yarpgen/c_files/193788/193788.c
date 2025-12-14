/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max(((max(var_5, var_16))), ((var_14 ? var_17 : var_16)))), (((var_13 ? var_6 : -var_7)))));
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, var_16));
                    arr_11 [i_0] = (max(((var_17 ? var_8 : var_12)), ((var_4 ? var_15 : var_6))));
                }
            }
        }
    }
    #pragma endscop
}
