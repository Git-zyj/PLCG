/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((((var_2 ? var_7 : var_5)) << (var_5 || var_3)))));
        arr_3 [i_0] = (max((max(5, ((min(var_6, var_10))))), ((min(2601096653, 244192985)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max((min(-244192986, 1532658992)), ((min(((max(var_11, var_11))), (var_2 - var_9))))));
        var_12 |= ((var_10 ? ((((var_11 ? var_2 : var_4)) / var_1)) : (~var_10)));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_10 [16] = ((((var_0 ? var_8 : -44)) << (((max(var_0, var_6)) - 5077714221978054976))));
        var_13 = (((((var_1 ? var_3 : var_6))) ? var_4 : ((-638105726 ? 6439259609440794713 : 157))));
        var_14 -= (max((max(6439259609440794723, 0)), -25381));
        arr_11 [i_2] = 11978445182757276836;
    }
    var_15 = (min(var_15, ((max(((((var_11 <= var_3) <= 2762308302))), var_1)))));
    var_16 = (min((~var_9), var_0));
    #pragma endscop
}
