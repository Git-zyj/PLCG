/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] = (((arr_3 [i_0 - 1] [i_0 - 1]) ? 56 : var_3));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_10 *= (-1479752026 ^ 0);
                        var_11 = var_9;
                        arr_13 [i_0] [i_1] [i_2] [9] [i_2] [i_3] = ((130048 ? 6035764168920102962 : 4294837263));
                        arr_14 [i_0 - 1] [i_1] [i_2 + 1] [i_3] [i_3] = (((arr_9 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_2 + 1]) ? 4294837263 : 200));
                        arr_15 [i_0] [i_3] [i_3] [i_3] = ((~(arr_1 [i_0 - 1])));
                    }
                }
            }
            arr_16 [i_1] = ((-(62 | -19865)));
            arr_17 [i_0 - 1] [i_1] = (((arr_4 [i_1]) & (arr_12 [i_1] [i_1])));
            arr_18 [i_1] = ((((~(arr_2 [i_0 - 1] [i_0 - 1])))) ? ((((arr_1 [i_1]) || (arr_8 [i_0] [i_1] [i_0 - 1])))) : (arr_6 [i_0 - 1] [3]));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_21 [i_0] [i_4] = ((1 >> ((((-(4887377137141960504 - 74))) + 4887377137141960457))));
            arr_22 [i_0] [i_0] [i_4] = var_2;
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_12 = (((arr_24 [i_0 - 1] [i_5] [i_0 - 1]) / (arr_24 [1] [i_0] [i_0 - 1])));
                        var_13 = 174;
                    }
                }
            }
            var_14 = (arr_27 [i_0] [i_5] [i_0 - 1]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_15 = ((arr_0 [i_0 - 1]) ? (((~(arr_20 [i_0] [i_0 - 1] [i_0])))) : var_8);

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_16 = ((var_8 ? (arr_33 [i_0 - 1] [i_8] [i_9]) : (arr_33 [i_0] [i_8] [i_9])));
                arr_36 [i_0] = 66;
                var_17 = ((arr_35 [i_0] [9] [i_0 - 1] [i_0 - 1]) ? (arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_8 [i_0 - 1] [i_0] [i_0]));
            }
            var_18 = (((arr_34 [i_0] [i_0] [7]) | 22));
            var_19 *= var_6;
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 8;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                {
                    arr_43 [i_0] [i_10 - 2] [i_10] = (((1 | ((min(173, 1))))));
                    arr_44 [i_10] [i_10 - 3] [i_10] [i_10] = var_9;
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 7;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 9;i_13 += 1)
                        {
                            {
                                arr_51 [i_10] [i_12 - 2] [i_11 - 2] [i_10 - 2] [i_10 - 3] [i_10 + 2] [i_10] = (((arr_19 [i_0 - 1]) + (arr_34 [i_10 + 2] [i_11] [i_13 + 1])));
                                var_20 = (max(var_20, ((((-938970442 % 15) > (arr_0 [i_0 - 1]))))));
                                var_21 -= ((((min(-var_3, ((-6157351955460327133 ? 16384 : 245))))) <= (min(((var_9 ? (arr_9 [i_13 - 3] [i_12 - 1] [i_11] [i_10] [i_10] [i_0]) : (arr_39 [i_0] [4] [i_0 - 1]))), (((arr_26 [i_0 - 1] [i_10] [i_11] [i_12]) ? (arr_29 [i_13] [i_0] [i_13]) : (arr_28 [i_10] [i_11 + 1] [i_12 + 2] [i_13])))))));
                                var_22 = (69 * -21);
                            }
                        }
                    }
                    arr_52 [i_10] = (min(((((arr_20 [i_0 - 1] [i_10 + 1] [i_11 - 2]) < (arr_20 [i_11 - 1] [i_10] [i_0 - 1])))), (arr_20 [i_11 - 2] [3] [i_11 - 1])));
                }
            }
        }
        var_23 = (min((arr_19 [i_0]), ((~((var_8 ? (arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) : (arr_41 [i_0 - 1] [i_0] [6])))))));
    }
    var_24 += (min(((((251 ? var_2 : var_4)) - var_6)), (((var_0 >> (var_3 >= var_4))))));
    var_25 = (!(((var_5 ? ((var_2 ? -10 : var_8)) : (~var_9)))));
    #pragma endscop
}
