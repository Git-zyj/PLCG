/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 |= (((((((min(var_7, var_9))) ? (max(var_3, 1)) : (arr_0 [i_0 - 1])))) ? (arr_2 [i_0 - 2]) : (min((((arr_0 [i_0]) ? 0 : var_2)), (!0)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 = (((~-1821875470) | ((var_10 ? -1 : var_4))));
            var_15 = ((var_3 << (((arr_1 [i_0 + 1] [i_0 + 1]) + 1150411030))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0 - 2] [14] = (!-2137683879);

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                arr_15 [i_0 + 2] = ((-(arr_6 [i_3 - 1] [i_0 + 2])));
                var_16 = (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [1]);
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_17 = (min(var_17, (((var_3 ? (arr_11 [3] [i_0 - 1] [i_0 + 3] [i_0 + 3]) : (arr_4 [i_0 + 2]))))));
                var_18 = 3727745041895268641;
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_22 [i_0 + 1] [i_2] [i_5] = ((!(!var_7)));
                arr_23 [i_5] [i_5] [i_5] [i_0 - 1] = (arr_16 [4] [i_2] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_29 [i_0] [i_2] [i_5] [i_5] [i_5] [i_7] = (((-12 + 9223372036854775807) << (18446744073709551615 - 18446744073709551615)));
                            var_19 |= (((-12 | var_1) * -var_9));
                        }
                    }
                }
                var_20 *= ((((((var_10 <= (arr_11 [6] [13] [i_2] [i_2]))))) == var_2));
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_21 ^= ((+((((((arr_28 [i_0]) ? var_10 : var_1))) % (((arr_8 [i_0]) ^ 10300940485596254862))))));
            var_22 = (min(var_22, ((((55 * 9) ? (max(((min((arr_19 [2] [i_8] [i_0 - 1] [2]), var_0))), (-7775895301514103396 | 0))) : ((((!(!var_4))))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    {
                        var_23 = var_0;
                        arr_39 [i_10] [i_0] [i_0] = ((~((~(max((arr_4 [13]), var_9))))));
                        arr_40 [i_0 + 1] [i_0 + 1] [i_8] [i_8] [i_10] [i_10] |= (!var_11);
                    }
                }
            }
            var_24 = (min(var_24, ((((((var_11 ? (min((arr_38 [i_0] [1] [1]), var_7)) : (!var_3)))) ? 5046778374150252496 : 4408)))));
        }
        var_25 = (max(var_4, ((~(arr_3 [i_0 - 1] [i_0 - 1])))));
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        var_26 = arr_11 [i_11] [i_11] [i_11] [i_11];
        var_27 = (max(var_27, ((((((min(var_12, 22)))) ? (min(((~(arr_32 [i_11 + 1]))), (~var_6))) : (max(251, var_1)))))));
        var_28 = (min(var_28, ((((~0) ? (((arr_1 [i_11 + 1] [i_11]) & (arr_1 [i_11 + 1] [i_11]))) : (min((arr_1 [i_11 + 1] [8]), 0)))))));
        var_29 = (max((((!12) ? ((var_6 / (arr_1 [i_11] [i_11 + 1]))) : (var_1 && var_1))), ((1035131984 >> (1428 - 1403)))));
    }
    var_30 = (min(var_30, ((((((1 ? 23322 : -7))) ? ((((max(var_4, var_7))) ? (-6 != 65535) : (min(-160376425, var_2)))) : (((((var_2 ? var_2 : var_10))) ? var_6 : (max(var_12, var_7)))))))));
    #pragma endscop
}
