/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_10 ^= (((arr_0 [i_0 + 3]) % (min((arr_0 [i_0]), (arr_0 [i_0 + 4])))));
        arr_2 [i_0 - 2] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_11 |= (arr_6 [i_1 + 3]);
        arr_7 [i_1] = (arr_0 [i_1]);
        arr_8 [i_1 + 2] = ((-(arr_6 [i_1 + 1])));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_12 ^= (((((~((~(arr_10 [i_2])))))) ? ((((arr_9 [i_2]) >> (arr_9 [i_2])))) : -var_0));
        var_13 |= var_4;

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_18 [i_4] [i_3] [i_2] [i_2] = (arr_15 [i_3]);
                var_14 &= ((var_7 & ((max((arr_12 [i_2 + 1]), (arr_11 [i_2] [i_2]))))));
                arr_19 [i_2] [i_2] [i_2] [i_2 - 2] = (max(((((((arr_9 [i_4]) ? var_2 : (arr_10 [i_2])))) ? (arr_12 [i_3]) : (arr_17 [i_2 - 1] [i_3] [i_4]))), var_2));
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_22 [i_2] [i_2] = (arr_14 [i_3]);
                arr_23 [i_2] [i_3] [i_2] = var_4;
            }
            arr_24 [i_2 - 2] [1] = (max((((arr_9 [i_2 - 2]) ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 + 1]))), (arr_9 [i_2 + 1])));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_29 [i_2 + 1] = ((~((max((arr_11 [i_2 - 1] [i_6]), (arr_11 [i_2 + 1] [i_6]))))));
            arr_30 [i_2] [i_6] [i_6] = (arr_11 [i_2] [i_2 - 1]);
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            arr_34 [i_2] = (((-(arr_27 [i_2 - 2] [i_7 + 1] [i_7 + 3]))));
            arr_35 [8] = ((~(((!(((var_4 ? (arr_13 [i_7 - 1]) : (arr_33 [i_2] [i_7])))))))));
            arr_36 [i_7 + 3] [i_2] = ((~(((arr_20 [i_2] [10] [i_7 + 2] [i_2 - 1]) & (arr_20 [i_2] [i_7] [i_7 + 1] [i_2 + 1])))));

            /* vectorizable */
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                var_15 ^= ((var_7 / (arr_32 [i_8 + 1])));
                var_16 = (arr_10 [i_8 + 1]);
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_17 |= arr_40 [i_7];

                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (((+(((arr_33 [i_2] [1]) & var_7)))))));
                    arr_47 [i_2 + 1] [i_7 - 1] [i_7 - 1] [i_2 + 1] = (arr_41 [11] [12]);
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_19 = (((((~(arr_38 [i_7] [17] [i_7 + 1] [i_7 + 1])))) ? ((((((arr_37 [i_11] [i_7] [i_2 - 1]) || (arr_38 [i_2] [i_7 - 1] [i_9] [i_11])))) >> (((arr_17 [i_11] [i_7] [i_2 - 2]) + 3350828555812410397)))) : ((((var_0 * var_8) >= ((var_5 + (arr_27 [i_7] [i_9] [i_7]))))))));
                    arr_50 [i_11] [i_9] [i_7] [i_11] = (((arr_16 [i_11] [i_7] [i_7] [i_2 - 1]) / (arr_11 [i_2 + 1] [i_2 - 1])));
                    var_20 = ((arr_48 [i_2 - 1] [i_7 + 1]) ? (((arr_48 [i_2 + 1] [i_7 + 3]) / (arr_48 [i_2 + 1] [i_7 + 2]))) : (((arr_48 [i_2 - 1] [i_7 + 3]) >> (((arr_48 [i_2 - 2] [i_7 + 2]) - 53512)))));
                }
                arr_51 [i_2] [i_2] [i_2] = ((-(((!(arr_12 [i_2 + 1]))))));
            }
        }

        for (int i_12 = 1; i_12 < 22;i_12 += 1)
        {
            var_21 = (max(var_8, (arr_31 [i_2] [i_2])));
            var_22 = (i_12 % 2 == zero) ? ((((((arr_52 [i_2 - 2] [i_2 + 1] [i_12]) + 2147483647)) << ((((-(arr_52 [i_2 - 2] [i_2 + 1] [i_12]))) - 30))))) : ((((((((arr_52 [i_2 - 2] [i_2 + 1] [i_12]) - 2147483647)) + 2147483647)) << ((((((-(arr_52 [i_2 - 2] [i_2 + 1] [i_12]))) - 30)) + 120)))));
            var_23 = (max(var_23, (((-(((arr_49 [i_12] [i_2] [i_2] [i_2] [i_2]) % var_0)))))));
        }
    }
    var_24 = var_9;
    #pragma endscop
}
