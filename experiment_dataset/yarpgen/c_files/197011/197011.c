/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(6720219660297690313, (max((16242 % 1016), var_4))));
    var_14 = (min(((var_8 ? var_11 : 16221)), (((!(((var_9 ? var_4 : 1))))))));
    var_15 -= 49317;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = 41287;
                    var_17 = -16230;
                    var_18 |= ((1856520519 ? var_9 : var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_4 - 1] = (((arr_2 [i_1]) ? -1712806597769754047 : 16216));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_2 + 1] [i_1] = (!123);
                                arr_14 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4 - 1] = ((49315 ? var_12 : 96));
                            }
                        }
                    }
                    var_19 ^= (~10141583944044435150);
                }
            }
        }
        arr_15 [i_0] = 67;
        var_20 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) - 1712806597769754066));
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        arr_18 [i_5] = 67;
        var_21 += -77;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                {
                    var_22 = (max((arr_4 [i_7 + 1] [i_7 + 1]), ((16219 | (arr_22 [i_7 + 1] [i_8 - 2] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_23 = 303780549;
                                arr_31 [i_6] [i_6] [i_6] [i_7 + 1] [i_8] [i_9] [i_10 + 3] = ((+(min((arr_8 [i_6] [i_7 + 1] [17] [1] [3]), (-9223372036854775807 - 1)))));
                            }
                        }
                    }
                    var_24 = (max(1, (arr_6 [i_8 - 2] [i_7] [i_6])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    arr_37 [i_6] [i_6] [i_11] [11] = (min((((arr_35 [i_6] [0] [i_12]) ? (arr_26 [i_6] [i_11] [i_12]) : 16233)), 109));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_25 = var_8;
                                var_26 = (max(49317, var_3));
                                var_27 = ((147 ? (((1 + (-109 % 67)))) : var_11));
                            }
                        }
                    }
                }
            }
        }
        arr_42 [i_6] [4] = (max((-4096570193503649692 % 24248), ((((2147483647 - (arr_30 [i_6] [i_6] [8] [8] [i_6])))))));
        arr_43 [i_6] = ((!(((108 ? (arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : 1712806597769754046)))));
        var_28 = (((16217 / 1927127338) * (!var_10)));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            {
                var_29 = (max(var_29, (((!(((arr_21 [i_15]) <= var_11)))))));
                var_30 = arr_8 [i_15] [7] [i_15] [i_15] [i_16];
            }
        }
    }
    #pragma endscop
}
