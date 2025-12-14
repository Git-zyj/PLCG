/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((1 < (~var_9)));
        var_13 = (((var_1 | ((-30707 ? var_10 : var_9)))));
        var_14 -= (((arr_1 [i_0] [1]) > (arr_0 [i_0])));
        var_15 = var_8;
        arr_2 [18] &= (((var_9 ? -4970015945530776570 : (((var_9 | (arr_0 [i_0])))))));
    }
    var_16 = var_9;
    #pragma endscop
}
