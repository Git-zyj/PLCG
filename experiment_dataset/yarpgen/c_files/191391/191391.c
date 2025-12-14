/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [5] [i_1] [i_1] [i_2] = ((!((((((arr_2 [i_0]) ? (arr_1 [i_2]) : var_3)) - (arr_1 [i_2]))))));
                    arr_8 [i_1] [i_1] [i_1] = ((((var_3 ? 109 : (((arr_0 [i_2]) ? var_0 : (arr_1 [i_1]))))) <= (!var_3)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_10 = var_5;
                                var_11 ^= ((-1 ? ((((25661 % 116) && 11369528732631945253))) : var_6));
                                arr_23 [i_5] = 128;
                            }
                        }
                    }
                    arr_24 [i_4] [7] [i_0] = ((~((var_2 % (arr_12 [16] [i_3] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_30 [i_8] [i_7] [i_8] [i_3] [i_0] = (((arr_1 [i_0]) + ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
                                var_12 = (max(var_12, (((+(((~-1697442332) << (((min(var_8, 1)) - 1)))))))));
                                var_13 = (10047273937482413507 != 13165913767271912658);
                                arr_31 [i_0] [i_3] [i_8] [12] [i_4] [i_0] = (max(1750367117, 1));
                            }
                        }
                    }
                }
            }
        }
        var_14 = (min(var_14, ((((((max((arr_2 [i_0]), (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [4])))) ? ((0 ? (arr_20 [i_0] [i_0] [0] [i_0] [i_0]) : var_8)) : (arr_25 [i_0] [i_0])))))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_15 = ((((max((max((arr_33 [1]), var_9)), (arr_27 [i_9] [i_9] [i_9])))) || var_2));
        var_16 = (~(~1697442332));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_42 [i_10] [i_10] [i_10] = (((((arr_39 [i_12] [i_12 + 2] [i_10] [i_12]) && var_2)) ? (((-(arr_19 [4] [i_12 - 1] [i_12] [i_12 - 2])))) : (max((arr_39 [i_12] [i_12 + 1] [i_10] [i_12]), (arr_39 [i_12] [i_12 - 1] [i_10] [i_12 - 1])))));
                                arr_43 [i_13] [i_13] [i_10] [i_11] [i_10] [11] [i_9] = (arr_35 [i_11] [i_12] [i_12]);
                                var_17 = ((((((arr_17 [i_12 - 1] [i_12 - 1] [i_12] [i_12 + 3]) ? (~0) : (min(var_5, -17))))) ? (min((arr_26 [i_12 + 2] [i_10] [i_11] [i_12]), -var_8)) : (arr_12 [i_12 + 1] [i_12 - 1] [i_12 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_18 = (max((((5819869134181239615 && -22) ? ((~(arr_6 [i_15]))) : (arr_27 [i_9] [i_10] [3]))), 1059142152));
                                arr_50 [i_9] [i_10] [i_9] = ((8410117112594155465 ? -144 : 2285288366482032233));
                                var_19 &= (arr_29 [i_9] [i_10] [13] [i_14] [0]);
                            }
                        }
                    }
                }
            }
        }
        arr_51 [14] = var_6;
    }
    for (int i_16 = 1; i_16 < 9;i_16 += 1)
    {
        arr_56 [i_16] = (((max(((max(var_5, (arr_33 [i_16])))), (arr_2 [i_16 + 2]))) & var_5));
        var_20 = (~(arr_14 [i_16] [i_16 + 1] [i_16 + 2] [i_16]));
        arr_57 [i_16] = ((((((arr_1 [8]) ? 1 : (arr_49 [i_16] [i_16] [i_16 + 2] [i_16]))))) == (arr_18 [i_16] [i_16 - 1] [i_16] [i_16 + 2]));
        var_21 *= (min((arr_36 [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16 + 1]), ((((!var_6) < (((arr_22 [i_16] [i_16 + 2] [i_16] [i_16] [i_16 + 2] [i_16]) ? var_9 : var_7)))))));
    }
    var_22 = var_9;
    var_23 = (max(var_23, ((((((var_9 ? (var_6 != var_6) : (max(var_1, var_4))))) ? var_4 : var_8)))));
    var_24 = (((var_2 <= var_3) ? 13165913767271912637 : var_8));
    var_25 = var_7;
    #pragma endscop
}
