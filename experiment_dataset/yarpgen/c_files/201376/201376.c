/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = ((1851693528230425301 ? 29781 : 1851693528230425321));
        arr_5 [i_0] [i_0] = ((~(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_11 = ((((max(-325772060, 13424))) ^ (arr_1 [i_1] [i_1])));
        var_12 = ((((((arr_2 [i_1]) ? 8713574731284491749 : -1851693528230425321))) ? (min(((-63 ? -1851693528230425324 : 59985)), (-13657 % 1))) : (((var_4 ? ((((arr_0 [i_1]) | (arr_0 [i_1])))) : ((var_5 ? (arr_6 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))))))));
        var_13 = (max(1482489090, -1939314305));
    }
    var_14 = ((!848743014) ? (((var_10 << (var_5 - 253845479361875072)))) : ((19207 ? (max(var_0, var_0)) : var_2)));
    var_15 = (((max(var_5, ((min(var_7, var_9)))))) ? 1 : (((var_6 >= (var_6 % 2)))));
    #pragma endscop
}
