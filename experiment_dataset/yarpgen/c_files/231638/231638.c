/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_1] = ((32767 ? 27734 : (arr_5 [i_1] [i_0])));
            arr_8 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_6 [i_0] [i_1])));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_2] [3] [i_2] = (var_4 && var_7);
            var_10 *= -1768980391;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_16 [i_3] = (~var_1);

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_19 [i_0] [i_0] [0] |= ((!(((((((arr_12 [13] [17]) ? 1768980386 : (arr_17 [0] [i_3] [21])))) ? (((arr_10 [i_0] [i_3] [i_4]) ? var_0 : -1768980391)) : (arr_3 [i_0] [i_3] [i_4]))))));
                arr_20 [i_3] [i_3] [i_4] = (((((arr_18 [i_0] [i_0] [i_3] [i_4]) >> (((arr_18 [i_0] [i_3] [i_0] [i_4]) - 914753356)))) == (((min((arr_11 [i_4]), (arr_11 [i_0])))))));
            }
        }
        arr_21 [i_0] = ((+(((arr_9 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0]) : -var_1))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_11 = var_5;
        arr_25 [i_5] = (((arr_17 [i_5] [i_5] [i_5]) ? (((arr_11 [i_5]) ? var_9 : (arr_24 [i_5] [i_5]))) : var_5));
        var_12 |= (((((14874 ? (arr_0 [i_5]) : (arr_23 [i_5])))) ? (arr_9 [i_5] [i_5] [i_5]) : -1650230225));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_30 [i_6] = ((((-1768980391 >= (arr_1 [i_6]))) ? (arr_1 [i_6]) : (((arr_1 [i_7]) ? 40 : (arr_14 [i_7] [14])))));
            var_13 = (((!((max(1768980377, (arr_6 [i_6] [i_7])))))));
            var_14 = (min(var_14, (((((1768980386 ? (arr_0 [i_7]) : (arr_0 [i_6])))) ? ((-(arr_0 [i_6]))) : (arr_0 [i_6])))));
            arr_31 [i_6] [i_6] = (((((!216) >> (var_9 - 3957421309236206374)))) & (arr_10 [i_7] [i_7] [i_6]));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_38 [i_6] [i_6] [17] = 42707;
                arr_39 [17] [17] [i_9] [i_6] = (((arr_6 [i_6] [i_6]) ? (arr_6 [i_6] [14]) : (arr_6 [0] [i_8])));
                arr_40 [i_8] [i_8] |= (arr_3 [i_6] [i_8] [i_9]);
                arr_41 [i_6] [i_6] [i_9] [i_6] = ((arr_28 [i_6] [i_6] [i_6]) ? (arr_28 [i_6] [i_8] [21]) : (arr_24 [i_6] [i_9]));
            }
            var_15 ^= ((var_5 < (min(-8701189953044998315, (arr_15 [i_8] [i_6])))));
            arr_42 [i_6] [i_8] [i_6] = (-(arr_0 [i_6]));
        }
        var_16 = (arr_5 [i_6] [i_6]);
        arr_43 [i_6] [i_6] = (((((~(arr_0 [i_6])))) ? (((arr_0 [i_6]) ? var_7 : (arr_0 [i_6]))) : (((arr_0 [i_6]) ? var_3 : 188))));
    }

    for (int i_10 = 4; i_10 < 11;i_10 += 1)
    {
        arr_48 [i_10] = 255;
        arr_49 [i_10] = ((-(arr_17 [i_10] [i_10] [i_10])));
        var_17 *= (((arr_23 [i_10 - 4]) ? 40 : (((arr_23 [i_10 + 1]) ? (arr_23 [i_10 - 4]) : (arr_23 [i_10 - 2])))));
    }
    #pragma endscop
}
