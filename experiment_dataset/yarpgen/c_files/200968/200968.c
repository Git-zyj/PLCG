/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_10 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_1])));
            var_11 = (((((5087510593119785287 ? 7 : -18911))) ? 127 : 182));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_12 ^= arr_4 [i_0] [i_2];
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_13 = (arr_1 [i_0] [i_0]);
                        var_14 &= (arr_10 [7] [i_2] [i_2] [i_2]);
                        var_15 &= ((~(~67108608)));
                        var_16 = (((arr_4 [i_2] [i_4]) ? (arr_5 [i_3]) : (arr_5 [i_3])));
                        var_17 = -18911;
                    }
                }
            }
        }
        var_18 = ((4227858680 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_2 [i_5] [8])));
            var_20 = 11091;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    {
                        var_21 *= ((~(arr_22 [i_8 + 1])));

                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_22 = (-(arr_1 [i_8] [i_8 - 1]));
                            var_23 = (max(var_23, (arr_22 [i_5])));
                            var_24 -= -85;
                            var_25 -= (((arr_11 [i_9 - 1] [i_6] [i_6] [i_6] [i_6]) / (arr_11 [i_9 - 1] [i_8] [0] [0] [i_8])));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_26 = (((~var_4) ? (arr_0 [i_5]) : ((4227858687 ? var_0 : var_6))));
                            var_27 &= (((((arr_15 [i_5] [i_5]) + 9223372036854775807)) << (((arr_20 [i_6 - 1] [i_6 - 1]) - 12566))));
                            var_28 = (~32736);
                            var_29 += 0;
                        }
                    }
                }
            }
            var_30 = ((((((arr_17 [i_6] [10]) * var_4))) ? 1 : (arr_26 [i_5] [i_5] [i_5])));
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_31 = (~-7017563173303619818);
                var_32 = (~var_7);
                var_33 = (arr_5 [i_5]);
            }
            var_34 |= ((-((1675980742 ? 0 : 4227858687))));

            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                var_35 &= 65535;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_36 += ((~(126 || -7017563173303619830)));
                            var_37 = (i_13 % 2 == zero) ? ((((((arr_40 [i_11 - 1] [i_11] [2] [10] [i_11 - 1]) + 9223372036854775807)) << (((arr_26 [i_11 - 1] [i_11 - 1] [i_13]) - 8705265245934476307))))) : ((((((arr_40 [i_11 - 1] [i_11] [2] [10] [i_11 - 1]) + 9223372036854775807)) << (((((((arr_26 [i_11 - 1] [i_11 - 1] [i_13]) - 8705265245934476307)) + 3017024910242969242)) - 51)))));
                        }
                    }
                }
                var_38 = (arr_32 [i_5] [4] [i_5]);
            }
            var_39 = -67108609;
        }
        var_40 = (max(var_40, (((((((arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_8 : 67108585))) || ((((arr_37 [i_5] [i_5] [i_5] [i_5]) ? var_0 : (arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 14;i_19 += 1)
                    {
                        {
                            var_41 ^= ((-(arr_42 [i_17] [0] [1] [i_17] [i_17] [i_17 - 1])));
                            var_42 = (arr_26 [i_5] [i_17 - 1] [i_5]);
                            var_43 = ((-((var_8 ? (arr_39 [i_5] [i_17 - 1] [i_18] [i_19]) : (arr_38 [i_18] [i_17] [1])))));
                            var_44 = -var_5;
                        }
                    }
                }
            }
            var_45 -= (arr_34 [i_5]);
        }
    }
    var_46 = var_5;
    #pragma endscop
}
