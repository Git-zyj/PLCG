/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(15065373425068173423, 3381370648641378198));
        var_14 &= ((((((arr_1 [1]) && (((var_0 + (arr_0 [16] [16]))))))) >> ((((12368087727218438471 ? 12529264585414111687 : -2))))));
    }

    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((!(((((arr_2 [i_1]) ? (arr_3 [i_1] [i_1 - 1]) : (arr_1 [i_1])))))));
        var_15 = (!var_9);
        var_16 = (103 & -1);
    }
    #pragma endscop
}
