/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(-2387821664690545141, ((max(1, (-15471 ^ -2088497723))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_13 [1] [i_4] [i_4] [1] [19] [i_4] = var_8;
                            var_11 &= (!var_5);
                        }
                    }
                }
            }
            var_12 = (!8355840);
            arr_14 [i_1] [i_0] = (~var_2);
            arr_15 [i_1] [i_0] = 2387821664690545143;
        }

        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [i_5] = (arr_2 [19]);
            var_13 -= var_8;
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_14 *= (arr_8 [i_0] [i_0] [i_0] [22]);
            var_15 = (max(var_15, ((((arr_12 [i_0 + 1] [i_0 - 2] [i_0 + 3] [i_0 - 2] [i_0 + 1] [i_0 + 2]) ? ((var_2 + (-2147483647 - 1))) : -2088497723)))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_16 = 4294967295;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_36 [i_8] [i_8] [i_8] [8] [i_8] = (arr_32 [16] [i_9] [24] [i_9] [1]);
                                var_17 ^= (((arr_23 [i_0 - 1] [i_0 + 3]) == var_8));
                            }
                        }
                    }
                    var_18 = (min(var_18, (((-2147483647 - 1) ? var_6 : var_9))));
                    var_19 = (arr_29 [i_0] [i_7] [17] [i_0]);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((max(0, 3052179414)))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                {
                    arr_48 [i_11] [i_12] [i_11] [i_12] = (max(((max((arr_23 [i_12] [i_11]), var_0))), ((4054731801 - (arr_0 [i_11])))));
                    var_21 = ((((max((arr_34 [i_13 + 1] [i_13 - 1]), ((var_7 ? var_0 : -5))))) ? (max(1, (arr_10 [i_11] [i_11] [i_11] [i_12] [i_12] [1]))) : ((((!((((arr_26 [i_12]) ? var_0 : (arr_2 [i_12]))))))))));
                    arr_49 [i_12] = (arr_44 [i_11] [i_12] [i_13]);
                }
            }
        }
        arr_50 [i_11] = var_3;
        var_22 = (max(var_22, var_6));
        arr_51 [i_11] = var_8;
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        var_23 ^= ((var_3 ? (arr_4 [i_14] [i_14]) : (max((arr_4 [i_14] [i_14]), (arr_4 [i_14] [i_14])))));

        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
        {
            var_24 |= (min(((~(arr_12 [10] [i_14] [16] [i_15] [0] [i_15]))), (((((arr_53 [i_15]) && (arr_47 [i_14] [i_14] [i_14])))))));
            var_25 = (min(var_25, (min(((((var_2 ? var_8 : 2387821664690545141)))), (((!(arr_47 [i_14] [i_14] [i_14]))))))));
            var_26 ^= (min((((!(arr_25 [i_14])))), 2378215924));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
        {
            var_27 -= (((((var_9 ? (arr_33 [i_16]) : (arr_16 [15] [21])))) ? 464347944 : (arr_46 [i_14] [i_14])));
            arr_60 [i_16] [i_16] &= (((~245031624) <= (arr_56 [i_16] [i_16] [i_16])));
            arr_61 [i_14] [i_14] = (((-(arr_56 [i_14] [i_14] [i_14]))));
            var_28 = ((+((var_3 ? (arr_6 [i_16] [11] [i_14]) : var_8))));
            var_29 -= -22080;
        }
    }
    #pragma endscop
}
