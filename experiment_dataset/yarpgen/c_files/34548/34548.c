/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_2 * var_5) / var_3)) % ((~((17244 ? 30542 : 48292))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (max(var_12, (((((max(((64575 << (var_10 - 22522))), ((var_8 << (((arr_2 [i_0]) - 8460))))))) ? ((((var_0 * (arr_0 [i_0] [i_0]))) ^ (64695 % 24352))) : (arr_0 [i_0] [i_0]))))));
        var_13 -= var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1]) ? (var_4 || var_5) : 47742));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_14 [i_3] [i_4] [i_2] [i_2] [i_3] = (((((var_4 ? var_6 : var_7))) ? (var_7 ^ var_1) : (arr_8 [i_3])));
                            var_14 = (62382 ^ 48292);
                            arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = (((var_6 | var_0) ? var_2 : 64676));
                        }
                    }
                }
            }
            arr_16 [i_1] [i_1] = (((arr_7 [i_1] [i_2 + 3]) / (var_7 != var_4)));
            arr_17 [i_1] [i_1] [i_2] = (((((41183 ? 14160 : 18463))) ? (((arr_6 [i_2]) ? var_9 : var_0)) : (arr_4 [i_1])));
            arr_18 [i_1] [i_2] [i_1] = (((~var_2) ? var_8 : (arr_9 [i_1] [i_2 - 2])));

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_15 += -var_8;
                var_16 = (min(var_16, (~var_5)));
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_17 -= (((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1])));
            arr_24 [i_1] [i_1] [i_7] = ((-(~var_10)));
            var_18 += var_8;
            arr_25 [i_1] &= (arr_12 [i_1]);
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                {
                    var_19 = ((((var_10 ? 841 : var_2)) / 12234));
                    var_20 = arr_3 [i_9];
                }
            }
        }
    }
    for (int i_10 = 4; i_10 < 16;i_10 += 1)
    {
        arr_34 [i_10 + 2] |= (((((((!(arr_12 [i_10 - 2]))) ? (~var_7) : ((17256 ? var_7 : (arr_7 [i_10] [i_10])))))) && ((((min(841, (arr_20 [i_10 - 3] [i_10 - 3] [i_10])))) && (((var_9 ? var_10 : var_8)))))));
        var_21 = (max(var_21, ((max(((859 ? 19672 : 57651)), (((((var_1 >= (arr_33 [i_10 - 1])))) ^ ((max((arr_19 [i_10] [i_10] [i_10] [i_10]), var_5))))))))));
    }
    var_22 = ((var_10 << (var_3 - 58773)));
    #pragma endscop
}
