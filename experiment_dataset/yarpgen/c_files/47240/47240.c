/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((((((-1 + 2147483647) << (43 - 43)))) ? 4503049871556608 : -8602959503043020923));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 *= ((~var_14) || (((-75 ? 14199 : 1))));
                        var_20 = (min(var_20, var_1));
                    }
                }
            }
        }
        var_21 = (min(var_21, (((9223372036854775792 ? ((var_0 ? var_13 : var_7)) : (var_13 / -54))))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_22 |= (~129);

            /* vectorizable */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_23 *= (var_18 < var_0);
                arr_20 [i_0] [i_0] [i_0] = (var_14 ? (var_6 == var_7) : var_10);
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_24 ^= ((~((((var_8 ? var_2 : var_18)) << (var_2 - 33037)))));
                var_25 = (max(var_25, (max(((~(var_18 < var_13))), ((var_1 ? var_16 : var_0))))));
                var_26 -= (((((~(~var_0)))) && ((((min(var_8, var_15))) == (var_1 >= var_16)))));
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_26 [i_0] [i_7] [i_4] |= (((((((var_0 ? var_14 : var_3))) * var_6)) == (var_5 || var_3)));
                var_27 *= (min((~var_4), (min((~var_2), var_9))));

                /* vectorizable */
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    var_28 *= ((-80 ? 8191 : 2032));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_29 += (((~var_7) ? var_12 : (~var_10)));
                        arr_31 [1] [i_4] [i_7] [i_8] [1] [i_0] [i_9] = ((~(~-8201)));
                        var_30 = var_4;
                        var_31 = (var_7 > var_0);
                    }
                }
                var_32 = (min(var_32, (((!((min((var_15 == var_16), var_3))))))));
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_33 = (min(var_33, (((var_10 | (var_15 ^ var_10))))));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_34 = (~var_11);
            var_35 *= ((var_11 <= (~var_3)));
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            var_36 = (min(var_36, (var_3 || var_1)));
            var_37 += ((-17 == (var_14 < var_11)));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_38 = (min(var_38, -var_12));
            var_39 *= var_11;
        }
    }
    var_40 = var_1;
    var_41 *= (~var_4);
    #pragma endscop
}
