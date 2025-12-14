/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [8] &= (((((((arr_1 [i_0]) >= 5))) < ((min((arr_0 [i_0] [i_0]), 5328))))));
        arr_3 [i_0] = (max((((~(arr_0 [i_0 + 1] [i_0 + 1])))), ((var_3 + (arr_0 [i_0 + 1] [i_0 - 1])))));
        arr_4 [i_0] [i_0] |= ((((~-5329) ? ((max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0] [i_0])))) : var_6)) >> (var_3 - 3540020886));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((((0 ? (arr_0 [i_1] [i_1]) : var_7)) <= var_4));
        arr_10 [i_1] = arr_6 [11];
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (-5329 + 33)));
        arr_14 [i_2] [9] = (arr_0 [i_2 - 1] [i_2 - 1]);
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] [i_3] = (arr_5 [i_3 + 1] [i_3]);
        arr_19 [i_3] = 1955096590617496022;
        var_12 = (min(18446744073709551598, 255));
        var_13 = max(1955096590617496022, 170);
    }

    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_30 [i_6] [i_5] [i_4] |= (5320 || 7896777278665451641);
                    var_14 &= ((((-3614472285916571837 ? 83 : 7573797631500072183)) + var_1));
                }
            }
        }
        var_15 = 2876737345;
        var_16 = (max((arr_21 [i_4 - 2]), ((0 ? (-7244689236967594074 < -7244689236967594074) : 7244689236967594073))));
        arr_31 [i_4] [i_4 + 2] = (18 || 3671750842);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    {
                        var_17 = var_0;
                        var_18 = (((arr_21 [i_9]) <= (((((-14980 ? -98 : -5329))) ? 18446744073709551597 : 11317663521534232254))));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_42 [i_10] = (4156892516 <= var_7);
        arr_43 [i_10] [i_10] = (((!(6635018053527985138 <= 3671750839))));
    }
    var_19 = (((39066 * -6856) ? ((((6856 ? 11 : 134)) + (((var_0 ? var_4 : var_0))))) : ((((((~var_7) + 2147483647)) >> (((115 + 0) - 88)))))));
    var_20 ^= (!var_3);
    var_21 = ((var_2 ? var_3 : (((((min(1731965054, var_4))) ? -1 : -827375510)))));
    #pragma endscop
}
