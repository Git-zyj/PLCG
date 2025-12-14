/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) ? var_2 : 1007986288416655190))) ? (((arr_0 [i_0]) >> (var_0 + 8302436235096687488))) : ((((arr_0 [i_0]) > var_2)))));
        arr_3 [i_0] [i_0] = var_6;
    }
    var_11 |= (min(var_1, (((var_3 & var_4) ? var_8 : 2181832365527082405))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_12 -= (((((95513463 ? 62562 : -4127445434799999774))) ? var_1 : var_8));
        arr_6 [i_1] [i_1] = ((1 ? (arr_5 [i_1] [1]) : var_7));
        var_13 = var_5;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_14 = var_1;
        var_15 = 1;
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_16 = (((1147210997 == var_2) + ((12 / (arr_12 [i_3 - 2])))));
        var_17 = (((((arr_10 [i_3] [i_3]) ? ((-(arr_11 [i_3]))) : var_4)) != (((((arr_5 [24] [i_3]) + -64121487244145593))))));
    }
    #pragma endscop
}
