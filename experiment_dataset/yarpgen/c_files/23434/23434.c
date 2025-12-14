/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((min(var_1, (~var_10)))) ? (var_10 >= var_1) : var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (~(((arr_2 [i_0]) ? var_13 : (arr_0 [i_0]))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_16 ^= (arr_1 [4]);

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_17 = ((!(arr_7 [i_0] [i_0])));
                var_18 &= ((29 ? (((var_0 ? (arr_6 [2] [2]) : var_4))) : (~15)));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_19 = ((-((32767 ? (arr_1 [i_0]) : 32777))));
                        var_20 = (max(var_20, ((((arr_2 [i_4]) ? 1 : (arr_2 [i_4]))))));
                    }

                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_21 = (arr_15 [i_0] [i_1 + 1] [i_3] [i_4 - 1] [i_0]);
                        var_22 = (18446744073709551601 / 15);
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_23 = (max(var_23, ((((var_10 + (arr_10 [i_0] [i_0] [i_3] [i_0] [i_0] [i_1]))) / (arr_11 [i_0] [i_3] [i_4 - 2] [i_7])))));
                        var_24 = (max(var_24, (((~(~var_13))))));
                    }
                }
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    arr_22 [i_0] [i_1 - 2] [i_0] [i_8] = ((var_4 ^ (arr_8 [i_0] [11] [i_3] [i_8 - 1])));
                    var_25 |= (53 & (~15));
                }
                var_26 = ((!(((var_13 ? var_3 : (arr_18 [i_3] [i_1] [i_0] [i_0] [i_1] [i_0]))))));
                var_27 = (min(var_27, (((((arr_2 [2]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : -47))))));

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_28 = (-1 + 55567);

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_29 *= (!1);
                        var_30 = (min(var_30, 433569331));
                        var_31 = ((-(arr_4 [i_1 - 1] [i_1 + 3] [i_1 - 2])));
                        var_32 = (((((-117 | (arr_0 [i_0])))) ? (255 == 18446744073709551615) : (arr_20 [i_0] [i_1 - 3] [i_3] [i_9])));
                        var_33 = ((1 ? (arr_14 [i_0] [i_0] [i_9] [i_10]) : -3076687843));
                    }
                }
                var_34 = 18;
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_35 *= (arr_17 [i_0] [i_0] [i_1 - 3] [i_11] [i_12 + 3] [i_13]);
                        var_36 = (((~var_2) ^ (arr_15 [i_0] [i_1 - 1] [i_12 - 1] [i_12] [i_0])));
                    }
                    var_37 ^= (~9);
                    var_38 = (((0 + 253699169) * (arr_21 [i_12 + 3] [i_12] [i_12 + 2])));
                }
                for (int i_14 = 1; i_14 < 9;i_14 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_1] [i_1] [i_0] = (((arr_0 [i_1 - 3]) >= (arr_28 [i_1 - 3] [i_14 - 1] [i_14] [i_14] [i_14 + 3])));
                    var_39 *= ((!(arr_9 [6] [i_0] [i_14])));
                    arr_39 [i_0] [i_1] = -1;
                }
                var_40 = (((arr_3 [i_0] [i_0]) & (arr_20 [i_0] [i_0] [i_1] [i_1 + 2])));
            }
            var_41 = (min(var_41, var_2));
            var_42 ^= -1;
            var_43 = var_1;
        }
        var_44 = (var_9 >= 17678183823877516378);
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        var_45 *= -1;
        arr_44 [i_15] [i_15] = (((((-(min((arr_14 [i_15] [i_15] [i_15] [i_15]), (arr_14 [i_15] [i_15] [i_15] [i_15])))))) ? (((arr_0 [i_15]) ? (arr_0 [i_15]) : (arr_0 [i_15]))) : 44954));
    }
    #pragma endscop
}
