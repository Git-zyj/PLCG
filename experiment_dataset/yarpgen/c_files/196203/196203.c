/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_9;
        var_16 *= ((-((var_14 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_17 = var_8;
        arr_4 [i_0] = max(((min((arr_0 [i_0]), 11174075963449311971))), var_1);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_18 *= (((-(max(18446744073709551615, 3423608218657339147)))) & (max(((var_7 ? 10362539487228842270 : (arr_1 [i_1]))), var_5)));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_2] = -var_1;

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_12 [i_3] [i_2] [i_3] [i_2] = var_8;
                var_19 = (arr_8 [i_1] [i_1]);

                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_20 &= ((var_1 ? 1098012290930827431 : var_12));
                    arr_15 [i_4] [6] [i_2] [i_2] [i_1] [i_1] = ((~(!var_0)));
                    var_21 ^= (((arr_5 [i_1] [i_3]) ? var_1 : var_4));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_22 = arr_20 [i_6] [i_2] [i_3] [8] [i_2] [i_1];
                        var_23 = (var_9 ^ -var_14);
                        var_24 -= (~971763232484373900);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_23 [i_1] [i_2] [i_2] [i_3] [i_5] [i_5] [i_7] = (arr_22 [i_7] [i_5] [i_2] [i_1]);
                        arr_24 [i_1] [i_1] [i_7] [i_1] [i_2] [i_1] [i_2] = (((arr_20 [i_1] [i_2] [i_3] [i_5] [i_7] [i_2]) ? (arr_11 [i_2] [i_3] [i_5]) : (arr_2 [i_3])));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_27 [i_1] [i_2] [i_3] [i_5] [i_8] = arr_17 [i_1] [i_2] [i_3] [i_5] [i_5];
                        var_25 = (min(var_25, (((!(!996327116222572716))))));
                        arr_28 [i_2] = (arr_1 [i_1]);
                        var_26 = (min(var_26, (((-(arr_1 [i_1]))))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_27 = var_7;
                        var_28 = (-(arr_7 [i_2]));
                        var_29 = (-(((arr_11 [i_2] [14] [i_2]) & 2579955809)));
                        arr_33 [i_1] [i_2] [i_3] [2] [i_2] = (~var_4);
                    }

                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_38 [i_1] [i_3] [i_2] [11] = ((!(arr_30 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_30 ^= (5466600158555603314 ? var_10 : (arr_31 [i_1] [i_2] [i_10 + 1] [i_5] [i_1] [i_10]));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_42 [i_5] [i_1] [i_2] [i_3] [i_5] [i_5] [i_11] &= ((arr_25 [i_1] [i_1] [i_1] [i_11] [i_11] [i_5]) ? (arr_36 [i_2] [i_1]) : 2849868400);
                        arr_43 [i_11] [i_2] [i_3] [i_5] [i_2] = ((!1628498546466836347) ? var_0 : (var_14 == 14277541807628365335));
                    }
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        var_31 = ((((11291023234766490601 ? 18446744073709551615 : var_11))) ? -var_8 : var_1);
                        arr_47 [i_12 + 1] [11] [11] [i_2] [i_3] [i_1] [i_1] = var_3;
                    }
                    var_32 = (!101536167749351516);
                    arr_48 [i_2] [i_2] [i_3] [i_5] = (-(arr_11 [i_2] [i_3] [i_5]));
                    var_33 = ((2130063640 ? 1311083934 : 1957924575));
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_34 = arr_32 [i_13];
            var_35 = (((~2657642264) * (var_13 && var_5)));
            arr_51 [i_1] [i_1] [i_1] = ((arr_39 [i_1] [i_13] [i_1] [i_13] [i_13]) % (arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]));
        }
    }
    #pragma endscop
}
