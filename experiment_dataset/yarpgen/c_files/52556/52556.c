/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_13 = arr_0 [i_0];

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_14 = (min((max(var_1, (arr_1 [i_0] [i_0]))), (min((arr_0 [i_0]), (max((arr_0 [i_0]), 1))))));

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                var_15 = (max((arr_3 [i_0]), (((((((arr_2 [i_1]) && (arr_7 [i_0] [i_1 + 3] [i_1] [i_1 + 3])))) ^ ((-(arr_1 [i_0] [i_0]))))))));
                arr_8 [i_0 - 2] [i_1 + 3] [i_0] [i_2 - 1] = (~(((var_3 | (arr_0 [i_0])))));
                arr_9 [i_0] [i_0] = ((+(min((arr_6 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 1]), -374196321))));
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_12 [i_0] = min((max((arr_10 [i_1 - 1] [i_0 + 2] [i_0 - 1]), (min((arr_10 [i_0] [i_1] [i_1 + 1]), (arr_11 [i_0] [i_1] [i_1] [i_3]))))), (arr_10 [i_1] [i_1] [i_1]));
                var_16 -= (min((15205 ^ 26769), (((arr_5 [i_0 + 1] [i_0] [i_0] [i_0]) * (arr_7 [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 3])))));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_17 = (arr_10 [i_1] [i_1] [i_0 - 1]);
                    var_18 = var_0;
                    var_19 -= (arr_14 [i_3] [6] [i_3] [i_3]);
                }
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    arr_20 [i_0] [22] [i_0] = (min((min((((var_8 <= (arr_19 [i_1 + 3] [i_1] [i_1] [i_1] [3] [i_1])))), (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_1 + 2]))), (arr_17 [i_3] [23] [23] [i_3] [i_3])));
                    arr_21 [i_0] [14] [14] [i_0] [i_0] = 1;
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    var_20 -= ((~(min((arr_13 [i_3] [i_1 - 1] [1] [i_1] [i_1] [18]), (~var_1)))));
                    arr_24 [i_0] [i_0] = ((-(arr_13 [i_0] [i_6 - 1] [i_0] [i_3] [i_1 + 2] [i_0])));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    var_21 = (~-30791);
                    arr_27 [i_0] [i_0] [i_7 - 2] [i_0 + 1] [22] = var_10;
                    arr_28 [i_0] = var_0;
                }
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                arr_31 [i_0] [i_1] [i_0] = (arr_26 [i_0 + 3] [i_0] [i_0] [i_0 - 2]);
                var_22 = (((((arr_23 [i_0] [i_8] [i_1] [i_0 + 3] [i_0]) ? var_3 : (arr_30 [16] [i_1] [i_8]))) + 1));
            }
            var_23 &= (arr_17 [i_0] [i_0] [i_0] [i_1] [i_1]);
            arr_32 [i_0] [i_0] = (!698609284);
        }
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_24 = (((((((arr_0 [i_0]) | ((~(arr_23 [i_0] [14] [i_0 + 3] [i_0 + 3] [i_0]))))) + 2147483647)) << ((((-(arr_6 [i_10] [i_9] [i_9 + 1] [i_0]))) - 11386343811026767611))));
                arr_41 [20] [i_9 + 1] [i_10] [16] |= (arr_26 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
                var_25 *= (((arr_26 [i_0 + 3] [i_10] [i_10] [i_0]) ? (26121 <= 3145728) : (!var_11)));
                var_26 = (arr_14 [i_0] [i_10] [i_10] [i_10]);
            }
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                var_27 -= (arr_7 [i_0] [i_0] [i_0] [i_0 + 4]);
                var_28 &= ((-(((var_9 + (arr_38 [i_0 + 1] [22] [22]))))));
                var_29 = ((~((~(arr_0 [i_0])))));
            }
            var_30 = (min(var_30, (-9223372036854775807 - 1)));
        }
    }
    for (int i_12 = 3; i_12 < 19;i_12 += 1)
    {
        var_31 = (min(var_8, (752410687613491179 / -374196321)));
        var_32 = 1;
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_33 = (((arr_37 [i_13] [i_13]) ? var_9 : (arr_45 [i_13] [i_13])));
        var_34 = -3812511447631305893;
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        var_35 = (((arr_7 [i_14] [i_14] [i_14] [i_14]) == (((min((arr_25 [i_14] [i_14] [i_14] [i_14] [i_14]), (arr_25 [i_14] [i_14] [i_14] [i_14] [i_14])))))));
        arr_53 [i_14] [i_14] |= (((~((~(arr_38 [i_14] [i_14] [i_14]))))));
        var_36 = (((~(arr_10 [i_14] [i_14] [i_14]))));
        var_37 = (arr_22 [i_14]);
    }
    var_38 ^= var_11;
    #pragma endscop
}
