/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (247 | 60);
        arr_3 [i_0] [i_0] = (max((((~172) ? ((max(244, (arr_1 [15])))) : ((min(var_14, 0))))), (arr_0 [i_0] [i_0])));
        var_17 = (max(var_5, (max(((63 ? 192 : 208)), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 190))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_2;
        var_18 ^= 252;
        arr_7 [i_1] = ((12 ? var_8 : var_9));
    }
    var_19 = max(var_6, var_14);
    var_20 = min(68, var_10);
    var_21 += (var_1 - 5);
    var_22 = (min(var_22, 58));
    #pragma endscop
}
