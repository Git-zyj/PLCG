/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_4 || var_11);
    var_15 = var_8;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((var_4 ? (arr_1 [i_0] [i_0]) : (((max(var_2, var_2))))));
        var_16 = var_0;
        var_17 = ((var_7 ? (0 >= var_7) : (max(2097151, (((arr_0 [i_0] [4]) ? 4292870144 : var_6))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = (min(-1705786322, (max(var_9, 22))));
        arr_6 [i_1] = ((1705786321 ? (((-1705786322 ? var_9 : (var_6 <= 773884061)))) : (((arr_4 [i_1]) | ((var_4 ? -1705786322 : (arr_5 [i_1] [i_1])))))));
    }
    var_19 -= var_0;
    var_20 *= var_4;
    #pragma endscop
}
