/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_0 - var_12) ? ((~(~-2024732941))) : var_13));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_17 = (((arr_6 [i_1] [i_1 + 1] [i_0] [i_1]) | var_2));
                arr_8 [i_0] [i_1] [i_1] [i_0] |= (((arr_1 [i_2] [i_2]) ? ((var_15 ? var_9 : var_9)) : (arr_1 [i_0] [i_2])));
            }
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_18 = ((((99 ? var_12 : var_4)) % (arr_1 [i_5 - 4] [i_1 + 1])));
                            arr_16 [i_5] [i_5] [i_1] = (((arr_11 [i_0] [i_1] [i_0] [i_4] [i_5]) ? ((-(arr_5 [i_1] [i_3] [i_1]))) : var_15));
                            var_19 = (!var_2);
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_21 [i_0] [i_1] [i_6] |= ((((arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_3 - 2]) + 9223372036854775807)) >> (((arr_13 [i_1] [i_1] [i_6] [i_1 - 1] [i_3 - 1]) + 4300947507475781514)));
                    arr_22 [i_0] [i_1] [i_3] [i_6] = (((arr_3 [i_1 + 1] [i_3 + 1] [i_3]) + var_0));
                    arr_23 [i_1] [i_1] [i_0] [i_6] [i_6] [i_3] = (arr_12 [i_1] [i_1 + 1]);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] &= (~-var_13);
                    var_20 = (min(var_20, var_3));
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    arr_31 [i_1] = (arr_25 [i_1] [i_1]);
                    var_21 = var_8;

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_22 &= (arr_24 [i_0] [i_0] [i_0] [i_8]);
                        arr_36 [i_0] [i_1] [i_3] [i_8] [i_9] [i_1] = var_12;
                        arr_37 [i_9] [i_1] [i_3] [i_1] [i_0] = (((arr_34 [i_8 - 2] [i_8 - 2] [i_3 + 1]) ^ (((arr_0 [i_0]) ? var_8 : var_7))));
                    }
                    arr_38 [i_0] [i_1] [i_0] = (((((-12576 ? (arr_10 [i_0] [i_0] [i_3] [i_8]) : var_14))) ? var_15 : (arr_20 [i_1] [i_1] [i_1] [i_8])));
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_41 [i_1] [i_1] = (arr_0 [i_1]);
                arr_42 [i_10] [i_1] [i_1] [i_1] = ((-157 ? (!-1842721633) : (((!(arr_20 [i_1] [i_1] [i_10] [i_10]))))));
                var_23 *= ((166 ? -12576 : 1));
                arr_43 [i_1] [i_1] [i_10] = var_15;
            }
            var_24 = -12576;
            var_25 = ((var_10 / (arr_7 [i_1 - 1] [i_1])));
        }
        arr_44 [i_0] [i_0] = min((((-(var_13 % var_13)))), (arr_24 [i_0] [i_0] [i_0] [i_0]));
        var_26 = (((arr_17 [i_0] [i_0] [i_0] [i_0]) ? ((((arr_18 [i_0]) ? (arr_0 [i_0]) : ((((arr_26 [i_0] [i_0] [i_0] [i_0]) + var_4)))))) : (max(var_6, (!var_4)))));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 4; i_12 < 7;i_12 += 1)
        {
            {
                arr_49 [i_11] [i_11] [i_11] = ((~(max((-12576 + var_11), (var_15 + var_4)))));
                arr_50 [i_11] [i_12] = -var_14;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_27 = ((!(arr_39 [i_12] [i_12])));
                            arr_57 [i_11] [i_12] [i_12] [i_13] [i_11] [i_14] &= ((!(!var_0)));
                            arr_58 [i_11] [i_14] = ((-((((arr_40 [i_12 + 1] [i_13] [i_12 + 1]) == var_11)))));
                        }
                    }
                }
                var_28 ^= (+(max((arr_14 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (min(1173587446, (arr_17 [i_12] [i_12] [i_12] [i_11]))))));
            }
        }
    }
    var_29 = (max(var_6, ((((var_8 ? var_15 : -8211))))));
    #pragma endscop
}
