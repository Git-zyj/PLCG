/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 = 10821021843647217469;
        arr_4 [i_0] [14] = (arr_0 [i_0]);
        var_17 = (max(var_17, ((max((min(((-(arr_2 [16]))), -18446744073709551593)), (((arr_1 [i_0] [1]) ? 22 : (arr_1 [i_0 + 2] [i_0]))))))));
    }
    var_18 = 10821021843647217469;
    #pragma endscop
}
