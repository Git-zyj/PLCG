/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((~192) * (((arr_1 [i_0]) | (var_0 && 4123364667)))));
        var_12 += (~171602628);
        var_13 = (min(var_13, ((((arr_0 [i_0] [i_0]) ? ((((max((arr_1 [10]), 171602640))) ? (min(4123364667, (arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))) : ((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] = ((~(arr_0 [i_1] [i_1])));
            arr_7 [i_0] [i_1] [i_0] = ((((max((arr_0 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))) * ((((arr_4 [i_0] [i_0] [i_0]) <= (arr_0 [i_0] [i_1]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_14 = (((arr_8 [i_0]) == (arr_4 [i_3 + 2] [i_0] [i_3 + 2])));
                        var_15 |= (((((-(arr_8 [4])))) && (-1607542706 ^ var_5)));
                        arr_15 [i_0] [i_2] [i_3] [i_0] [i_0] [i_3 + 1] = (arr_4 [i_0] [i_0] [i_2]);
                        arr_16 [i_0] [3] [i_2] [i_0] = ((((((var_2 ? (arr_12 [i_0] [i_0] [i_0]) : (arr_5 [i_3] [i_0]))) + 2147483647)) >> (var_0 - 41)));
                    }
                }
            }
            var_16 = (((((2693125286 ? 3605011080 : 0))) ? (var_10 || 0) : ((1454042425 ? (arr_14 [i_0] [i_0] [i_2] [i_0]) : var_3))));
            var_17 = (min(var_17, ((((arr_5 [i_0] [16]) >> (((arr_13 [i_0] [i_2] [i_0]) + 33)))))));
            arr_17 [i_0] [i_0] = 1601842009;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_21 [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_5]);
            var_18 = ((4544 ? 10 : var_5));
            var_19 = (arr_14 [i_0] [i_5] [i_5] [i_5]);
        }
        var_20 = (((-9223372036854775807 - 1) && (arr_13 [i_0] [i_0] [i_0])));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_21 *= (min((arr_12 [i_6] [i_6] [i_6]), (max((((-9223372036854775807 ? 113 : var_11))), (min(var_3, var_4))))));
        var_22 = max((((808227317 || 5853043572128766171) ? var_11 : ((max((arr_1 [i_6]), 4123364682))))), ((~(max(20246, var_6)))));
        var_23 = (arr_8 [i_6]);
    }
    var_24 = var_1;
    var_25 = ((((((((var_1 ? var_5 : var_11))) ? (min(var_11, var_4)) : (8589934590 && var_4)))) && ((((!2147483648) >> (((~1) + 29)))))));
    #pragma endscop
}
