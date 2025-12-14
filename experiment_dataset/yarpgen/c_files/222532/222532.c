/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = var_7;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_17 *= (1 && 1);
            arr_8 [i_0] [i_0] = ((-var_5 % ((14161170607897266515 ? (arr_4 [i_0] [i_1] [18]) : 1))));
            var_18 = (min(var_18, ((((arr_0 [i_0 + 1]) & (arr_0 [i_0 - 1]))))));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_3 - 2]);
                        arr_17 [i_0] [i_2 + 1] [i_2 + 1] [i_2] = 756718389859844785;
                        var_19 = (max(((((((((arr_1 [i_0]) ? var_1 : 1)) + 2147483647)) >> (((arr_10 [i_0 + 1]) - 1316330348))))), ((-(arr_13 [i_0] [i_0] [i_3 + 2] [i_4])))));
                        var_20 |= (max((2080374784 == 1), ((var_3 > (arr_6 [i_0] [i_3] [i_0])))));
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_0] [i_3 + 2] [i_4 + 1] = (arr_2 [i_0]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_23 [3] [i_2 + 1] [i_0] [10] = (max(var_3, (0 == 1881422325)));
                        arr_24 [i_0] [i_0] = var_13;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_31 [10] [i_0] [22] [i_8] = (min(1, var_12));
                        var_21 |= (((arr_14 [i_0 + 1] [18] [i_0 + 1] [i_0 - 1] [i_0 - 1]) || (arr_7 [i_0 + 1] [i_7])));
                        arr_32 [i_0] = ((0 << (!-109)));
                    }
                }
            }
            arr_33 [i_0 - 1] [i_0] = (((((1 ? var_16 : (max((arr_9 [i_0] [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 1])))))) ? ((((arr_26 [i_0 - 1] [i_2 + 1]) <= (arr_26 [14] [i_2 + 1])))) : (24 - 0)));
        }
        /* vectorizable */
        for (int i_9 = 4; i_9 < 21;i_9 += 1)
        {
            arr_37 [15] [i_0] = (!16776192);
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    {
                        arr_45 [i_0] [i_9 + 1] [i_0] [7] = -5639071397357062946;
                        var_22 = ((40 ? -var_13 : (arr_34 [i_10 - 2])));
                        var_23 = (((arr_40 [i_10 + 1] [i_10 + 2] [i_10 + 1]) | (arr_39 [i_11 + 1] [i_9 + 1] [i_9 + 2] [i_0 - 1])));
                        var_24 += (((arr_27 [i_0] [i_0] [6] [i_0 + 1] [i_0 + 1]) == (~var_0)));
                    }
                }
            }
            arr_46 [i_0] [24] [i_0] = (arr_21 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0 + 1]);
            var_25 *= 71916856549572608;
            var_26 = (((arr_40 [i_9] [i_9 + 4] [i_9 + 2]) - ((1 ? 10288494237893490436 : 18446744073709551615))));
        }

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_27 = (max(var_27, (((~(3972550717729239176 - 7028231983146976658))))));
            arr_49 [i_0] [i_12] = 1;
        }
    }
    var_28 = (min(var_28, -1));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            {
                var_29 -= (arr_34 [i_13]);
                arr_54 [12] [i_14 - 1] [i_14 + 1] = 23892;
            }
        }
    }
    var_30 = var_15;
    #pragma endscop
}
