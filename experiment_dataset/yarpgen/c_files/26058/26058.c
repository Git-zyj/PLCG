/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((max((3189888146 >= 31457280), (~-31457281)))), var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 -= ((~(((arr_0 [11]) ? -31457281 : var_12))));
        arr_2 [7] [i_0] = ((!(arr_0 [2])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 += ((-(arr_4 [12] [i_0] [i_0])));
            var_18 += (~(arr_5 [i_1]));
            var_19 += ((((!(arr_3 [i_0] [i_1] [i_1])))) - -31457281);
            arr_6 [4] [i_1] = var_14;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 = (((((31457280 ? 2315997208 : 1))) ? ((((arr_7 [i_0] [14] [i_2]) / (arr_11 [i_0])))) : 18446744073709551615));
                    arr_13 [1] [i_3] [i_1] [i_3] = -9290;
                    arr_14 [i_0] [i_1] [i_2] [i_3] = ((((-31457281 | (arr_12 [i_0] [i_1] [5])))) || (-31457281 / 1));
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    arr_17 [7] [i_1] [i_1] [i_4] = ((~(var_12 && 1)));
                    var_21 ^= (1 <= (((!(-2147483647 - 1)))));
                    arr_18 [i_0] [i_1] [i_2] [i_4] [i_4] [4] = ((~(arr_10 [i_4] [i_4 + 3] [i_4 + 1] [i_4 + 2])));
                }
                var_22 = (~var_6);
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_23 |= (~(arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1]));
                arr_22 [1] [i_0] [i_5] = ((var_14 >= (arr_1 [8])));
                var_24 = (((arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ^ (arr_16 [i_0] [i_5] [10] [i_5 - 1])));
            }
            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_25 [i_6] = (arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1]);
                var_25 ^= var_13;
                var_26 = (((arr_3 [i_6] [i_6 - 1] [i_6 - 1]) >= (arr_24 [i_6 - 1] [i_6] [i_6 - 1] [i_6])));
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_27 = (min(var_27, (((-(arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                arr_30 [i_0] [12] [1] = ((31457309 / -1788866426) ? (arr_7 [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (((arr_24 [i_0] [i_0] [i_0] [i_0]) | -913268481)));
                arr_31 [i_0] [i_1] [i_7] = -31457281;
            }
        }
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            var_28 |= ((~(-31457281 || 1)));
            arr_34 [i_8] [i_0] = ((-(arr_21 [i_8 + 2] [i_8] [i_0])));
            var_29 = 79;
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        var_30 = ((-(arr_37 [i_9 - 1])));
        var_31 = 2;
        var_32 = ((~(arr_35 [i_9 + 1] [i_9 + 2])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_33 = ((~(arr_35 [i_10] [i_10])));
        arr_41 [i_10] = (arr_39 [i_10] [i_10]);
    }
    var_34 *= var_0;
    var_35 ^= ((-(min(((min(79, 1))), ((-31457281 ? var_7 : 32767))))));
    #pragma endscop
}
