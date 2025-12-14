/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_2] = (((1 || -20) ? (!1) : ((var_3 ? 1 : var_8))));
                            var_11 = var_4;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_12 = 1;
                            arr_15 [i_0] [i_0] [i_1 - 3] [i_2] [i_3] [i_5] = 6728031566439440843;
                            var_13 = ((~(var_9 >> 1)));
                            var_14 = 1;
                            var_15 = ((((1 ? 15872 : (max(9946085221931105402, 1)))) | (((var_3 ? var_3 : -1)))));
                        }
                        var_16 = (~-22);
                        var_17 = ((((var_3 ? (var_6 | 1) : var_1)) | (((~(~var_2))))));
                        var_18 ^= (-((var_2 ? (-493603366569009324 <= var_5) : var_6)));
                    }
                }
            }
        }
        var_19 *= ((1 >> (-4528645977130625727 - 38185)));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_20 = (max(8500658851778446213, -77));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    {

                        for (int i_10 = 4; i_10 < 23;i_10 += 1)
                        {
                            arr_28 [i_7] [i_7] = -17793;
                            arr_29 [i_6] [i_6] [i_7] [i_7] [i_6] [i_9] [i_10] = var_2;
                        }
                        var_21 = ((((((!-20) ? var_9 : ((max(var_8, -24)))))) ? var_8 : (((var_1 ? var_5 : var_8)))));
                    }
                }
            }
        }
        arr_30 [i_6] [12] = ((1 - var_9) ? (((var_1 ? var_7 : var_9))) : (var_4 / 22));
        var_22 = (min(var_22, (((-(!-83))))));

        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {

            /* vectorizable */
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                var_23 ^= (-1 ? 1236 : 36);
                var_24 = var_7;
                var_25 = (max(var_25, (((-26 ? (5337327594565984708 / var_2) : (((2703174952 ? -1 : -1596989129))))))));
            }
            var_26 = ((((((1 ? 65525 : var_4)))) ? -17800 : ((3789846870 ? -5976229936448500510 : 0))));
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_27 = (((1596989127 ? 28206 : 1)));
        var_28 = (((((~((var_7 ? 1 : 0))))) ? var_3 : ((min(var_9, var_3)))));
        var_29 = (max((max(((max(var_0, -1596989139))), (max(-7711960699568136276, var_3)))), ((((((var_7 ? var_9 : var_5))) ? -0 : ((min(-7285, var_7))))))));
        var_30 = 116;
    }
    /* LoopNest 3 */
    for (int i_14 = 3; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 3; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_31 = 3221225472;

                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        arr_52 [i_14] [i_15 - 3] [i_15] [i_16] [i_17] [i_17] = ((~(((~var_9) ? (~1073741817) : (((2835963205 ? var_3 : var_5)))))));

                        for (int i_18 = 1; i_18 < 13;i_18 += 1)
                        {
                            arr_55 [i_17] [i_15 - 3] [i_16] [i_15 - 3] [i_18] = ((3221225468 - ((var_3 ? var_4 : var_0))));
                            var_32 = var_5;
                            arr_56 [i_14 - 3] [i_17] [i_16] [4] [i_18] = (((-9223372036854775807 - 1) + ((min(3217019918, 4294967295)))));
                            arr_57 [i_14] [i_14] [i_15 - 2] [i_16] [i_17] [i_17] = ((!((!(((83799045 ? -765072044 : 114)))))));
                        }

                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            var_33 += (1 ? (((((max(var_10, var_7)) <= -var_7)))) : ((var_10 ? ((982 ? 709817121 : 2835963232)) : 1)));
                            arr_61 [i_17] = 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
