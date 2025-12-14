/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((-6153492439332802861 ? -6153492439332802861 : -6153492439332802861)) / var_2))) ? -3459582729906399523 : -26));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) ? var_11 : var_16));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (arr_6 [i_1]);
        var_19 ^= ((37800 ? -3459582729906399523 : 8));
    }
    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        var_20 -= (124 ? (((((-19 ? 3459582729906399511 : (arr_11 [i_2])))))) : 4565008809308704139);

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_21 = ((var_16 ? (min((arr_9 [i_2]), -603318484)) : (max((arr_11 [i_2 - 1]), (((arr_9 [i_3]) + 1))))));
            arr_15 [i_2] = ((-((max(var_8, (arr_10 [i_2] [i_2 + 1]))))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_19 [i_4] [i_2] = ((((!(arr_13 [i_4] [i_4] [i_2]))) ? (25866 / 121) : -11));
            var_22 -= (39683 % var_16);
        }
    }
    #pragma endscop
}
