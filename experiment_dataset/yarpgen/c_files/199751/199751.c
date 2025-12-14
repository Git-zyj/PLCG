/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = ((251 % ((max(28910, var_3)))));
    var_19 = (max(var_19, 5));
    var_20 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 = (((!36625) < var_9));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_22 = ((~(arr_4 [i_1])));
            var_23 = ((arr_1 [4]) ? (arr_3 [i_0] [i_1]) : var_10);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_7 [10] [10] = ((251 * (arr_3 [i_0] [i_2])));

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_24 = -23539;
                var_25 = 0;
            }
        }
        var_26 = (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 0));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_18 [i_4] [7] = (((arr_17 [i_4]) != 16993));
            var_27 = (min(var_27, -1));
            var_28 = ((~((5 ? 88 : var_8))));
            arr_19 [i_5] [i_4] [i_4] = (arr_17 [i_5]);
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_29 = (var_1 & var_1);

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_30 [i_7] [i_6] [10] [2] [i_8] [i_8] = (arr_23 [i_4] [i_6] [i_7] [i_6]);
                    arr_31 [i_7] [i_7] [i_6] [i_7] = ((((((arr_21 [i_6] [8] [i_8]) ? (arr_3 [i_4] [i_8]) : (arr_22 [i_4] [i_7] [i_8])))) ? (arr_26 [i_6]) : 0));
                    arr_32 [i_7] = var_13;
                }
            }

            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                arr_36 [6] [i_9] [i_4] [i_4] = (((arr_24 [i_9] [4] [i_4]) ? (arr_28 [i_6] [i_9] [i_4] [i_6]) : 4));
                var_30 ^= var_1;
                var_31 = (min(var_31, (arr_4 [i_9])));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {
                var_32 -= (arr_3 [i_6] [i_6]);
                var_33 = ((9223371761976868864 ? (arr_35 [i_4] [i_6]) : (arr_35 [i_4] [i_10])));
            }
            for (int i_11 = 3; i_11 < 11;i_11 += 1)
            {
                var_34 = (!-14);
                var_35 = (((arr_1 [i_11 - 2]) ? -4 : (arr_6 [i_11 - 3])));
            }
        }
        arr_42 [i_4] = (~var_15);
        var_36 = (arr_0 [i_4] [i_4]);
        arr_43 [i_4] [i_4] = (!17160314364784164014);
    }
    #pragma endscop
}
