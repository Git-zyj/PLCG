/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_4 ? var_1 : 0))) < ((153429179 << (var_9 - 9213))))));
    var_14 = (~62914560);

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = var_8;
        arr_4 [11] = (min(((1 ? 1357228399 : var_0)), (0 | -7012)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = (max(1, (1 <= 1)));
                    var_16 = ((-(((arr_3 [i_0 + 3]) ? var_4 : var_8))));
                }
            }
        }
        var_17 = (((((min((arr_5 [i_0] [i_0] [i_0]), (arr_1 [i_0] [1]))) << (((((arr_2 [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0 + 2]) : 16418284470733779000)) - 8768476049877945568)))) << (((min((arr_8 [i_0 + 1] [i_0] [i_0] [i_0]), var_2)) - 856002678))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_18 = 3475927619351188395;
        arr_12 [i_3] = (!6550);
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    var_19 = (max(var_19, var_12));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((arr_11 [i_4 - 1]) ? ((((var_6 % (arr_7 [i_5] [i_6] [i_6]))) >> (var_6 - 3477238158))) : ((((var_9 / (arr_16 [i_8]))) * (var_9 / var_11)))))));
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [1] [i_4] = (((arr_5 [i_4 + 1] [i_4 + 2] [i_4 - 3]) >> (((arr_2 [i_5 + 4]) + 30602))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_32 [i_4] [1] [i_6] [i_9] [i_10 - 1] = var_4;
                                var_21 = arr_23 [i_4] [i_5] [i_6];
                                var_22 = (~65524);
                            }
                        }
                    }
                    var_23 = (0 != 0);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_24 = (max(var_24, ((((arr_33 [12] [i_11] [i_4]) < var_2)))));
                    var_25 = (arr_11 [i_4]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 14;i_14 += 1)
            {
                {
                    var_26 |= ((~(arr_16 [i_4 - 1])));
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_27 = (max(var_27, var_11));
                                var_28 = (((!var_1) ? (0 * -9059881508561610730) : ((max((arr_0 [i_4]), var_1)))));
                            }
                        }
                    }
                    var_29 = ((-7014 > (((2634203435676880777 ^ 4) ? 415274116 : (max(-9011352202659798096, 0))))));
                    var_30 = ((((51037 + (arr_11 [i_4 - 2]))) != ((min((arr_11 [i_4 - 1]), var_4)))));
                    arr_49 [i_4 - 1] [i_13] [i_14] = (((((-32767 - 1) + 2147483647)) >> 1));
                }
            }
        }
    }
    #pragma endscop
}
