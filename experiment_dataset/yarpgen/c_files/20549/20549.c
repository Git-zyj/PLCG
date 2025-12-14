/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_1 [i_0]) << (35888059530608640 - 35888059530608633))))));
        var_17 = 137696097;
        var_18 += ((arr_2 [i_0]) != var_14);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 -= 1;
        arr_8 [i_1] [i_1] = (((arr_2 [i_1]) ? (arr_2 [i_1]) : var_7));
        arr_9 [i_1] [i_1] = (((((0 ? 268435200 : (arr_4 [i_1])))) ? (((!(-9223372036854775807 - 1)))) : (arr_0 [i_1])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_13 [i_2] = (arr_10 [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        var_20 ^= ((var_14 ? -1914158422 : (var_13 / var_9)));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_21 = ((39068 + (arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4 - 2])));
                            var_22 ^= (((~var_2) ? var_0 : (var_7 && 255)));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_27 [i_1] [i_6] = arr_5 [i_1];
            var_23 = ((var_2 ? (((1516669084 ? -26747 : (arr_4 [i_6])))) : ((3 ? -20749 : -9223372036854775796))));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_24 = (((arr_28 [0] [i_1]) == var_2));
            var_25 ^= ((6806 / (arr_1 [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_26 = (max(var_26, (((-1 ? ((var_7 << (3877163066 - 3877163066))) : ((2069183687739951170 ? var_0 : var_13)))))));
                        var_27 = ((1559657560 ? 12 : 63));
                    }
                }
            }
            var_28 = -5523723538407702413;
        }
    }

    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        arr_41 [i_10] = (((((arr_0 [i_10 + 1]) && 6968511171769340689)) && (!7)));
        var_29 = (((-32767 - 1) ? var_14 : 3));
        var_30 = min((((((15 ? 4771479290865116443 : 0))) ? 1274597469 : ((31027 ? (arr_11 [i_10 + 1] [i_10 - 1] [i_10 + 1]) : (arr_7 [i_10]))))), ((min((arr_14 [i_10] [i_10]), (min(1, var_5))))));
    }
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        arr_45 [i_11] = (min(var_0, (((!(13619 && 1))))));
        var_31 = (((arr_44 [i_11 - 1]) ^ (max(9223372036854775807, var_10))));
    }
    var_32 = (((var_5 * 1) >= (var_0 <= var_1)));
    #pragma endscop
}
