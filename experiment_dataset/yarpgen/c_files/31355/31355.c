/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_5;
        var_18 -= ((((!(!-299882814))) ? ((-2873230948725755519 ? 63 : (arr_0 [i_0 + 1]))) : 64));
        var_19 &= (((!-32762) ? ((((!(arr_2 [i_0 + 1] [i_0]))))) : (((((arr_0 [i_0 - 1]) - var_2)) - (arr_2 [i_0 - 1] [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_20 |= ((!(arr_6 [i_2 - 1])));
            var_21 ^= 73;
            arr_10 [i_1] |= (arr_6 [i_1]);
        }

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_16 [i_1] [i_4] [i_4] = ((1 ? var_1 : (arr_8 [i_1 + 2] [i_1 + 2])));
                arr_17 [7] [i_3] [i_4] = (~9);
                var_22 ^= (((arr_12 [i_4 - 1] [i_3 + 2] [i_1 - 1]) && 18446744073709551602));
            }
            var_23 = arr_12 [i_1] [i_3] [i_3 - 1];
            var_24 ^= ((((((arr_12 [i_3 + 2] [i_1] [10]) != (arr_7 [i_3] [i_1])))) | ((81 ^ (arr_15 [i_1] [i_3] [i_1] [i_3])))));
            var_25 = ((arr_11 [i_1 + 1] [i_3 - 1]) ? (arr_11 [i_1 - 1] [i_3 - 1]) : (arr_8 [i_1 + 2] [i_3 + 1]));
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_26 = (max(var_26, (arr_14 [i_5 - 1] [i_5])));
            arr_21 [i_1] = var_1;
            var_27 = var_16;
        }
    }
    var_28 = ((-(((!(!var_14))))));
    var_29 = ((+(((var_16 - -18904) + -1))));
    var_30 = (max(-427323645, var_7));
    var_31 = (var_8 || var_4);
    #pragma endscop
}
