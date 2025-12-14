/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (max(var_6, ((min(var_0, var_5))))) : ((((min(var_1, var_1))) ? 25 : var_8))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_12 = (min(var_12, ((min((((var_6 < (arr_4 [i_0] [0])))), (min((arr_4 [0] [16]), (arr_5 [i_0] [i_1 - 1]))))))));
            var_13 = ((-((var_6 ? (arr_3 [i_1 - 2] [i_1 + 2]) : (arr_3 [i_1 + 2] [i_1 - 1])))));
            var_14 = (arr_4 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_8 [i_0] [i_1 + 2] [i_2] [i_1] = ((((((max((arr_0 [15]), var_4)) % (88 && 29763)))) > (min((arr_7 [i_1] [i_1] [i_1 + 1] [i_0]), ((var_9 ? 3758096384 : 3058251466))))));
                arr_9 [i_1] [i_1] = 2361430792;
            }
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_15 = max(((((arr_13 [i_3] [i_3] [i_0]) + (arr_12 [i_0] [i_3])))), (((arr_2 [i_0] [i_3] [i_0]) - (arr_10 [i_0] [i_0]))));

            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                var_16 = (min(1933536503, (min((arr_1 [i_4 - 1]), var_10))));
                var_17 = (((((138 ? var_4 : (!var_6)))) + (min((1933536507 % 875274090), (((arr_6 [i_0] [i_0] [i_0]) + 1502))))));
                var_18 = ((((~(max(2361430772, var_10)))) >= (arr_3 [i_0] [i_3])));
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_19 [i_3] [i_3] [i_3] = 153;
                var_19 = (min(((((arr_10 [i_5] [i_0]) > (arr_13 [i_0] [i_0] [i_0])))), (max((arr_15 [i_3] [i_5]), var_10))));
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_22 [16] [i_6] [6] = (1455034719092171690 - 4624383425192923938);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_28 [i_8] [i_7] [i_6] = var_8;
                        var_20 = max(92, -2719);
                    }
                }
            }
            var_21 |= ((((((arr_18 [i_0]) | (arr_18 [i_0])))) ? ((28151 ? (arr_18 [i_6]) : -32751)) : ((max((arr_18 [i_0]), (arr_18 [i_0]))))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_22 = (max(((161 % (min((arr_25 [i_0] [i_0] [i_0] [i_9]), var_3)))), (arr_21 [i_0] [i_0] [i_0])));
            var_23 = (((((max(var_0, var_2))) ? 2361430792 : (arr_27 [1] [1] [i_0] [i_9] [i_9] [i_9]))));
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_24 = var_8;

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_25 = ((+((((arr_24 [12] [i_11] [i_11] [i_11]) == 9)))));
                            arr_43 [i_0] [2] [i_11] [i_12] [i_13] [1] = var_9;
                        }
                    }
                }
            }
            arr_44 [i_10] |= (158 >= var_9);
            arr_45 [i_0] = (arr_6 [i_0] [i_0] [i_10]);
        }
        arr_46 [i_0] = ((((max(3744921260, 3200754575)) <= (2082 % 88))));
        var_26 = min((arr_37 [i_0] [i_0] [i_0] [i_0]), (((arr_42 [4] [16]) ? (arr_37 [i_0] [i_0] [i_0] [i_0]) : 2361430808)));
        var_27 = (max(var_27, (arr_30 [6] [i_0])));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    arr_56 [17] [1] [i_14] = ((!(178 == 135)));
                    var_28 = (min(((((~-18095) && ((min((arr_52 [i_14]), -8996)))))), var_5));
                }
            }
        }
        arr_57 [i_14] = (!var_2);
    }
    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
    {
        var_29 *= (((arr_55 [i_17] [i_17] [i_17]) * ((min(3744921276, -351493615)))));
        var_30 = ((((((arr_53 [i_17]) & var_1)) ^ (var_4 & 152))) | var_1);
        var_31 = ((((max(2361430792, (arr_51 [18] [i_17])))) != ((3 ? 255 : 9223372036854775807))));
    }
    var_32 = (((max(-var_10, ((max(var_6, var_3)))))) ? (var_3 ^ 22198) : ((min((max(268435454, var_1)), (var_0 == var_4)))));
    var_33 = 1;
    #pragma endscop
}
