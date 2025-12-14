/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = (max(var_13, var_0));
        arr_3 [i_0] [i_0] = ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : -2)));
        arr_4 [i_0] = ((32758 ? (((~(arr_0 [i_0 - 1])))) : ((min(-24, 8087799436612119123)))));
        var_14 = (((var_10 ? var_5 : 18811)));
    }
    var_15 = ((!(-9223372036854775807 - 1)));
    #pragma endscop
}
