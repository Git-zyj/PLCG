/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 109;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (min((((((arr_1 [i_0]) ^ (arr_2 [i_0]))) * ((min((arr_1 [i_0]), var_3))))), ((((arr_2 [i_0]) == var_15)))));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_1 - 3] = (((((min((arr_0 [i_0] [i_0]), 0))) ? (arr_2 [i_0]) : 16384)));
            var_20 = ((!(min((arr_5 [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 3] [i_0 + 1])))));
            arr_7 [i_0] = ((!(var_15 > var_7)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_0] = var_17;
                arr_11 [i_0 + 3] [i_0] [i_1] [i_2] = 1986275190;
                var_21 = (((arr_0 [i_1 - 3] [i_0]) | (arr_0 [i_1 - 1] [i_0])));
                arr_12 [i_0] [i_1] = -var_10;

                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] = var_1;
                    var_22 = (arr_0 [i_0] [i_0]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_23 = ((~(((!(arr_2 [i_0]))))));
                        var_24 = ((528482304 ? ((var_8 ? var_16 : var_5)) : var_5));
                        var_25 = ((-528482305 ? (~var_4) : ((~(arr_5 [i_0] [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_26 = -528482304;
                        arr_22 [i_6] [i_0] [i_2] [i_4] [i_4] [i_2] = ((2305843009213693951 == (arr_13 [i_1 - 3] [i_0])));
                        arr_23 [i_6] [i_4] [i_0] [i_0] [i_1] [7] = ((var_5 > (arr_13 [i_1 - 3] [i_0])));
                        var_27 = ((((arr_4 [i_4]) ? var_5 : -2814423447567700298)));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_0] = (((arr_2 [i_0]) * (arr_2 [i_0])));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [1] = (var_4 || 9437332381038715005);
                        arr_28 [i_0] = 9009411692670836611;
                    }
                    var_28 = arr_17 [i_1 - 2] [i_1 - 1] [i_0] [i_0 + 1];
                    var_29 = (((63 + -2305843009213693942) - (arr_0 [i_1 - 1] [i_0])));
                    var_30 = (var_5 ? (arr_20 [5] [5] [5] [i_2] [i_4]) : 15797072478354784627);
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_31 = ((((((arr_2 [i_0]) && (arr_20 [1] [1] [i_1] [i_2] [1])))) ^ (~var_11)));
                    var_32 = (((arr_16 [i_0 + 2]) && (!32755)));
                    arr_31 [i_0] [i_2] [i_2] = 35184372088831;
                }
            }
            for (int i_9 = 4; i_9 < 10;i_9 += 1)
            {
                arr_34 [i_0] [i_1 + 1] = (((~-var_15) * (3949607893 == 2305843009213693976)));
                arr_35 [i_0] [i_0] [1] [i_9] = var_18;
                arr_36 [i_0] = var_16;
                arr_37 [8] [i_1] [i_9] [i_0] = (min(((~((1 ? var_5 : var_12)))), (arr_16 [i_1 - 3])));
            }
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                var_33 = -29935;
                var_34 = ((~12802) == (max(var_10, var_0)));
            }
            var_35 = 32742;
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_36 = (min((((var_0 == ((var_18 ? (arr_18 [i_0] [i_0] [i_11] [8]) : (arr_25 [i_0] [3])))))), (min(13760553870396502100, (!-32733)))));
            var_37 = arr_14 [i_0];
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_38 = 6258;
            var_39 = ((((min(var_4, (arr_43 [i_12])))) / -var_8));
            arr_45 [i_0] [i_12] [i_12] = max((max(29914, 9009411692670836611)), var_11);
        }

        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            arr_49 [i_0] [i_13] = var_2;
            var_40 = (((!-32744) ? -9401 : 1));
            var_41 = ((1766428710 ? 1 : 1));
            var_42 = var_0;
        }
    }
    for (int i_14 = 1; i_14 < 8;i_14 += 1)
    {
        arr_52 [i_14] = (arr_14 [6]);
        arr_53 [i_14 - 1] = (max(((-(max(var_15, 8357694535094858207)))), (arr_42 [4])));
        var_43 = (((min(((-32756 ? 11332431730559652339 : -12818)), (arr_30 [i_14] [i_14] [i_14 + 2] [i_14]))) - var_6));
    }
    #pragma endscop
}
