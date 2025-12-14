/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_5);
    var_13 = (var_0 % var_2);

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_14 = (((((arr_1 [i_0]) + 2147483647)) >> (max((arr_1 [i_0]), (arr_0 [i_0])))));
        var_15 = ((-(arr_0 [i_0])));
        arr_2 [i_0] = (max(((((458891886 ? 3836075410 : (arr_0 [i_0]))) ^ (arr_1 [i_0]))), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_16 = var_5;
        arr_6 [i_1] = (((arr_1 [i_1]) ? (arr_4 [i_1]) : (arr_1 [i_1])));
    }
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        var_17 = (min(var_17, var_3));
        var_18 -= (((((arr_1 [i_2 - 4]) || 3836075410)) ? (((-9354 && (arr_1 [i_2 - 4])))) : (arr_1 [i_2 - 4])));
        var_19 = (((arr_5 [i_2] [14]) ? -9354 : (min((3836075410 && 1099511627775), (arr_5 [i_2 - 1] [i_2])))));
        arr_9 [i_2 - 3] [i_2] = ((2630534842080133033 ? -31303 : 3836075423));
    }
    var_20 *= var_3;
    var_21 = var_9;
    #pragma endscop
}
