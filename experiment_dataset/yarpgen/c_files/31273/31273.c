/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = ((~(min((~var_3), ((((((arr_0 [i_0 - 1] [i_0]) + 2147483647)) >> (((arr_1 [i_0]) - 141)))))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_20 = ((var_9 ? var_8 : -4947742936767545388));
                var_21 = 13499001136942006207;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_22 &= (!(arr_2 [i_3] [i_3]));
                var_23 = ((10 ? var_11 : 10));
                var_24 = 2042706456400552308;
                var_25 = 1;
            }
            var_26 = (((4294967295 - 3415853787450702201) ? (18446744073709551606 + -512431480) : ((((!(!2147483647)))))));
            var_27 = 13499001136942006228;
            arr_11 [i_0] = (min(((min((arr_1 [i_0 + 1]), (arr_4 [i_0 + 1] [i_0 - 2])))), (arr_10 [i_0 + 1])));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            arr_14 [i_0] = (((arr_9 [i_0] [i_4 - 1] [i_4 - 1] [i_4 + 1]) <= 16256));

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_28 &= ((3 ? (~var_2) : 65532));

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_29 = -15485485395907697820;
                    arr_20 [i_0] [i_0] [i_5] [i_5] = 512431501;
                    arr_21 [i_0] [i_4 - 1] [i_0] = var_5;
                    var_30 = ((-(arr_12 [i_0] [i_0 + 2] [1])));
                    var_31 = ((var_0 >= (arr_8 [i_0])));
                }
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    var_32 = (((arr_18 [i_0] [i_4] [i_7 + 2] [i_7]) ? (arr_18 [i_0 - 1] [i_4 + 1] [i_5] [i_7 + 2]) : -var_7));
                    var_33 *= (arr_3 [i_7]);
                }
                var_34 = (arr_4 [i_0 + 2] [i_0 + 2]);

                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    var_35 = 255;

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_36 ^= (arr_4 [i_0] [i_4]);
                        var_37 = (max(var_37, (!var_14)));
                        arr_32 [i_0] [i_0] [i_5] [i_8] [i_0] = (arr_5 [i_0] [i_4 + 2] [i_4 - 1]);
                    }
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        var_38 += ((arr_13 [i_8 - 1] [i_4 - 1]) >= (arr_13 [i_8 + 3] [i_4 + 1]));
                        var_39 ^= 512431501;
                        var_40 = ((var_2 <= (!54522975043518542)));
                        var_41 = 13306303795120499664;
                        arr_35 [i_10 - 1] [i_4] [i_0] [6] [i_10] [i_4] [i_0 - 1] = (((((var_14 ? var_10 : 99)) + 2147483647)) >> (((arr_9 [i_0] [i_4 + 2] [i_4 + 2] [i_8 + 3]) - 91)));
                    }
                }
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    var_42 = -255;
                    var_43 = (207 ^ (arr_38 [i_0 - 2] [i_11 + 2] [i_0 - 2] [8] [i_0]));
                }
            }
        }
        for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_44 = (min(18, var_2));
            var_45 = var_18;
            arr_42 [i_0] [i_12] = (min(512431478, (arr_27 [i_12 + 1] [11])));
        }
        for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
        {
            var_46 -= (max((~234), ((512431480 ? (-455781790 > var_9) : (arr_38 [i_0] [i_13] [i_13] [10] [0])))));
            var_47 = (arr_12 [i_0] [i_0] [i_0 + 2]);
            var_48 = ((var_14 >= (arr_16 [i_13 + 2] [i_0])));
            var_49 = ((var_18 ^ (max(455781790, (((var_0 >= (arr_43 [i_0 + 1]))))))));
        }
    }
    var_50 = var_3;
    #pragma endscop
}
