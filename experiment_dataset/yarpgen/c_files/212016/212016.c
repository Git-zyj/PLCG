/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = (((((-17888 ? 3458764513820540928 : 50467))) ? (arr_2 [i_0] [i_0]) : var_3));
    }
    var_10 = var_7;
    #pragma endscop
}
