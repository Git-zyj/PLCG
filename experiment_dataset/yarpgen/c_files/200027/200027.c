/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((-16205 <= var_5) ? var_3 : (var_11 + var_10)))) || ((61769 <= ((min(var_12, var_5)))))));
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 *= (var_10 ? (((5533585075882901032 <= (-32767 - 1)))) : (arr_1 [2]));
        var_18 = (((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_19 = 114;
                        var_20 = ((32767 ? var_1 : var_9));
                        var_21 = (arr_6 [i_1] [i_0]);
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_22 = -var_1;
                        arr_10 [i_1] [i_0] = (arr_9 [3] [3] [i_0] [i_4 + 2] [i_0 + 3] [i_4 + 1]);
                        var_23 = (arr_9 [3] [i_4 - 2] [i_4] [i_4] [i_4] [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_24 = 32767;
                        arr_13 [i_1] [i_1] [i_0] [i_1] [i_1] = (arr_8 [i_1] [i_1] [i_1] [i_5] [i_0] [i_0 + 3]);
                        arr_14 [i_0] [i_1] [i_5] [i_1] [2] [i_0] = (((~1) ? var_0 : (((arr_1 [i_0]) - (arr_0 [i_0] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_25 = (var_3 & var_5);
                                var_26 = -61763;
                                var_27 = -var_14;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_28 = (min(var_28, (var_2 % -3768)));
                                var_29 ^= ((arr_12 [i_9]) + var_6);
                                var_30 += ((-(arr_16 [i_0 + 3])));
                            }
                        }
                    }
                    var_31 *= -1428060025808143907;
                }
            }
        }
    }
    for (int i_10 = 4; i_10 < 13;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        var_32 = (((-9223372036854775807 - 1) + 61769));
                        var_33 = (((((max(var_5, (arr_11 [i_10] [i_12] [i_10] [i_10])))) & ((((arr_20 [i_12]) && var_1))))) / ((min((arr_30 [1] [1]), (-32761 < 204)))));
                        var_34 -= ((-((((1428060025808143907 ? 3766 : 62346)) & (3766 | var_7)))));
                        arr_40 [i_10] [i_10] [i_12] [i_12] [i_10] = ((!(((((var_10 && (arr_33 [i_10] [i_11 - 1] [i_12]))) ? -25271 : 61770)))));
                        arr_41 [i_12] = var_1;
                    }
                }
            }
            var_35 = (arr_21 [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 3]);
            var_36 ^= var_0;
        }
        var_37 = ((((((-109 | (arr_9 [i_10] [i_10] [i_10] [i_10 + 3] [i_10 + 2] [i_10]))))) ? ((((((-32767 - 1) * var_4))) / (min((arr_16 [7]), var_11)))) : (((arr_23 [i_10 - 4] [i_10 - 4] [i_10] [i_10] [i_10 - 4]) % (arr_2 [8] [i_10])))));
    }
    var_38 = ((-((max((var_0 || var_11), var_4)))));
    #pragma endscop
}
