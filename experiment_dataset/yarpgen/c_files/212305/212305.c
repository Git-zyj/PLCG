/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] = ((((((arr_1 [i_1]) <= (arr_8 [i_0])))) >> (-8853682865940756937 + 8853682865940756937)));
                        var_10 = ((-(arr_5 [i_0])));
                        var_11 = (min(var_11, (~12579)));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_0] [i_0] = ((((var_3 ? (arr_10 [i_0] [i_4] [10]) : var_1)) + var_1));
            var_12 = ((33207 ? (arr_6 [i_0]) : var_2));
        }
        arr_18 [i_0] [i_0] = ((-(arr_0 [i_0])));
        var_13 = 124;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (arr_2 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_27 [i_5] [i_5] [i_5] = ((!(((((min(131, var_8))) ? var_1 : var_1)))));
                    var_14 = (max(((min(((1 / (arr_14 [i_5] [i_6]))), (arr_14 [19] [19])))), (-9223372036854775807 - 1)));
                }
            }
        }
        arr_28 [i_5] = (((arr_3 [i_5] [i_5]) ? -11683174399379124004 : (arr_24 [i_5] [i_5] [i_5])));
    }
    var_15 = 83;
    var_16 -= var_9;

    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        var_17 = (((arr_10 [i_8 + 1] [i_8 + 1] [i_8]) ? 124 : (arr_7 [20] [i_8 + 1])));
        arr_32 [i_8 - 1] = ((6545898797665187657 ? 16385131636356934610 : (((arr_15 [i_8] [1] [9]) ? (((arr_31 [i_8 - 2] [i_8]) ? (arr_31 [i_8] [i_8]) : 16385131636356934610)) : 1))));
        arr_33 [20] = (((((((!(arr_30 [i_8])))) >= 16800)) ? ((1 ? 32286 : 124)) : (arr_8 [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                {
                    arr_41 [i_9] [i_8 + 1] [i_10] [i_9] = (~0);
                    var_18 = (arr_5 [i_10]);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_19 = 83;

                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        arr_54 [i_11] [i_11] [i_11] [i_11] [0] [i_14] = 53848;
                        arr_55 [i_11] [i_12] = (!9223372036854775807);
                        var_20 = (min(var_20, (arr_47 [i_11])));
                        var_21 = (arr_43 [i_11]);
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 21;i_15 += 1)
                    {
                        arr_60 [i_13] |= (arr_51 [i_15 + 3] [i_15 + 4]);
                        var_22 = 0;
                        var_23 = (((arr_47 [i_15 + 1]) / (arr_51 [i_15 - 1] [i_15 - 1])));
                    }
                }
            }
        }
        var_24 = (min(-5964030027658345628, ((((((var_9 ? 9223372036854775807 : 132))) ? var_9 : (arr_44 [i_11] [i_11]))))));
        var_25 = (arr_57 [i_11] [i_11] [i_11] [5]);
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        var_26 *= (min((arr_35 [12] [i_16] [i_16]), ((((((-6545898797665187658 ? 529558413 : 38977))) ? 124 : -118)))));
        arr_64 [i_16] = 206;
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            {
                var_27 = (max(var_27, (-9223372036854775807 - 1)));
                var_28 = ((min((38977 <= 0), (arr_35 [i_17] [i_17] [i_17]))));
            }
        }
    }
    #pragma endscop
}
