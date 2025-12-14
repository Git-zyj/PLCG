/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 - 1]);

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_20 ^= var_18;
            var_21 ^= -103;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] [14] [22] = ((((25 ^ (arr_1 [i_0 - 1])))) ? ((((arr_1 [i_0 - 1]) ? 22999 : 22999))) : -8338);
            var_22 = ((var_13 ? 42539 : (1334194096 - 1213594295)));
            var_23 = (1 ^ 1213594307);

            for (int i_3 = 2; i_3 < 24;i_3 += 1) /* same iter space */
            {
                arr_12 [i_3] [i_2] [i_2] [9] = 1334194072;
                var_24 |= ((((~8191093189747653066) >= (!-1))));

                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    var_25 ^= ((((125 ^ ((-1919565084 ? var_18 : -13)))) ^ (4611686018427387904 >= -8191093189747653066)));
                    arr_16 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] |= ((-((1 ? (arr_1 [i_2]) : (arr_1 [18])))));
                }
                var_26 = 8191093189747653066;
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_27 = 2625974956654137382;

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [i_5] [i_5] [i_6] [i_7] = (((((!(arr_25 [i_7] [1] [i_6] [i_2] [22] [i_2] [i_0])))) | 42537));
                        var_28 ^= (((arr_15 [i_0] [i_0] [i_6] [i_7]) / var_6));
                        var_29 = ((-255 ? (var_4 > 2960773199) : var_8));
                        var_30 = (arr_9 [i_0 - 1] [i_5] [i_5 - 1] [i_5 - 1]);
                    }
                    arr_28 [i_5] = ((0 ? (arr_17 [i_5] [i_5] [i_5 + 1] [i_5 - 1]) : 3356203410));
                }
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    var_31 ^= ((var_17 ? 0 : (arr_17 [i_0 + 1] [i_5 - 1] [i_8 - 2] [i_8 - 1])));
                    var_32 = (((arr_4 [i_2] [i_5] [i_5 - 1]) ? 19 : var_18));
                    var_33 = (2960773200 - 97);
                    arr_32 [i_5] [i_5] [i_5] [i_5] = (((var_17 - var_15) ? var_18 : 45508));
                    arr_33 [i_8] |= -var_12;
                }
            }
            for (int i_9 = 2; i_9 < 24;i_9 += 1) /* same iter space */
            {
                var_34 = ((~((~(((arr_22 [i_9 - 1] [i_9 - 1] [i_2] [i_0]) ? 42539 : var_1))))));
                var_35 ^= ((((427542929 ? 3356203413 : (arr_13 [i_0] [23] [i_9 - 2] [i_9 - 2]))) > var_8));
                arr_38 [i_0] [9] [i_0] |= ((-(((!(arr_35 [i_0] [i_0] [i_0 - 1] [i_9 - 1]))))));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_36 ^= ((-(arr_10 [i_0] [i_10] [i_0])));

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_37 |= ((!(arr_4 [20] [i_0 + 1] [20])));
                arr_45 [i_0] [i_10] [i_11] = (arr_6 [6] [6] [6]);
            }
            var_38 = (((1 * 9915790281988622528) < (0 ^ var_9)));
        }
    }
    var_39 = (max(var_39, var_3));
    var_40 = (~var_4);
    var_41 = (((((var_10 ^ (((11971464148909825029 ? var_8 : 12736)))))) || var_16));
    #pragma endscop
}
