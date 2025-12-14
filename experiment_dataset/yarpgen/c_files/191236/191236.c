/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-32767 - 1) + 32626));
    var_20 = (min(var_3, var_5));
    var_21 -= (max(207375428, 1));
    var_22 = var_8;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 - 2] [i_0] = (((((32892 << (-629479789 + 629479792)))) ? (arr_2 [i_0 - 1] [i_0 - 2]) : -25747));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (((~var_18) ? (arr_5 [i_1]) : (var_6 > var_2)));
        var_24 = (max(var_24, -var_1));
    }
    #pragma endscop
}
