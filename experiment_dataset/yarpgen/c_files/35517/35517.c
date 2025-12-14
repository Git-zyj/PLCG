/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_7 [2] [i_1 - 1] [10] |= ((1736125532394003714 ? 1 : 9223372036854775807));
            var_16 -= (arr_4 [10] [7]);
            var_17 = (arr_1 [i_0] [i_0]);
            var_18 = (((((((arr_5 [i_0] [i_0] [10]) || var_5)))) <= var_9));
        }

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_19 = arr_1 [i_0] [i_2];
            var_20 |= ((~((((max(1, (arr_3 [i_0])))) % (var_5 - 177)))));
            var_21 = (max(((((arr_4 [i_0] [i_0]) & (arr_2 [i_0] [i_0])))), (((!1) ? ((1 ? 0 : 28)) : (arr_6 [i_0 + 1] [i_0])))));
            var_22 = (arr_8 [i_0] [i_2] [i_0]);
        }
        var_23 ^= (min((-9223372036854775807 - 1), ((254 < (85 * 28187)))));
    }
    var_24 += ((min(var_15, var_3)));
    #pragma endscop
}
