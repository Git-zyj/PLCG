/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_1 + var_13) ? (((var_10 ? var_8 : var_5))) : var_10)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min(var_15, ((((arr_0 [i_0]) ? var_11 : (arr_1 [i_0]))))));

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (((arr_0 [i_1 - 2]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 3])));
            var_16 *= 1;
        }
        arr_6 [i_0] = (((var_8 != 1) || (arr_0 [2])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 = ((((min((arr_4 [1] [1]), (arr_7 [i_2])))) ? (arr_4 [10] [10]) : (82 + 82)));
        var_18 -= (arr_3 [i_2] [16]);
    }

    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_19 = (arr_10 [i_3]);
        arr_13 [i_3 + 2] = (var_3 ? (~var_4) : var_8);
        var_20 = var_12;
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] [i_7] = (min((-83 && 1167615733), (((arr_14 [1] [i_3 - 1]) ? var_6 : (arr_14 [i_3] [i_3 - 1])))));
                                var_21 -= (((27032 ? (-22531 + var_10) : (43894 + var_12))) >> 0);
                                var_22 -= (((max((arr_14 [i_4 - 2] [i_4 - 1]), (arr_14 [i_4 - 3] [i_3])))) > (((var_7 <= (arr_2 [i_6] [14] [i_6])))));
                                var_23 = (-32767 - 1);
                            }
                        }
                    }
                    arr_25 [i_3] [i_4] [i_4 - 2] [i_4] = ((var_13 && (7 && var_1)));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_34 [i_9] [8] [1] [i_9] = ((((((arr_15 [i_8] [i_9]) - var_5))) ? (arr_32 [i_9] [i_8] [i_9]) : (((arr_26 [i_8]) ? (arr_26 [i_10]) : var_4))));

                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    var_24 -= (arr_8 [i_11 + 2]);
                    arr_38 [i_8] [i_9] [i_9] = (arr_9 [i_8 - 2] [i_10]);
                }
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    var_25 = (min(var_25, (((var_0 ? 1 : (arr_39 [i_8] [i_10] [i_8] [i_8 - 2] [i_8 - 1]))))));
                    var_26 -= var_1;
                    arr_43 [0] [0] [i_9] [1] [i_9] [i_8] = (((238 | -1869066086) ? (arr_36 [i_9]) : ((var_4 ? (arr_20 [i_8] [i_9] [i_9 + 1] [i_10] [i_12] [i_12]) : (arr_12 [i_12 + 1])))));
                    var_27 |= ((((((arr_16 [i_10]) ? (arr_3 [i_8] [i_8]) : (arr_21 [i_8] [i_9 + 1] [i_8] [i_9 + 1] [i_9 + 1] [i_12])))) ? (((arr_31 [i_10]) | (arr_15 [i_10] [i_9]))) : var_1));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_28 = (((arr_10 [i_8 + 1]) ? (arr_10 [i_8 + 1]) : (arr_29 [i_8 - 1] [6])));
                    var_29 ^= (((arr_15 [2] [i_9 + 1]) | (arr_16 [i_13])));
                }
            }
            var_30 ^= (arr_1 [i_9]);
        }
        arr_46 [i_8 - 1] = (max(((((var_4 <= (arr_11 [i_8 - 2]))) ? (max(var_10, var_4)) : (-10360 > -63))), var_13));
    }
    var_31 = (max(var_31, (max(var_10, var_4))));
    #pragma endscop
}
