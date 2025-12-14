/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (max(18204, -71));
        arr_5 [i_0] = (((min(4102, -1243245988)) <= (31 | -1992953519)));
        arr_6 [i_0] = ((((min(((var_3 ? 4102 : 0)), (1 + var_7)))) ? (~31) : 1437042549));
        arr_7 [i_0] = var_12;
    }
    var_19 = 3222630353;
    #pragma endscop
}
