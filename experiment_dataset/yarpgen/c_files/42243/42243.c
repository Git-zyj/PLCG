/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((((-32767 - 1) ? (arr_0 [i_0] [i_0]) : 32767))) ? var_9 : 875447099));
        var_17 -= (((~-57) ? var_0 : var_11));
        arr_3 [i_0] = 56;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = -var_6;
                    var_19 = (min(var_19, 0));
                }
            }
        }

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 |= var_12;
            var_21 += var_9;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_22 = var_0;
                        arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] |= ((4420 ? ((((arr_12 [i_0] [i_3] [i_4] [i_0] [4] [i_5]) || (arr_10 [i_0] [i_3])))) : ((3072 ? -875447081 : 52))));
                        var_23 = (max(var_23, (-9223372036854775807 - 1)));
                        var_24 -= 250;
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_25 = (max(var_25, (((14701107941894649500 ? (arr_19 [i_0] [i_0] [i_6]) : 20)))));
            var_26 |= (((arr_20 [i_0]) ? 69 : (arr_0 [1] [i_6])));
            arr_21 [i_6] = ((96 ? 14701107941894649500 : 62));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] [6] = ((928823335 ? var_10 : var_14));
            var_27 *= (-32767 - 1);
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_28 = -124;
            var_29 = (((-32767 - 1) ? (!-4639827896794403456) : -0));
        }
    }
    var_30 = var_1;
    var_31 = (max(var_31, -var_14));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 6;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 8;i_13 += 1)
                        {
                            {
                                var_32 *= ((12295 ? (5252 > 18446744073709551615) : ((1702302485 ? (arr_26 [i_12 + 4] [i_9]) : 60287))));
                                var_33 &= var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_45 [i_14] [i_14] [i_14 + 1] [i_14] [i_11] [i_15] = (max((min((arr_38 [i_14 - 1] [i_14 - 1] [i_10 + 1] [i_11] [i_10] [i_10] [i_10]), (arr_38 [i_14 - 1] [i_14 + 1] [i_10] [i_11] [i_10] [i_9] [i_9]))), ((14058797131194309785 ? (arr_38 [i_14 - 1] [i_14 - 1] [i_10 + 1] [i_11] [i_10] [1] [i_10 + 2]) : 2147483392))));
                                arr_46 [i_9] [i_10] [i_11] [i_11] [i_14] [i_11] [i_11] = ((-65519 ? ((-(arr_30 [i_9] [i_10 + 1]))) : (arr_30 [i_15] [i_10 + 1])));
                                var_34 = min(var_14, (min(24, 11217796492146457467)));
                                arr_47 [i_11] [i_9] = var_7;
                            }
                        }
                    }
                }
                var_35 = ((1 ? var_7 : 114));
            }
        }
    }
    var_36 = (((~var_1) ? (-9223372036854775807 - 1) : (((((var_6 >= 1) < -68))))));
    #pragma endscop
}
