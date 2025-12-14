/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = var_6;
            var_14 = (((arr_0 [17]) ? var_8 : var_6));
        }
        var_15 = (!5583871953898207843);
        arr_5 [i_0] [i_0] = (!1433412170);
    }
    var_16 += 35817;
    var_17 -= ((var_4 ? var_1 : var_12));
    #pragma endscop
}
