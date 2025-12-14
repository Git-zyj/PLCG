/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = (3027291660 ? 3027291660 : ((4294967278 ? var_4 : var_1)));
            arr_7 [3] = (var_3 | var_10);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_13 = ((var_11 ? var_8 : var_10));
                            var_14 += ((var_11 ? var_11 : var_5));
                            var_15 = ((var_8 ? (var_2 >= var_0) : ((var_4 ? var_11 : var_8))));
                        }
                    }
                }
            }
            var_16 = -250;
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                var_17 = var_10;
                var_18 = (((!16383) ? var_3 : var_7));
            }
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    var_19 = ((var_6 ? 188 : var_11));
                    var_20 = (((((var_6 ? var_8 : var_1))) ? var_8 : ((var_10 ? var_9 : var_8))));
                }
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    var_21 += ((var_3 ? var_11 : var_4));
                    arr_31 [i_0] [i_5] [15] [i_9] = (((((var_5 ? var_9 : var_6))) ? ((var_2 ? var_2 : var_5)) : var_1));
                    var_22 = var_1;
                }
                arr_32 [17] [6] [i_7] = var_11;
                var_23 *= (((var_8 ? var_2 : var_2)) % var_8);
                var_24 = var_7;
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_25 = (((!var_5) ? ((var_1 ? var_11 : var_6)) : var_7));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_26 = ((var_6 ? ((var_0 ? var_4 : var_1)) : (var_6 - var_6)));
                            var_27 = (min(var_27, -var_7));
                        }
                    }
                }
                var_28 += ((var_7 || (4294967277 | 498827346)));
            }
            var_29 |= ((!(((var_6 ? var_11 : var_8)))));
        }
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 20;i_14 += 1)
            {
                {
                    arr_44 [i_0] [i_13] [i_13] [14] = (((var_7 ? var_1 : var_8)));
                    var_30 = (max(var_30, (((var_7 ? ((var_8 ? var_5 : var_9)) : ((var_9 << (var_1 + 2773697860694522949))))))));
                }
            }
        }
        arr_45 [i_0] = (2804816564 * 2147483648);
    }
    for (int i_15 = 4; i_15 < 13;i_15 += 1)
    {
        arr_50 [i_15] [12] = ((var_7 ? var_5 : ((66 % ((var_9 ? var_9 : var_9))))));
        arr_51 [i_15] [i_15] = (min((((((var_7 ? var_9 : var_8))) ? (var_11 ^ var_7) : ((var_5 ? var_1 : var_7)))), ((((((var_0 ? var_9 : var_4))) ? ((var_4 ? var_4 : var_9)) : (min(2147483648, 251)))))));

        for (int i_16 = 2; i_16 < 12;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 10;i_19 += 1)
                    {
                        {
                            arr_64 [6] [8] [i_17] [7] [0] = var_4;
                            var_31 |= 251;
                            arr_65 [5] [7] [12] [12] [7] [i_15] = var_8;
                            var_32 = ((((((((var_3 ? var_5 : var_10))) ? ((var_6 ? var_2 : var_8)) : (((var_10 ? var_8 : var_3)))))) ? ((var_9 ? var_7 : var_1)) : (((var_1 ? var_4 : var_3)))));
                        }
                    }
                }
            }
            var_33 = var_2;
            var_34 &= ((((((var_8 ? var_1 : var_4)))) ? (((((var_4 ? var_7 : var_5))))) : (((((var_7 ? var_9 : var_4))) ? (var_11 ^ var_5) : (min(var_10, var_2))))));
        }

        for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
        {
            arr_68 [i_15] [3] [7] = var_0;
            var_35 = (((((var_11 ? var_1 : var_2))) ? var_6 : (!var_1)));
        }
        for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
        {
            arr_71 [i_21] = (((((var_6 ? var_1 : (!-7996260555246237595)))) ? ((((((var_3 ? var_8 : var_4))) ? (min(var_6, var_5)) : ((var_6 ? var_10 : var_6))))) : (((((var_6 ? var_7 : var_3))) ? (min(var_3, var_11)) : (255 <= 268435440)))));
            arr_72 [i_21] [i_21] = var_2;
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 12;i_23 += 1)
                {
                    {

                        for (int i_24 = 0; i_24 < 14;i_24 += 1)
                        {
                            var_36 |= ((var_10 ? var_1 : var_2));
                            var_37 += (max(var_9, ((((min(var_6, var_4))) ? (min(var_3, var_1)) : (((var_5 ? var_5 : var_4)))))));
                        }
                        var_38 = ((((min((var_7 <= var_5), -var_6))) >= (max(var_7, ((var_7 ? var_4 : var_10))))));
                    }
                }
            }
            var_39 |= (((((36902 ? 268435432 : 202))) ? (((!((min(var_8, var_8)))))) : (var_10 + var_8)));
        }
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 13;i_25 += 1)
    {
        var_40 = (((var_0 % var_10) >= var_3));
        arr_82 [i_25] = (var_0 & var_8);
        var_41 = (~var_4);
    }
    var_42 = (min(var_42, (((var_4 ? ((((var_9 && var_11) ? ((var_2 ? var_8 : var_9)) : ((max(var_6, var_9)))))) : var_2)))));
    #pragma endscop
}
