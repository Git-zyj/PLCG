/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (~206388695);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, 13129));
        var_13 = (min(var_13, var_9));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((((var_2 ? (arr_6 [i_2]) : (!-18916)))) ? (((4173055300 << 0) ? (0 | 954) : ((0 ? 978 : -1)))) : var_7));
        arr_10 [i_2] [i_2] = (1 ? ((var_11 >> (((((arr_6 [12]) & -835969895)) - 1277697012)))) : var_11);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_14 &= (((arr_4 [i_3]) ? (((arr_8 [i_3]) + 1466442350)) : var_0));
        var_15 = (((((arr_1 [i_3]) ? (arr_1 [i_3]) : (arr_6 [1]))) <= 55135));
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_16 = (((arr_15 [i_4]) && (((arr_15 [i_4]) && 5013978626781653862))));
        arr_16 [i_4] [i_4] = ((max(-9915, ((var_4 ? (arr_4 [i_4]) : (arr_5 [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (((9913 | (arr_18 [i_5] [i_5]))));
        var_17 = ((var_9 ? var_11 : (arr_6 [i_5])));
        arr_20 [i_5] = ((((((((arr_8 [i_5]) ? var_2 : var_9))) ? (arr_18 [i_5] [i_5]) : 140)) > var_1));
    }
    var_18 = (~var_1);
    #pragma endscop
}
