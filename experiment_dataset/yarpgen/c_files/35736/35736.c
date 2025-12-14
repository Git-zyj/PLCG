/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_13 = (!var_8);
        var_14 = (3157483264 / var_0);
        arr_3 [i_0] [i_0] = ((~(arr_1 [i_0 + 2])));
        var_15 = (~var_3);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_16 = 27137;
        arr_8 [i_1] = var_6;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_17 = 27137;
                                var_18 |= (max(118159854, 12288));
                            }
                        }
                    }
                    var_19 = ((~((var_12 << (((arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_3]) - 9088601288834469771))))));
                    var_20 = var_2;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((-385301690196136000 - (arr_7 [i_1 - 1] [i_1])))) ? (((38380 / -8364354887379806811) * (arr_25 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))) : var_11)))));
                                var_22 = (!60414);
                                var_23 += 197;
                                arr_26 [i_1] [i_2] [i_3] [22] [i_7] = (arr_13 [i_3] [i_1] [i_2] [i_6]);
                            }
                        }
                    }
                }
            }
        }
        var_24 = (min(var_24, (7 * 201)));
    }
    for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
    {
        var_25 = var_12;
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        var_26 = (~var_7);
                        var_27 = (((arr_15 [2] [i_11] [13] [2] [i_11 + 2] [i_8 + 2]) >> (29155 - 29155)));
                    }
                    var_28 -= 12;
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_29 &= (1682314167 && 65535);
                                var_30 = (1 <= 0);
                            }
                        }
                    }
                    var_31 = ((((((-(arr_31 [i_8] [i_9] [i_8])))))) * 3637224006);
                }
            }
        }
        arr_42 [i_8] = (max((((~((~(arr_18 [i_8 + 3] [i_8] [i_8 + 2] [i_8] [i_8] [i_8 + 3])))))), (max(var_1, (1125899904745472 - -5157293153612730122)))));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
    {
        var_32 = ((-2790 / (var_4 + var_11)));
        var_33 = (var_1 - 2153351398977073998);
        arr_47 [i_14] = (((-20456 ^ var_8) ? var_6 : ((((arr_28 [i_14]) && var_4)))));
    }
    var_34 ^= ((456976655 >> ((((var_1 ? var_4 : ((-(-127 - 1))))) + 39))));
    #pragma endscop
}
