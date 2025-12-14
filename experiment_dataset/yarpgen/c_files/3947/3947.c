/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_14))) ? -0 : (-32767 - 1)));
        var_17 = -8902177906261989111;
        arr_3 [i_0] = 6952202485295474485;
        var_18 = (max(var_18, (((-(((-16172 > (-32767 - 1)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_2] = var_8;

            for (int i_3 = 3; i_3 < 7;i_3 += 1)
            {
                arr_12 [i_3] [i_3] = (arr_4 [i_1] [i_1]);

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_19 = (min(var_19, 0));

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [i_1] [i_3] = (arr_14 [i_1] [i_2] [i_3 - 3] [i_1] [i_3 - 3]);
                        var_20 = ((((((arr_7 [i_1]) ? (arr_17 [3] [i_2] [i_2] [i_2] [9]) : var_9))) ? (((arr_15 [i_1] [i_2] [i_3 + 4] [i_3] [i_5] [i_5]) | (arr_5 [1]))) : var_10));
                    }
                    var_21 = (-32767 - 1);
                    var_22 *= (~4390);
                    arr_19 [i_1] [i_2] [i_3] [i_1] [i_4] = ((12 ? -1 : (arr_10 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 + 1])));
                }
                arr_20 [i_1] [i_2] [i_2] [i_3] = (((-(arr_10 [i_3] [i_2] [3] [10]))));
            }
        }
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            var_23 ^= ((arr_10 [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6 - 2]) >= (arr_10 [i_6 - 2] [i_6 + 1] [i_6 - 3] [i_6 + 1]));
            var_24 = 125;
            var_25 = (arr_0 [i_6 - 3]);
        }
        for (int i_7 = 2; i_7 < 7;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        var_26 = 123;
                        arr_31 [i_1] [i_7] [i_1] [i_9] [i_9] = -16794;
                        var_27 = ((var_8 ? (((var_15 ? var_9 : 85))) : (arr_10 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8])));
                    }
                }
            }
            arr_32 [i_1] &= (arr_25 [i_7 + 3] [i_7 + 4] [i_7 - 1]);
        }
        var_28 = 0;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_29 |= -26226;
                    var_30 = (-304326053 % (arr_4 [i_1] [i_1]));
                    arr_40 [4] [i_11] = 1;
                }
            }
        }
        var_31 = (arr_11 [5] [5] [i_1] [i_1]);
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    var_32 = ((((-32767 - 1) ? (((-15 + 2147483647) >> (2147483647 - 2147483632))) : var_12)));

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        arr_50 [i_13] [i_13 + 1] = ((15 ? 1077980776 : (-127 - 1)));
                        arr_51 [i_12] [i_13 + 2] [i_14] [i_13] = 0;
                    }
                    arr_52 [i_13] = 5157578937411983700;
                }
            }
        }
        var_33 = ((-var_12 ? (arr_48 [14] [i_12] [i_12] [i_12]) : (~1956320817302347086)));
    }
    var_34 = (min(((-var_11 ? var_10 : var_12)), var_3));
    #pragma endscop
}
