/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = ((((max(((var_10 ? var_10 : 25380)), 1))) ? 50 : (~var_9)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = 37;
        var_14 = (((arr_1 [i_0]) ? var_5 : (!44582)));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = (~var_6);
        arr_7 [i_1] = ((max((~var_9), (min((arr_0 [i_1] [i_1]), var_0)))));
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] = ((!((max(-1560135892, var_0)))));
        var_15 = 2671014713981100785;
        var_16 = var_7;
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_17 = (max(var_17, ((min(-var_3, var_1)))));
        var_18 = min(((65531 ? var_0 : var_5)), ((max((arr_14 [i_3 + 1]), (arr_13 [i_3 + 1])))));
        var_19 -= (!var_6);
    }
    #pragma endscop
}
