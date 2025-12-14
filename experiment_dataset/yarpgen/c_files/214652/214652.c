/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
            arr_6 [i_0] [i_1] = (((arr_4 [1] [i_1]) - (arr_3 [i_0] [11] [i_0])));
        }
        arr_7 [i_0] = var_4;
        var_17 *= ((-(!var_2)));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                var_18 = (3 ^ 224);
                var_19 = ((-(((!(arr_3 [i_0] [i_2] [i_0]))))));
            }

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_20 = (min(var_20, ((((((-127 - 1) && (arr_12 [i_0] [i_0] [i_2] [i_4]))))))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_16 [i_0] [i_0] [1] [7] [i_0] = ((~(arr_12 [i_5] [i_4] [i_2] [14])));
                    var_21 = (!(0 - 5));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_5] [i_5] [i_4] [i_0] [i_6] = ((((max(var_10, (arr_12 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])))) | (min(12, var_10))));
                        var_22 = ((((-2367 * ((var_12 ? var_7 : var_14)))) < ((((((min((arr_0 [i_0] [i_0]), var_11)))) > (max((arr_1 [i_0]), 7709948964812128490)))))));
                        var_23 = 1;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_24 = (((2377 >= var_0) ? -47 : (((83 || (arr_8 [i_0] [22] [i_4]))))));
                        var_25 = (arr_8 [i_0] [i_5] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_26 = (((arr_11 [i_0]) && var_1));
                        var_27 += var_1;
                        arr_25 [i_0] [i_2] [i_4 + 2] [i_5] [12] [i_8] [i_0] = 0;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, (((var_3 + (arr_24 [i_0] [i_2] [i_4 - 2] [i_9] [i_9]))))));
                        var_29 = 946029822;
                    }
                }
                var_30 = (max(var_30, (((((((arr_20 [i_4] [0] [i_4]) && var_13))) != (arr_4 [i_2] [i_4]))))));
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_31 &= (min((min((-2147483647 - 1), (1 >> 0))), (((!(((var_4 | (arr_17 [i_10] [i_2] [i_2] [4] [4] [i_0])))))))));
                arr_32 [i_0] [10] [i_10] [i_10] |= ((min(11, var_11)));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_36 [i_0] [i_0] [23] [i_11] = ((~((min((arr_28 [i_2] [i_2] [2] [i_2] [i_2] [i_0] [i_2]), (arr_28 [i_0] [i_0] [i_2] [i_11] [i_11] [i_11] [i_11]))))));
                var_32 = (min((((-((max(var_5, (arr_31 [i_2] [i_0]))))))), (arr_27 [i_0] [2] [i_2] [i_2] [i_2] [i_2] [i_2])));
            }
        }
    }
    var_33 = var_8;
    #pragma endscop
}
