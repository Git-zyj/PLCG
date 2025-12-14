/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 |= (((((max((((arr_1 [1] [i_0 + 2]) * var_8)), (arr_0 [20] [i_0 - 3]))) + 2147483647)) << (((-78 + 99) - 21))));
        var_14 = 0;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 |= (((arr_0 [i_1 + 1] [i_1 - 4]) * (arr_3 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_7 [i_2] = (((var_1 ^ (arr_2 [i_1] [i_1]))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_11 [i_3] [i_3] = ((var_4 >= (var_3 <= var_1)));
                var_16 = ((~(arr_10 [i_3] [i_3])));
                var_17 |= ((var_5 * ((((arr_10 [i_2] [i_1]) == var_8)))));
                var_18 = (((arr_4 [i_1 + 2]) && 116));
            }
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_19 = -14829669796100019497;

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_20 += -1621270203;
                var_21 = (max(var_21, (arr_1 [i_1 + 1] [i_1 - 4])));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_22 = (1 * 54056);

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_25 [i_4] = var_7;
                    var_23 = (arr_17 [i_4] [i_4] [8] [8]);
                    var_24 = (min(var_24, (((arr_8 [i_7] [i_1 - 4] [i_1] [i_7]) != -4))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_29 [i_4] [i_4] [i_4] [i_6] [i_8] = (arr_1 [1] [1]);
                    var_25 = (-1 / 65535);
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_26 = (max(var_26, ((((arr_27 [i_1] [i_1 + 2] [i_1] [i_1]) ? (arr_27 [i_1 + 1] [i_1 + 3] [i_9] [i_1]) : (arr_27 [i_1] [i_1 + 2] [i_6] [i_1]))))));
                    arr_33 [i_1 - 3] [i_1 - 3] [i_4] [i_9] = ((var_4 != (((arr_28 [i_1] [i_1 + 3] [i_1 - 3]) ? var_11 : var_3))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_38 [i_1] [i_1] [i_1] [8] [i_1] |= 121;
                        var_27 &= (!var_9);
                        var_28 -= (((arr_13 [i_1]) & (arr_37 [i_1] [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1])));
                        arr_39 [i_4] [i_6] [i_4] = -32763;
                    }
                }
                var_29 |= (((var_11 != 1935553166) / (arr_4 [i_1 + 2])));

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_30 = (((arr_9 [i_1] [i_1] [i_1 - 3] [i_1 - 2]) <= (arr_28 [i_1 - 4] [i_1 - 1] [i_1 + 1])));
                    var_31 |= ((((((arr_28 [i_1] [i_1] [i_1]) ^ (arr_18 [i_1] [i_1])))) ? (((((arr_22 [i_1] [i_1]) != var_12)))) : ((1 ? var_11 : (arr_22 [i_1] [i_1])))));
                    arr_42 [i_4] [12] = ((var_12 ? 872543939 : 128));
                }
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {
                var_32 = (min(var_32, ((((arr_6 [i_1 + 2]) != (arr_6 [i_1 - 4]))))));
                arr_46 [i_1] [i_1] [i_1] [i_1] &= ((((((arr_36 [i_1]) + var_7))) ? (arr_19 [i_1 + 1] [i_1 + 1] [i_1]) : -95577606));
                var_33 = (((arr_9 [1] [i_12] [0] [i_1 - 2]) | var_12));
            }
            var_34 = (min(var_34, 58349));
        }
        arr_47 [11] = arr_45 [3] [3] [i_1 - 4];
    }
    var_35 = var_4;
    #pragma endscop
}
