/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] &= ((-(var_9 > -3416329547841866013)));
        arr_3 [i_0] [i_0] = 55802;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (-3416329547841866013 < 10310304755701780745);
        var_20 *= 3416329547841866012;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_21 *= -3416329547841866013;
        arr_11 [i_2] = (arr_9 [i_2]);
        var_22 = (arr_10 [i_2]);
    }
    var_23 = (min(var_23, var_8));
    #pragma endscop
}
