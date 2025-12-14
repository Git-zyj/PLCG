/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        arr_4 [i_0 + 3] = ((min(-51, (max(-2911835144335219775, 3871793190860217888)))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((max(((-32767 - (!1))), ((((max((arr_5 [10]), -3809726393194579527)) >= ((9223372036854775807 ? 7765671605784379215 : (arr_1 [i_1])))))))))));
        arr_8 [4] |= ((-(((((-(arr_1 [i_1])))) | -9223372036854775777))));
        var_20 = 7765671605784379215;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_21 = ((((arr_9 [1]) && 9223372036854775807)) ? (arr_10 [i_2 - 1]) : (arr_0 [i_2 - 1] [i_2 - 1]));

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_22 = (((((108 ? (arr_1 [i_3 + 1]) : var_8))) ? 6893653913640228919 : (!var_14)));
            arr_13 [i_2] [i_2] [i_2] = (arr_5 [10]);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_23 = var_3;
                        arr_23 [i_2 + 4] [i_2 + 4] [4] [i_5] = ((~(0 | 11861883696400231842)));
                    }
                }
            }
            arr_24 [i_4] = (arr_7 [i_2 + 3]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_24 = (min(var_24, (14281369521023263605 | -2147483647)));
                        var_25 = (min(var_25, (-1500418262 == 2441022332)));
                        var_26 = (-((4687 ? var_11 : 5609986631100613528)));
                        arr_30 [i_7] [i_7] = (arr_11 [i_2 - 1] [i_2 + 4] [i_2 + 2]);
                    }
                }
            }
            var_27 = (max(var_27, (arr_18 [i_4])));
            var_28 = 1;
        }

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_29 = (max(var_29, 1500418261));

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_30 = var_14;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_31 = (min(var_31, (!6)));
                            arr_42 [i_10] [8] = 5;
                            var_32 *= ((var_9 < (arr_31 [i_9])));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_33 = 1205848947;
                            var_34 = (min(var_34, 2873145193));
                        }
                    }
                }
                var_35 -= ((3809726393194579516 ? 1 : (arr_5 [i_9])));
            }
            for (int i_16 = 4; i_16 < 9;i_16 += 1)
            {
                var_36 &= (((((-4449 ? 7141294255326729643 : (arr_34 [i_2 - 2] [i_9] [i_9])))) ? (-8489004183234662537 < -121) : ((1 ? 1 : -12400))));

                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    arr_55 [i_9] [i_17] = 6;
                    var_37 *= 52609;
                }
                arr_56 [i_16 - 4] [i_16] [i_2] [i_2] = (24 | -8428331174631697186);
            }
        }
    }
    #pragma endscop
}
