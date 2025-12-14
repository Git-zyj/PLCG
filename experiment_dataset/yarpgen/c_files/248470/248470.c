/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-var_15 ? -12 : (!-32050)));
        var_20 = (~var_12);
        var_21 = -3692185458601603361;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_22 = var_15;
        var_23 = (min(var_23, 20718));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = 3692185458601603360;
        arr_11 [i_2] [i_2] = ((-3692185458601603353 ? -3692185458601603347 : 3692185458601603352));
        arr_12 [i_2] [i_2] = var_16;
    }
    var_24 = var_14;
    #pragma endscop
}
