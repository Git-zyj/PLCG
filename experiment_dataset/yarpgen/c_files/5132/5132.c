/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 <= 2147483647);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 = var_10;
        var_13 = (max(var_13, (((((!(((var_10 ? -33 : var_9)))))) / (((-2 / 2022460678) | ((-859839737 ? -2147483647 : 2147483629))))))));
        var_14 -= ((((-2147483647 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))) <= (min((((arr_0 [i_0]) + (arr_1 [i_0] [i_0 + 2]))), (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] [16] = (min(-859839707, ((min(-41, 11548)))));
        arr_5 [i_1] = ((!(arr_3 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = (min(((max(-2022460676, (arr_3 [16] [i_2])))), (((((1 ? var_0 : var_4))) ? (min((arr_7 [i_2]), 249)) : ((~(arr_6 [3])))))));
        arr_9 [i_2] = (arr_3 [i_2] [8]);
        var_15 = ((!(((-1 ? -859839708 : 47539)))));
        var_16 = (min((((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_3 [i_2] [i_2]))), (arr_6 [i_2])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] &= min(9223372036854775807, (-9223372036854775807 - 1));
        var_17 |= (arr_10 [i_3]);
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            {
                var_18 = (min((((-50 | -5) / (max(24, 9223372036854775783)))), ((((arr_0 [i_4 - 1]) | (arr_18 [i_4] [i_4 - 1] [i_5 + 3]))))));
                var_19 = 9223372036854775797;
            }
        }
    }
    #pragma endscop
}
