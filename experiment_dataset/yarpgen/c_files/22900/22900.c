/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_2;
    var_20 = (max((((!(!var_10)))), (~31976)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 = ((6139817105023300153 ? 31968 : 0));
        arr_3 [i_0] [i_0] = (((8 * var_10) % 1));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] = (!0);
            arr_8 [i_0] [i_0] [i_0] = var_3;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_0] [i_2] = var_6;
                        arr_17 [i_0] [i_2] [i_0] = ((-((31976 ? 9223372036854775807 : 1))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_22 = ((var_11 ? -7759 : (arr_24 [i_0] [i_2] [i_0] [i_0 + 1] [i_0] [i_5] [i_0])));
                            var_23 = var_10;
                            arr_25 [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0 - 1]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_33 [i_0 - 1] [i_2] [i_8] [i_9] [i_0] = ((var_6 ? 31996 : var_6));
                        arr_34 [i_0] = 31976;
                    }
                }
            }
            arr_35 [i_0] = ((var_7 ? 23 : (arr_30 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0])));
        }
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_24 = (~var_0);
                            arr_45 [i_0] [i_10] [i_11] [i_12 + 2] [i_0] [i_12 + 2] = var_10;
                        }
                    }
                }
            }
            arr_46 [i_0 + 1] [i_0] [i_10 - 1] = (i_0 % 2 == 0) ? (((var_2 << ((((var_1 ? (arr_42 [i_0] [i_0] [i_0] [i_10]) : -639860376)) - 3085016617342551273))))) : (((var_2 << ((((((var_1 ? (arr_42 [i_0] [i_0] [i_0] [i_10]) : -639860376)) - 3085016617342551273)) - 7516695217925926911)))));
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        var_25 = var_4;
        arr_49 [i_14] = var_4;
        var_26 = 31987;
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
    {
        arr_53 [i_15] = ((((((1090095708418633828 / var_15) ? (min(var_9, 1090095708418633828)) : -1))) ? (((~(arr_12 [i_15] [i_15] [i_15] [10])))) : (min(var_11, ((var_6 ? var_4 : var_0))))));
        /* LoopNest 3 */
        for (int i_16 = 2; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    {
                        var_27 = -7647;
                        arr_62 [1] [1] [i_16] [i_17] [i_17] = (((((~((33549 ? -2 : 47))))) ? (min((min(3386736890, 2225419138708466916)), var_14)) : (((min(var_14, 1))))));
                        var_28 = var_2;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
    {
        var_29 = var_6;
        var_30 = -15;
        arr_67 [i_19] = var_14;
    }
    var_31 += ((((((max(0, 1)) ? var_3 : var_3))) ? ((var_1 ? ((16222523523341185637 ? var_3 : 31976)) : var_4)) : (var_9 * var_12)));
    var_32 = ((4108164531 ? ((((!(!753400953))))) : var_0));
    #pragma endscop
}
