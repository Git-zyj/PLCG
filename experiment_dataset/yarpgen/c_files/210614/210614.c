/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 = 1;
                                var_13 = (min((((var_7 ? 1 : 57868))), var_0));
                                var_14 = ((((arr_10 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 - 1]) ? var_1 : 1)));
                            }
                        }
                    }
                    var_15 = (249 < var_11);
                    var_16 = (((((1 + (var_4 * 32256)))) ? (((((arr_1 [i_0]) ? 39457 : var_3)) + (min(18446744073709551615, var_10)))) : ((((!(((2807601886 ? 39857 : 3440814734218964605)))))))));
                    var_17 += ((-((min(var_7, 1)))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_18 = 9223372036854775796;
                        var_19 = (min((arr_14 [i_5] [i_0] [i_2 + 1] [i_5] [i_0]), 1));
                        var_20 = (max(var_20, (((max((min(137, 18446744073709551615)), 33279))))));
                        var_21 = (max(var_21, (arr_3 [i_2 - 1])));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_22 = (((((min(65504, 1)))) || (((-(((arr_12 [i_0] [i_1] [i_0] [i_2] [i_6]) - var_0)))))));
                        var_23 -= (max((min((arr_1 [i_6]), 9223372036854775796)), ((((~33264) == var_9)))));
                        var_24 = (min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (!31)));
                        var_25 = (~var_3);
                    }
                }
            }
        }
    }
    var_26 *= var_0;

    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        var_27 = (((min((((arr_22 [i_7]) ? var_2 : (arr_21 [i_7] [i_7]))), ((~(arr_21 [i_7] [i_7]))))) >> ((((0 | (16315732223176768582 ^ 1485910059))) - 16315732224106908729))));
        var_28 = ((~((~(((!(arr_22 [i_7]))))))));

        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            arr_26 [i_7] [i_7] [i_7 - 3] = ((-((~(~var_0)))));
            var_29 = (min((arr_25 [i_8]), (((arr_23 [i_7] [i_7]) + var_4))));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            var_30 += 0;
            var_31 = (-((((0 ? 0 : var_3)) * (arr_25 [i_7 - 2]))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_32 = (min(var_10, ((((max(0, var_7)))))));
                            arr_36 [i_9] [i_9] [6] [i_9] [i_10] [i_12] = (((~198) ^ (max(227, (((arr_23 [i_11] [i_12]) ^ 213))))));
                            arr_37 [i_9] [i_9] [i_10] [i_11 + 2] [i_12] = ((((arr_27 [i_7 - 1]) || (arr_23 [i_7 - 1] [i_7 - 1]))));
                            arr_38 [i_7] [5] [i_9] [i_11] [i_12] [i_9] = (((max(((~(arr_27 [i_12]))), (((~(arr_35 [i_7] [15] [i_7] [i_7 + 1] [i_9] [i_7]))))))) ? (~var_10) : ((max((~193), 210))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
