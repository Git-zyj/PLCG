/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = var_3;
        var_18 = ((29360128 ? (((arr_0 [i_0]) ? var_5 : var_7)) : var_6));
    }
    var_19 &= var_15;

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((-(((~var_1) ? var_7 : 2147483647))));
        arr_5 [i_1] = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (arr_0 [i_2]);
        var_20 = var_2;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_21 *= ((var_12 ? 1 : ((var_2 ? var_8 : -42378865))));
        var_22 = (max(1, 97869942));
        var_23 = (~1);
        var_24 = ((((min(-var_8, (((var_16 ? (arr_1 [i_3]) : (arr_9 [i_3]))))))) ? ((1 ? 101 : 29360128)) : (((((arr_7 [i_3]) || (arr_1 [i_3])))))));
    }
    #pragma endscop
}
