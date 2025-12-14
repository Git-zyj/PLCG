/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_18 = ((!(1 != -9)));
            var_19 = (((-((min(1, var_11))))));
            var_20 += (((arr_3 [17] [i_1] [i_0]) >= var_10));
            var_21 = (max((arr_4 [1] [i_0] [i_1]), ((-(((!(arr_1 [i_1]))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [0] [1] |= (((!-1974674430) ? (arr_2 [i_0 + 1] [i_0 + 1]) : -9));
            var_22 = (min(var_22, (~1)));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_23 = (((arr_12 [i_0 + 1]) / (27427 * 3412837334)));
            arr_13 [i_0] [1] [i_3] = (min(((((arr_10 [15] [i_0] [i_0]) ? 3412837334 : (arr_4 [i_0] [i_3] [i_3])))), 65535));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0 + 1] = var_7;
            var_24 = (max(var_24, ((((arr_2 [i_0 + 1] [i_0 + 1]) <= (arr_2 [1] [i_0 + 1]))))));
            arr_17 [i_0 + 1] [14] = ((var_13 || (arr_10 [i_4] [i_0 + 1] [i_0 + 1])));
        }
        arr_18 [i_0] [i_0] = (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
        var_25 = (min(var_25, (arr_11 [i_0 + 1] [i_0 + 1])));
        arr_19 [9] [i_0] &= (arr_6 [12] [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_26 ^= (((arr_12 [i_5]) ? (arr_12 [i_5]) : var_5));
        var_27 = var_6;
    }
    #pragma endscop
}
