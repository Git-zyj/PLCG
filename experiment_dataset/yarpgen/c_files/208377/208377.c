/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? var_12 : ((var_8 ? (~var_6) : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_2] [i_2] [18] [i_3] [i_3 - 1] = ((!((((-597070405 ^ var_9) / var_3)))));
                            arr_9 [i_0 + 1] [i_2] [i_2] [i_0 + 1] = ((228 ^ (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
                            var_16 = 228;
                            var_17 -= ((~(arr_0 [i_0])));
                        }
                    }
                }
                var_18 |= ((~(arr_7 [5] [i_1 + 2] [4] [i_0] [7])));
                arr_10 [i_0] [i_0] [15] = (max(((min((arr_0 [i_0 - 1]), 45))), var_6));
            }
        }
    }

    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_19 = ((arr_4 [i_4] [16] [i_4] [i_4 - 2]) ? var_10 : ((~(min(-4702127131040117399, 28)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_18 [i_4] = (659053113 ? 28 : -659053114);

            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                var_20 = (((arr_19 [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 2]) << (((((((~9223372036854775807) - -9223372036854775806)) + 54)) - 49))));
                var_21 = (((((var_0 ? (arr_15 [i_5]) : var_5))) ? -23966 : var_7));
                arr_23 [i_4 + 2] [2] [i_4] = arr_11 [i_6] [i_4];
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                arr_26 [13] [i_4] = 277951591;
                var_22 = (max(var_22, (((((!(arr_0 [4]))) ? (arr_20 [i_5]) : var_14)))));
            }
            var_23 = var_10;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_24 = 575745607;
            arr_29 [i_4] [10] = (~((((max(149, var_7))) + ((1 ? (arr_16 [i_4]) : (arr_17 [i_4 - 2] [i_8]))))));

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                arr_34 [i_4] [i_8] [i_4] = 15617364922171084827;
                var_25 = (((!(arr_17 [i_4] [i_4 - 1]))));
                var_26 += ((!((min(var_6, (arr_16 [i_8]))))));
                arr_35 [i_4 + 1] [i_8] [i_4] = (arr_14 [i_4] [i_4]);
            }
        }
        var_27 = (((~((~(arr_33 [i_4] [i_4 - 2]))))));
        var_28 ^= (((((~(arr_2 [i_4] [i_4])))) ? (arr_33 [16] [i_4]) : ((201 ? var_3 : (arr_17 [i_4 + 2] [i_4 - 3])))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] = (((((arr_6 [i_10] [i_10] [i_10] [i_10]) ^ 219))) ? (arr_33 [i_10] [i_10 - 3]) : (arr_20 [i_10]));
        var_29 *= 3585148952;
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        arr_41 [i_11] = (!-4702127131040117406);
        var_30 += ((-2147483640 ? 55 : (((var_5 % 4702127131040117399) ^ 118))));
    }
    var_31 ^= ((var_9 >= (((var_7 ? var_9 : var_7)))));
    #pragma endscop
}
