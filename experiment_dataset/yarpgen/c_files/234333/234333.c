/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_11 = -32736;
            var_12 = (min(var_12, var_5));
        }
        var_13 ^= 3;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (min(var_14, (arr_1 [i_0])));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_14 [i_0] [i_2] [i_3] [i_0] [i_0] |= ((arr_12 [i_5] [i_5] [i_4] [i_3] [i_2] [6]) ? ((7480 ? var_10 : (arr_5 [i_0] [i_0]))) : var_0);
                            var_15 = -126;
                            var_16 = var_6;
                            var_17 = ((var_6 ? (2147483648 * -495) : (99 | var_6)));
                            arr_15 [i_0] [12] [i_2] [i_3] [i_0] [i_5] |= arr_1 [i_3];
                        }
                    }
                }
            }
            var_18 *= (((arr_10 [i_0] [i_2]) != (arr_10 [i_2] [i_2])));
            var_19 *= 960;
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_20 = var_10;
                            arr_25 [i_0] [i_7] [12] [i_7] [i_8] [i_9] = var_5;
                        }
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            var_21 = ((-(((var_10 <= (arr_7 [i_0]))))));
                            arr_29 [i_0] [i_0] [4] [i_0] [i_7] [8] = (((arr_22 [i_10 - 2] [i_7]) % var_9));
                            arr_30 [i_7] [i_6] = (arr_26 [i_10 - 2] [6] [i_10 + 1] [5] [i_10 + 1] [i_10] [i_10]);
                        }
                        var_22 = ((var_0 ? var_3 : var_0));
                    }
                }
            }
            arr_31 [14] = arr_5 [14] [i_0];
        }
    }

    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        var_23 = ((((min(var_7, var_5))) ? -849879408 : (max((arr_34 [i_11]), ((2065500004 ? var_2 : 0))))));
        arr_35 [i_11] [i_11] = (max((arr_32 [i_11]), var_10));
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_48 [i_12] [i_15] = var_10;
                                arr_49 [i_12] [i_12] [i_15] [i_14] [i_12] [i_16] = (((arr_34 [i_12]) >> (arr_41 [i_14] [i_14] [i_14] [i_14])));
                                arr_50 [i_12] [i_12] [i_15] [i_15] [i_16] = (arr_44 [3] [i_13 + 1] [i_13 + 1] [3]);
                            }
                        }
                    }
                    var_24 = (max(var_24, (((-477 ? -32749 : 1)))));
                    arr_51 [i_12] [i_13] [i_14] = var_1;
                    var_25 = (min(var_25, (max((((55652 ? var_8 : (max(var_7, (arr_39 [i_12] [i_12])))))), ((((min(228, var_5))) ? (arr_33 [i_12]) : (min(var_0, var_6))))))));
                }
            }
        }
    }
    #pragma endscop
}
