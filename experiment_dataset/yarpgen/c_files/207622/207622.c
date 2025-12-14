/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 ? var_0 : var_3));
    var_18 ^= ((!(((((200 ? var_5 : -64))) != 4275422930))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (max(var_19, (!var_12)));
        arr_4 [i_0 + 1] = (((((max((arr_0 [i_0]), var_10)))) ? (arr_1 [i_0] [i_0]) : (!177)));
        var_20 = (((max((var_16 | var_0), (arr_0 [i_0]))) * (((((max((arr_1 [i_0] [9]), var_12))) ? (max(var_3, var_7)) : var_9)))));
        var_21 = var_8;
        arr_5 [i_0] = ((~((var_5 * (arr_3 [i_0 - 1] [i_0 - 2])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_22 = (min(var_22, ((max(((var_11 ? (arr_0 [i_2]) : (arr_6 [i_1]))), var_4)))));
                    var_23 = (max(var_23, (arr_8 [10] [10])));
                }
            }
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_24 = (!(((arr_7 [i_1] [i_4]) < ((var_8 ? (arr_12 [i_4] [i_1]) : -8096243706286862379)))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_19 [i_1] [i_1] [i_4] = (((arr_14 [i_1] [i_1] [i_4] [i_5]) ? (arr_0 [i_5]) : (arr_6 [i_1])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_25 = ((!(((var_4 * (arr_2 [1]))))));
                            var_26 = (arr_3 [i_1] [i_4]);
                        }
                    }
                }
                arr_24 [i_4] = var_14;
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_27 = arr_13 [i_4] [i_4] [i_4];
                var_28 = (max(var_28, (59005 / 376224185)));
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_29 = (arr_0 [i_9]);
            var_30 = (((arr_1 [i_1] [i_1]) ? var_4 : (arr_26 [13] [2] [i_9] [i_9])));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_31 = (((arr_14 [i_1] [i_10] [i_1] [i_10]) ? (arr_13 [i_10] [i_10] [12]) : var_1));

            for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
            {
                var_32 = (max(var_32, var_15));
                var_33 = (max(var_33, (arr_18 [14])));
                var_34 |= var_7;
                var_35 *= (61231 != 64);
                var_36 = (max(var_36, 0));
            }
            for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
            {
                var_37 += arr_17 [i_12 - 1] [i_10] [i_12] [i_1];
                arr_38 [i_1] [i_12] = (((arr_10 [i_12 - 1] [i_12 - 1] [i_10]) * (arr_10 [i_12 - 1] [i_12 - 1] [i_10])));
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                var_38 = (max(var_38, -48));
                arr_42 [i_13] [11] [2] = (arr_32 [i_1] [i_10] [i_13]);
                var_39 = (((arr_40 [i_1] [i_10]) % (((arr_17 [i_1] [i_10] [3] [i_1]) % var_10))));
                var_40 = (min(var_40, var_2));
                var_41 += ((!(arr_27 [i_13] [i_10])));
            }
            var_42 -= ((-var_16 ? (arr_31 [2] [i_10] [i_10]) : (!237)));
        }
    }
    #pragma endscop
}
