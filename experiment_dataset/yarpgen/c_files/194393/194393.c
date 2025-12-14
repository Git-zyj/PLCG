/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (38978839497173528 & 1366156141);

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                var_20 = ((var_12 ? ((var_3 ? (arr_4 [i_1] [i_1]) : (arr_6 [i_2]))) : (arr_4 [i_2 + 1] [i_0 + 1])));
                arr_9 [i_2] [i_0] &= (arr_6 [i_2 + 2]);
            }
            arr_10 [i_0] [i_0] = (((-29993 | var_5) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_1] [i_1] [i_1])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_0] [i_0] = (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])));
            arr_15 [i_0] [i_0] [i_0] = (arr_8 [i_3] [i_3] [i_0] [i_0 - 1]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_21 = 0;
                            var_22 = (min(var_22, (((0 ? (arr_0 [13] [i_0 + 1]) : (arr_0 [i_0] [i_0 - 1]))))));
                            var_23 *= (((arr_18 [i_0] [i_0] [i_4 + 1] [i_6 - 1]) ? (arr_18 [13] [0] [i_4 + 1] [i_6 + 2]) : (arr_18 [i_0 - 1] [i_0 - 1] [i_4 + 1] [i_6 + 1])));
                        }
                    }
                }
            }
            var_24 = (9223372036854775795 ? 116 : 3231751712980160970);

            for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_31 [i_0 - 1] [i_3] [i_7] [i_8] [i_7] [i_8] = (((arr_12 [i_0 - 1] [i_9 - 1] [i_9]) ? ((776666555 ? var_14 : 2147483647)) : (!var_14)));
                            var_25 = 1;
                            var_26 = 9223372036854775807;
                            var_27 = ((4294967295 ? (arr_21 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) : 18446744073709551615));
                        }
                    }
                }
                arr_32 [i_3] [i_0] = ((3090665714 ? 2903186370454879660 : 2003175540));
                var_28 = (((((-9223372036854775807 - 1) * (arr_8 [i_0 + 1] [i_0 + 1] [i_3] [12]))) - 3224349567));
            }
            for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
            {
                arr_37 [i_10] [18] [i_3] [i_10] = ((-1 ? 9223372036854775807 : 127));
                var_29 = (min(var_29, 776666549));
                arr_38 [i_10] = (((arr_35 [i_0 - 1] [i_10]) ? -427600061 : -16384));
            }
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_30 = var_1;
                            arr_51 [i_14] [i_13] [i_14 + 1] [12] [i_14] = (((arr_43 [i_14 - 1] [i_0 + 1] [i_0 + 1]) + (arr_43 [i_14 - 1] [i_0 + 1] [i_0 + 1])));
                            arr_52 [i_13] [i_0] [i_13] = (((arr_12 [i_12 + 1] [i_11] [i_0 - 1]) * (arr_12 [i_0 + 1] [i_11] [i_12 - 1])));
                            arr_53 [i_0] [i_13] [i_0 + 1] [i_0] [22] = -5483799418451318476;
                            arr_54 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((-17724 ? (((10 ? -1 : 4294967295))) : (-9223372036854775807 - 1)));
                        }
                    }
                }
            }
            var_31 += 8387584;
        }
    }
    #pragma endscop
}
