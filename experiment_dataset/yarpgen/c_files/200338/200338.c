/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_2 [i_0]) ? var_8 : var_4));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_1 + 2] [15] [15] = (arr_2 [i_0]);
            var_16 = (min(var_16, 1));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_17 = (min(var_17, ((~(((!(arr_7 [i_0] [i_0] [i_0]))))))));
                    var_18 = ((~(arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                    var_19 = (arr_11 [i_0]);
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    arr_22 [i_0] [i_2 + 1] [i_2] [i_5 - 1] = (((var_0 | (arr_0 [i_5]))));
                    arr_23 [8] [i_2 - 1] [i_3] [i_2] = (arr_12 [i_2 + 1] [i_2 + 1]);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [i_0] [i_6] [i_7] [i_6] [i_2] = (arr_20 [i_0] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]);
                        var_20 = var_3;
                        arr_29 [i_0] [i_2] [i_2 - 1] [i_2] [i_6] [i_7] = (((arr_18 [i_0] [i_6] [i_3] [1] [i_0] [i_3]) > (arr_5 [i_2 - 1] [i_6])));
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_21 = (((~var_7) ^ var_2));
                        var_22 *= (((arr_5 [i_2] [i_6]) ? (!var_11) : (~var_6)));
                        arr_34 [i_0] [i_2] [i_3] [i_0] [i_6] [i_2] [i_8] = (~var_4);
                    }
                    arr_35 [i_3] [i_3] [i_3] [i_6] [i_2] [i_3] = ((1 ? 219 : 1));
                    var_23 = (min(var_23, ((((arr_15 [i_2 + 1] [i_2 - 1] [i_2 + 1]) | (arr_17 [i_2 + 1]))))));

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_24 = var_12;
                        arr_38 [i_2] [i_2] [i_3] [1] [i_9] = (((arr_18 [13] [i_6] [i_3] [i_2 + 1] [i_2] [i_0]) ? (arr_18 [i_0] [i_2 - 1] [i_3] [i_0] [i_9] [i_9]) : var_1));
                        var_25 += (1 < -4415);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_26 = ((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]) || ((((arr_19 [i_0] [i_2] [i_3] [i_6]) ? var_15 : (arr_32 [i_2] [i_10])))));
                        var_27 = (((((~(arr_7 [i_0] [1] [i_0])))) ? (((arr_17 [i_3]) * var_4)) : (((~(arr_24 [i_2] [i_3] [i_2] [7]))))));
                        var_28 &= (arr_36 [i_10] [i_6] [12] [i_2] [11]);
                        var_29 = ((arr_33 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_3]) ^ var_13);
                        var_30 += (arr_11 [i_2 - 1]);
                    }
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_31 = ((32566 ? 2097150 : (arr_46 [4] [i_2] [i_2 - 1])));
                        var_32 *= ((((((arr_30 [i_2] [i_12] [i_3] [i_2] [i_12] [8]) ^ (arr_0 [i_2])))) ? var_3 : (arr_14 [i_0] [i_3])));
                        var_33 = (arr_10 [i_0] [i_2] [i_3]);
                        var_34 = var_12;
                    }

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_35 = (!var_3);
                        var_36 = (max(var_36, (((~(~1966869832))))));
                    }

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        arr_54 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] [i_0] = 27119;
                        var_37 = (~0);
                        var_38 = (max(var_38, ((~(arr_11 [i_3])))));
                        var_39 = (!var_0);
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        var_40 = ((var_14 ? (arr_21 [i_15] [i_3]) : var_8));
                        var_41 = (arr_41 [i_0] [i_2 - 1]);
                        var_42 = (min(var_42, (arr_53 [i_2 - 1] [10])));
                    }
                    arr_58 [i_2] = (arr_15 [i_2] [6] [i_2 - 1]);
                }
                var_43 = ((!(((~(arr_42 [i_0] [i_2 - 1] [8] [i_3]))))));
            }
            for (int i_16 = 1; i_16 < 15;i_16 += 1)
            {
                var_44 &= 3809370752;
                arr_62 [i_2] = ((((~(arr_13 [i_16] [i_2] [i_0] [i_0]))) > (arr_5 [i_2] [i_16 - 1])));
                var_45 ^= ((~(arr_32 [i_2 - 1] [i_2 - 1])));
            }

            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                var_46 = (4294967286 || 69);
                arr_65 [i_0] [i_2] [i_17] [i_17] = (((arr_32 [i_17 - 1] [i_2 + 1]) - var_1));
                var_47 = var_8;
            }
            var_48 = (~var_8);
        }
    }
    var_49 = max(((2328097446 ? (var_8 < var_12) : var_4)), ((max(var_13, var_12))));
    var_50 = ((((((var_1 << (((var_10 + 4610) - 21)))) - (1 < 1)))) && (((~(min(var_12, var_9))))));
    #pragma endscop
}
