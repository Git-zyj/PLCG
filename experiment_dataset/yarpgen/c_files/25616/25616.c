/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_0 [i_0 + 1]);
        arr_2 [i_0] |= (min(((1 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))), (arr_0 [i_0 + 1])));
        arr_3 [i_0] = ((((!(arr_0 [i_0 + 1]))) ? (~var_16) : (((!((min(18446744073709551615, 1))))))));
        arr_4 [i_0] = (((~9223372036854775807) ? (~var_13) : 11580900026457380121));
        var_20 = ((~(arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_21 += (max(var_13, (((var_6 ? (arr_6 [i_1] [i_1]) : (((!(arr_5 [i_1 + 1])))))))));
        var_22 *= (min((((~(~var_11)))), 6865844047252171494));
        var_23 = (min(var_23, (var_0 / 5557043526772336078)));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_24 = (max(var_24, var_4));
                    arr_15 [i_2] [i_3] [i_2] = (i_2 % 2 == 0) ? ((((((~var_3) + 2147483647)) << ((((!1) > (arr_13 [i_2] [i_2] [i_2]))))))) : ((((((~var_3) + 2147483647)) << ((((((!1) > (arr_13 [i_2] [i_2] [i_2])))) - 1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] = ((!((min((arr_8 [i_2 - 2] [i_6 + 1]), (arr_8 [i_2 + 1] [i_6 + 1]))))));
                                arr_21 [i_3] [i_3] &= (min((-6118086158319521162 >= 18446744073709551608), (((11580900026457380121 < ((1 ? 8 : (arr_10 [i_3]))))))));
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((((min((arr_1 [i_2 + 1]), (arr_6 [i_2] [i_2 - 2])))) + (((arr_6 [i_2 - 1] [i_2 - 2]) - (arr_6 [i_2 + 1] [i_2 - 2])))));
        arr_22 [i_2] [i_2] = ((~(((arr_17 [i_2] [i_2]) ? (arr_13 [i_2] [i_2] [i_2]) : (min((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]), 8))))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_26 = (max(var_26, 1938334798952130168));
        var_27 -= (((arr_24 [i_7 + 2]) ? 18446744073709551614 : (((166 >> (4360207383285000045 - 4360207383285000036))))));
    }
    var_28 = (max((((6865844047252171495 + 2147483647) << ((((6620151946990431524 ? 18446744073709551609 : var_15)) - 18446744073709551609)))), -1939779906));

    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    {
                        var_29 = 11580900026457380121;
                        var_30 = var_12;
                        var_31 = ((!18446744073709551615) ^ 18446744073709551614);
                        var_32 = ((var_3 >= (!-1180356461)));
                    }
                }
            }
        }
        var_33 ^= 1;
        arr_37 [i_8] = (arr_6 [i_8] [i_8]);
    }
    #pragma endscop
}
