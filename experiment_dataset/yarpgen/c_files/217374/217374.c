/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 |= ((arr_0 [i_0] [i_0]) - var_3);
        var_15 = (min(var_15, (((var_9 * (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((arr_4 [i_1 - 2] [i_1]) ? (arr_4 [i_1 - 2] [i_1]) : (arr_4 [i_1 - 2] [i_1])));
        var_16 = (((arr_4 [i_1 + 1] [i_1]) > (arr_4 [i_1 - 2] [i_1])));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_17 = ((((-(((arr_8 [i_2] [i_2]) << (var_6 - 114))))) * ((max((!var_9), (31861 >= 30603))))));
            var_18 = (((200 + 4985) ? (((((~(arr_8 [i_3] [i_2])))) ? (!var_13) : (((-32761 + 2147483647) >> (-14348 + 14367))))) : ((min(-30603, -30676)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_17 [14] [i_2] [i_2] [i_2] = (arr_14 [i_5] [i_4] [i_3] [i_2 - 1]);
                        var_19 = (((((30600 ? 14539992429908719541 : 60551))) >> ((((37572 ? var_11 : -676)) - 66))));
                        var_20 = (!99);
                    }
                }
            }
        }
        var_21 = var_5;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_22 = (var_11 ? (((!var_10) ? (((arr_21 [i_6]) ? var_6 : var_2)) : (arr_20 [i_6]))) : (arr_20 [i_6]));
        arr_22 [13] = var_0;
    }
    var_23 = (((((((var_11 ? var_0 : var_8))) ? (min(var_3, var_8)) : var_1)) + (var_5 | var_7)));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                arr_29 [i_8] = ((~(arr_27 [i_7] [i_7] [i_7])));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_24 = ((((((~(arr_27 [i_9] [i_9] [i_9]))) + 2147483647)) << (((((arr_34 [i_8] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_8]) ? 104 : (arr_27 [i_9] [11] [12]))) - 104))));
                            var_25 = (min(var_25, (arr_33 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9])));

                            /* vectorizable */
                            for (int i_11 = 1; i_11 < 18;i_11 += 1)
                            {
                                arr_37 [i_7] [i_7] [i_8] [i_7] [i_11] [i_8] = var_3;
                                var_26 ^= (arr_33 [i_9 - 2] [8] [i_9 - 2] [i_11 + 1] [i_11 + 3]);
                            }
                            arr_38 [i_8] [i_8] [i_9] [i_8] = arr_23 [6];
                            var_27 ^= (((arr_21 [17]) > ((var_0 - ((1 ? 30603 : -2029165694))))));
                        }
                    }
                }
                arr_39 [i_8] [i_8] [18] = (max(3906751643800832074, 4238692807));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        {
                            arr_45 [i_7] [9] [i_8] = (arr_42 [i_7] [1] [i_12] [i_7] [i_13]);
                            var_28 ^= (((~30750) ? var_4 : (1500570843903681750 > 0)));
                        }
                    }
                }
                var_29 = ((!((((arr_11 [i_7] [7]) ? var_9 : 51)))));
            }
        }
    }
    #pragma endscop
}
