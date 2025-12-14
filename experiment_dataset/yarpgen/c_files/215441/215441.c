/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 29170;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 = ((4 & (~-4)));
        arr_3 [i_0] [12] &= (((arr_0 [i_0 - 3]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2])));
        var_19 = (-4 || 0);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 = (min(var_20, (((arr_5 [i_0 - 2] [i_0 - 3]) ? -4 : (arr_1 [i_0 - 2])))));
            var_21 = (max(var_21, (var_5 & var_1)));
            var_22 -= -11;

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_23 = (((arr_8 [i_2 + 1] [i_2 - 1] [i_2]) & (arr_1 [i_2 - 1])));
                var_24 |= ((arr_1 [i_0 - 1]) ? var_4 : (arr_1 [i_0]));
                var_25 ^= var_9;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_15 [9] [i_1] [i_3] [i_3] [i_4] = (arr_7 [i_0 - 1] [i_0] [4] [i_4]);
                    arr_16 [i_4] [1] [i_1] [i_0] = (!var_11);
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_26 = (((arr_9 [i_0 - 3] [i_1] [i_3]) ? (arr_9 [i_0 - 1] [i_1] [i_3]) : var_3));
                    var_27 = ((-((-4 ? -3618217264544141196 : 3))));
                    var_28 = ((~(arr_18 [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1])));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_29 += (1 && 4294967280);
                            var_30 += (~var_6);
                            var_31 -= 3671560804;
                        }
                    }
                }
            }
            arr_25 [i_1] [i_1] = (((arr_20 [i_0]) ? (((-29 ? 623406500 : 7466844503132775587))) : (0 - 0)));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_32 = (((~var_13) ? (arr_23 [3] [i_0] [i_0] [i_0] [i_8] [i_8] [i_8]) : (arr_28 [9] [1])));
            arr_30 [i_8] = var_9;
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            arr_35 [i_9] [i_9 - 1] = (((arr_19 [i_9] [i_9 - 1] [9] [i_0 - 2]) == (arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0] [i_0 + 1])));
            arr_36 [20] [i_9] [20] = (((var_3 == 1) ? (arr_19 [i_0 + 1] [i_9] [16] [5]) : (~var_0)));
        }
        var_33 *= ((~(arr_10 [6] [i_0 + 1] [i_0 - 2])));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    arr_45 [i_10] [i_11] [i_11] [2] = ((var_11 ? (max(var_11, (min(var_13, var_13)))) : 15587882));
                    arr_46 [0] [i_11] [i_12] = (~var_7);

                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        var_34 = (((-127 - 1) ? 14954 : ((~(arr_14 [i_13 - 1] [i_11] [i_12] [i_13 + 1] [1] [i_13 - 1])))));
                        var_35 += (~var_14);
                        var_36 = (max(var_36, ((min((arr_6 [i_10] [i_11] [0]), (28 != 1))))));
                        arr_50 [i_10] [i_11] [i_12] [i_13] |= ((~((-(max((arr_6 [4] [8] [i_13 + 1]), (arr_4 [1] [i_12] [8])))))));
                        var_37 = (max(((((((-8389336768286821943 + 9223372036854775807) << (4294967295 - 4294967295)))) ? ((-(arr_32 [i_13]))) : ((14959 ? 16790818313151110189 : 464599105314865537)))), (((arr_17 [i_13 - 1] [2] [1] [i_11] [0]) ? (min(12916420518787890723, (arr_1 [i_10]))) : 0))));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_38 = (max(var_38, -46));
                        arr_53 [i_10] [i_10] [i_10] |= (!0);
                    }
                    arr_54 [i_10] |= (arr_11 [i_10] [i_11] [i_12]);
                }
            }
        }
    }
    #pragma endscop
}
