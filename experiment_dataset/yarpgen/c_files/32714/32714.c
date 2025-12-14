/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 855443146;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((-(((16481448270316120872 == var_8) - (min(var_2, var_6))))));
        arr_2 [15] |= (min(16481448270316120882, 1965295803393430753));
        var_12 += (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_13 = (max(var_13, (9777281425629370334 != 137438429184)));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_14 = -var_5;
                    var_15 -= (~16481448270316120852);
                }
            }
        }
        var_16 = ((~(arr_8 [i_1] [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_17 = (((((arr_12 [i_4]) < ((((16481448270316120891 == (arr_12 [1]))))))) ? 136 : var_0));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_23 [i_7] [i_7] [i_7] [i_8] = (((min((arr_22 [i_4] [i_6] [i_4] [i_7] [15]), ((min(123, var_1)))))) ? (((1965295803393430744 + 29497) ? (min((arr_12 [15]), var_7)) : -36)) : -125);
                                arr_24 [i_4] [i_5] [i_7] [0] [0] = (((22993 || var_1) ? ((~((((arr_21 [i_4] [i_5] [i_5] [i_7] [i_5] [i_5]) < var_4))))) : (((var_1 == (arr_17 [i_6 - 3] [i_6 + 2] [i_6 + 2] [i_6 + 1]))))));
                            }
                        }
                    }
                    var_18 = (((-727591068946832379 / -24318) >= ((var_5 - (arr_20 [i_4] [i_5] [i_6 - 1] [i_5] [1] [i_6 + 2] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_19 = (((arr_13 [1] [1]) >= ((((((124 ? 12 : (arr_13 [i_4] [20])))) ? (arr_25 [i_4] [i_5] [i_10 + 1]) : 121)))));
                                var_20 *= 18446744073709551615;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_21 = (min(145, 8));
                                arr_34 [i_6] [i_11] [i_6] [i_5] [10] = (min(((18446744073709551604 ? (((((arr_32 [i_4] [i_4] [i_6] [i_11] [8] [i_11]) == (arr_29 [i_6]))))) : (min(var_2, 135)))), ((((1 % var_2) ? -63 : 115)))));
                                arr_35 [i_4] [i_4] [i_6 - 2] [2] [i_6 - 2] = ((1965295803393430741 > (((min((arr_21 [i_4] [i_4] [i_6] [i_12] [i_11] [i_12 - 1]), (arr_14 [i_5] [i_6] [i_5])))))));
                                var_22 = (arr_30 [1]);
                            }
                        }
                    }
                    var_23 = (min((1 & -1), -114));
                }
            }
        }
    }
    var_24 ^= var_1;
    var_25 = var_5;
    var_26 = ((((((min(var_0, var_3)) < -var_8)))) - (min(var_5, (~var_1))));
    #pragma endscop
}
