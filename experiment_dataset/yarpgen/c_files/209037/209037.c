/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 *= 3691766561;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [7] [i_1] [i_2] [i_3] = 33030144;
                        var_12 = (max(var_12, (((max((76480567 >= 18446744073709551615), (((arr_4 [i_3] [i_3]) ? (arr_5 [i_1] [i_1]) : 741995246))))))));
                    }
                }
            }
        }
        var_13 = (arr_8 [i_0] [i_0] [i_0]);

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_14 = (!3552972051);
            var_15 = (max(var_15, (arr_8 [i_0] [i_4] [i_4])));
        }
        var_16 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        arr_15 [10] = (arr_2 [i_5 - 1]);
        var_17 |= var_3;
        var_18 += (arr_13 [i_5]);
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_19 += (((arr_17 [i_6]) ? (min((arr_16 [i_6]), 9358966918712250769)) : (((((min((arr_17 [i_6]), 77))) ? (arr_16 [i_6]) : -20080)))));
        var_20 = (((arr_16 [i_6]) | -33030139));
    }

    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_21 = ((((arr_18 [i_7]) ? (((-23920 ? 20965 : -1))) : (arr_4 [i_7] [i_8]))));
            arr_23 [1] [1] = (((arr_16 [i_7]) ? 9514280823358403468 : ((min((arr_3 [i_7] [i_8] [i_7]), (arr_3 [i_7] [i_7] [i_7]))))));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_26 [i_9] [4] [i_7] = arr_18 [i_9];
            var_22 -= -20965;
            var_23 = (min(var_23, ((min((arr_8 [i_7] [i_7] [16]), -22853)))));
        }
        var_24 ^= min(((min(((9342491346631959889 ? 73 : -2019277599)), -20441))), (max((((!(arr_17 [i_7])))), (arr_2 [i_7]))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_25 = ((~((min((arr_28 [i_10]), (arr_10 [i_10]))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_26 = (min(var_26, (arr_3 [17] [17] [9])));
                                var_27 += max((arr_20 [i_11]), ((63 ? -20965 : (min(17240, (arr_2 [i_10]))))));
                                var_28 = (arr_17 [i_11]);
                            }
                        }
                    }
                    var_29 = arr_11 [i_10] [i_10];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (((~(arr_5 [i_15] [i_15]))))));
        arr_41 [i_15] = ((8475 ? var_4 : (arr_27 [i_15] [i_15])));
        arr_42 [i_15] = (((arr_8 [i_15] [i_15] [i_15]) ? (arr_24 [i_15] [i_15]) : (arr_29 [i_15])));
    }
    var_31 -= var_3;
    var_32 *= var_2;
    #pragma endscop
}
