/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_2 == var_12) + ((-((var_6 ? var_9 : var_8))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= (((arr_1 [i_0]) - (((arr_1 [14]) - (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, (((511 > ((max(65040, 65025))))))));
                        var_19 += (((!493) || ((((arr_1 [i_3]) ? ((min(var_3, (arr_1 [i_0])))) : (arr_5 [i_0]))))));
                        var_20 = (min(var_20, var_11));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 &= (arr_11 [i_4]);
        var_22 = arr_8 [i_4] [i_4] [i_4] [i_4];
        var_23 += (arr_1 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_24 = var_1;

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_16 [i_5] [i_5] [i_5] = var_7;
            var_25 *= (arr_14 [i_5] [6]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_26 = (arr_13 [i_5] [i_7]);

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_27 = ((!(arr_18 [i_5] [i_5] [i_5])));
                var_28 = ((arr_15 [i_8]) || var_5);
            }
            var_29 += (((arr_14 [i_7] [i_5]) & (arr_14 [i_5] [i_7])));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_30 += var_15;
            arr_23 [i_9] [i_9] = (((arr_13 [1] [1]) || (arr_13 [i_5] [i_9])));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_31 = (arr_24 [i_5] [11] [14]);
            var_32 = (((arr_13 [10] [i_10]) << (((arr_20 [i_5] [i_5] [i_10] [i_5]) ? (arr_21 [i_10]) : (arr_21 [i_10])))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_34 [i_5] [i_10] = (((arr_22 [i_12]) << (((arr_24 [1] [i_10] [i_11]) - 214))));
                        var_33 = ((arr_29 [i_5] [i_10] [i_11] [i_12]) || (arr_29 [i_5] [i_10] [i_11] [1]));

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_34 = ((((var_3 ^ (arr_24 [i_5] [i_11] [i_11]))) & ((~(arr_27 [i_5] [i_10] [i_13])))));
                            var_35 = var_4;
                            var_36 += (arr_29 [i_13] [i_11] [i_10] [i_5]);
                        }
                        var_37 += ((((arr_29 [i_5] [i_10] [0] [i_12]) << (((arr_36 [i_12] [i_10] [i_12] [i_12] [i_10]) - 44535)))));
                    }
                }
            }
            arr_37 [i_10] = ((!(arr_33 [i_5] [i_10])));
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_40 [i_14] = (min(((~((var_0 ^ (arr_21 [i_14]))))), (arr_21 [i_14])));
        var_38 -= (-((-(arr_17 [i_14] [i_14]))));
        arr_41 [i_14] [i_14] = (max(36181, (!-1)));
    }
    var_39 = var_15;
    #pragma endscop
}
