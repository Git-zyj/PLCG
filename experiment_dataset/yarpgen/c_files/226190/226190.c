/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((min(var_3, var_13))) + (((915426185 ? (var_8 - var_0) : (((var_6 ? 250 : var_1))))))));
    var_16 -= 26579;
    var_17 |= 4294967277;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 -= var_9;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 += ((~(((var_10 >= (arr_5 [i_2] [i_2] [i_2]))))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = var_6;
                        var_20 += (~(var_10 == 1426739071609213156));
                        var_21 += 1;
                        var_22 -= ((var_7 ? (var_0 == 0) : 4119));
                    }
                }
            }
        }
        var_23 = (min(var_23, (~var_9)));
        arr_13 [i_0] = var_4;
        arr_14 [i_0] |= (!96);
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] = (arr_20 [i_5] [i_5] [i_6] [i_4 + 1]);
                        arr_25 [0] [i_5] [i_4 - 1] [i_4] = -var_7;
                        arr_26 [i_7] |= (min(((((((arr_15 [i_4]) ^ var_9))) ? ((max(var_1, var_13))) : (((arr_15 [i_5]) ? 9072023772673347902 : var_11)))), (((arr_20 [i_7] [i_6] [i_5] [i_7]) | ((-(arr_19 [i_7])))))));
                    }
                }
            }
            arr_27 [i_5] = (min(((((arr_16 [i_4 + 1]) ? (arr_20 [i_5] [9] [i_4 + 3] [i_4]) : (arr_16 [i_4 + 1])))), 2553078796492661802));
            var_24 |= (max(9072023772673347928, (max((arr_22 [i_5] [i_5] [i_4] [i_4] [i_4]), (arr_22 [i_4] [i_4 + 3] [i_4 - 1] [i_4 - 1] [i_4 + 1])))));
            var_25 += (!var_7);
            var_26 = (arr_18 [i_5]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_31 [i_4] |= (((((4119 ? (arr_15 [i_8]) : var_5))) ? 28662 : (((!(((~(arr_23 [i_4] [20] [i_8] [10])))))))));
            var_27 += ((((arr_28 [i_4 + 3] [i_4 + 3] [i_4]) && var_3)));
            var_28 = (min(var_28, ((((arr_21 [i_4] [2] [i_4]) << (((arr_23 [i_4] [12] [i_8] [i_8]) - 4923820899273697940)))))));
            arr_32 [i_4] = ((((max(-var_13, (arr_18 [14])))) ? ((((((arr_23 [i_4] [4] [4] [i_8]) << (9072023772673347935 - 9072023772673347895)))) ? (max(2894397952, var_13)) : (1 > 60066))) : (max(var_6, (25796 >= 17592186044352)))));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_29 = (max(var_29, (var_9 < var_6)));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        var_30 += var_6;

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            var_31 = ((4110 == (((arr_39 [i_9] [i_10] [i_11] [i_10]) ? var_6 : var_13))));
                            arr_44 [i_12] [i_11] [i_10] [i_4] [i_9] [i_9] [i_4] |= (((var_12 && -3673406062702783115) ? var_6 : var_8));
                            var_32 = var_12;
                            var_33 = (~(((18 >= (arr_37 [i_4 - 1] [i_9] [i_12])))));
                            arr_45 [i_4] [i_11] [i_9] [i_9] [i_9] [i_4] = (arr_35 [i_4 + 1] [i_12 - 1]);
                        }
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            arr_49 [i_4] [i_9] [i_9] [15] [i_11] [i_9] [i_13] = var_4;
                            var_34 |= ((-(min(((103 ? 17592186044370 : var_14)), (arr_21 [i_4] [12] [i_10 - 1])))));
                            arr_50 [i_4] [i_9] [i_10] [i_11] [i_11] [1] [i_13 - 1] = (((~var_14) <= (min(18, (arr_28 [i_10 - 2] [i_10 - 2] [i_13])))));
                        }
                    }
                }
            }
        }
        var_35 = var_10;
        arr_51 [i_4 + 2] = (max(-var_2, ((~(arr_17 [i_4 + 1])))));
    }
    #pragma endscop
}
