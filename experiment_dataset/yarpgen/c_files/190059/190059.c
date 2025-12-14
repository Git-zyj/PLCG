/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (min(1, var_13));
                var_15 = (min(var_15, ((max((max((((2043102451 <= (arr_0 [i_1] [i_0])))), ((4262296656 ? var_6 : var_11)))), (((-(arr_1 [i_0] [i_1])))))))));
            }
        }
    }
    var_16 = (min(var_16, var_2));
    var_17 += (max(((min(var_1, (~0)))), -var_3));
    var_18 ^= (-2147483647 - 1);

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_19 ^= (max(0, (min(((-(arr_2 [i_2]))), (arr_5 [i_2] [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_20 = ((+((var_10 >> (((arr_5 [i_3 + 3] [i_3 + 3]) - 2009574604))))));
                    arr_12 [i_3] [i_3] [i_3] = 63057;
                    var_21 = (max(var_21, ((((arr_3 [i_2] [5] [i_4]) == (max(2478, 786448768)))))));
                }
            }
        }
        var_22 = (((arr_4 [i_2]) ? ((((((2473 || (arr_8 [i_2] [i_2])))) < var_1))) : 1145703068));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 = (max(var_23, (arr_18 [i_7] [i_5] [i_5] [i_5])));
                    var_24 = (9223372036854775807 * 0);
                    var_25 = var_1;
                }
            }
        }
        var_26 += 16406199397404016171;
        arr_20 [i_5] [i_5] = ((2052847165 % (arr_0 [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        arr_23 [i_8 + 3] &= (((arr_22 [i_8]) ? (arr_21 [i_8 + 3]) : -63062));
        var_27 = (18446744073709551615 | 63072);
        var_28 = var_6;
    }
    for (int i_9 = 3; i_9 < 8;i_9 += 1)
    {
        var_29 |= (min((arr_8 [i_9] [i_9]), (((arr_3 [i_9 + 1] [i_9] [i_9]) - (arr_3 [i_9 + 1] [17] [i_9])))));
        arr_27 [i_9 - 1] [i_9] = ((max((arr_26 [i_9]), (arr_18 [i_9 - 1] [i_9] [i_9] [i_9]))));
        arr_28 [i_9] = (((arr_0 [12] [i_9]) >= (((((10 == 254) && var_4))))));
    }
    #pragma endscop
}
