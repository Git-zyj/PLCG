/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(var_9, var_3)) & var_6)) <= (((((var_10 != var_1) < ((var_2 ? var_9 : var_4))))))));
    var_12 = (min(var_6, (max(var_8, ((min(-43, var_2)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (((-(max(1230399964369856481, 36814)))));
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), 36816));
    }
    #pragma endscop
}
