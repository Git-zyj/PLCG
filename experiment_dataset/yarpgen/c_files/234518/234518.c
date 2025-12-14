/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] = 0;
                var_16 *= (!(!10527505131155553413));
                var_17 = (min(var_17, ((((-(arr_0 [i_0])))))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_18 = (min(var_18, (arr_4 [i_2] [8])));
            var_19 ^= (((!-10) ? (arr_2 [0]) : 24576));
            arr_11 [i_3] = ((var_3 | (arr_3 [i_3 - 1] [i_3 + 1])));
        }
        arr_12 [i_2] = -6922153384940836912;
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_20 |= var_13;
                        arr_22 [2] [i_5] [i_4] [i_4] [i_2] = (~var_0);
                    }
                }
            }
        }
        arr_23 [i_2] [i_2] = ((((((1 ? 0 : var_1) < ((var_10 ? var_7 : (arr_15 [i_2] [i_2] [7]))))))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((((arr_25 [i_7] [i_7]) ? var_11 : 20993))) ? (((arr_26 [i_7]) ? 18446744073709551613 : (arr_26 [i_7]))) : 18446744073709551613)))));
        var_22 = (min(var_22, -3787));

        /* vectorizable */
        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_29 [2] = ((-(((arr_25 [i_7] [i_7]) ? var_8 : 133))));
            var_23 = 1;
        }
        for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_24 = (min(var_24, ((min(((10527505131155553413 ? 1 : 1)), (arr_33 [i_12] [i_12] [i_12] [i_12]))))));
                            var_25 += (!-16321);
                        }
                    }
                }
            }
            arr_42 [i_7] [i_9] [i_9] = (~var_4);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_26 = (((((((var_3 ^ (arr_31 [i_9]))) / (((arr_36 [i_7]) ? 4553048037167575776 : -583043987))))) ? ((var_3 ? (arr_38 [i_9 + 2] [i_9]) : -15997)) : 0));
                        var_27 = (max(var_27, 1));
                        var_28 *= 7919238942553998191;
                    }
                }
            }
            var_29 += var_11;
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_30 = (min(var_30, (((-14690 ? (arr_48 [i_7] [i_7] [i_7]) : (~var_11))))));
            arr_51 [i_7] [i_15] &= (((arr_39 [i_7] [i_7] [i_7] [i_15] [i_15]) ? (arr_44 [i_7] [i_7] [i_15 + 1]) : (arr_44 [13] [13] [i_15 + 1])));
        }
        for (int i_16 = 3; i_16 < 16;i_16 += 1) /* same iter space */
        {
            arr_54 [i_16] [i_16] = ((15996 ? (!var_1) : ((2050907769 ? (arr_34 [i_16] [i_16] [i_16] [i_16] [i_16 + 4] [i_16 + 4]) : -583043983))));
            var_31 &= 32767;
            var_32 = (((var_10 / (max(var_12, var_3)))));
            var_33 += ((!((max((45153 + 583043972), -12786)))));
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
    {
        var_34 = (((((16005 | (arr_34 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))) ? ((-13170 ? 24576 : 656677728)) : (~1)));
        var_35 -= (0 >= -30120);
        var_36 = 32756;
        var_37 -= ((var_12 ? -3521669585367062361 : (arr_36 [i_17])));
    }
    #pragma endscop
}
