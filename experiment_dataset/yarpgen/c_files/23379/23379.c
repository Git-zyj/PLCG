/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (63 % var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 -= (-9223372036854775792 > -15867);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 -= ((arr_3 [i_0] [i_2]) >= 71);
                    arr_8 [i_1] = ((-var_1 ? var_12 : (arr_1 [i_2] [3])));
                    var_21 *= ((((((arr_0 [i_1] [i_1]) + (arr_5 [i_2])))) ? (var_17 / -1934871806) : -63));
                }
            }
        }

        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_22 = ((var_3 && ((!(arr_5 [i_0])))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    {
                        var_23 -= ((-70 ? (arr_1 [i_5 - 1] [i_4 + 2]) : ((-(arr_3 [1] [1])))));
                        var_24 -= ((((arr_11 [i_3] [i_4] [i_5]) > 250)));
                        var_25 += (!((((arr_4 [i_5 - 1]) ? (arr_13 [i_0] [i_3] [i_4] [i_5]) : var_8))));
                        var_26 |= (arr_14 [i_5 + 2] [i_0] [i_3] [i_0]);
                    }
                }
            }
            var_27 = (min(var_27, (arr_5 [i_0])));
            var_28 |= ((127 ? (((arr_4 [i_3]) / (arr_9 [i_0] [i_3]))) : var_1));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_29 = ((var_15 ? -127 : (!-78)));
                            arr_24 [i_0] [i_8] [1] [i_0] [i_8 - 1] = (((arr_17 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 + 2]) << (((arr_3 [i_0] [10]) - 62912))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_30 = ((var_8 & (arr_31 [i_9] [i_9] [i_10] [i_10] [i_10] [i_10])));
                        arr_32 [i_11] [i_11] [i_11] [i_11] [i_11] [i_9] = ((!(arr_22 [7] [i_9] [i_9] [i_11] [i_11])));
                    }
                }
            }
            var_31 += var_1;
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        var_32 -= (arr_33 [i_12 - 1]);
        var_33 -= (((((arr_33 [i_12]) >= var_12)) ? (arr_33 [i_12]) : (var_12 < -21573)));
        var_34 ^= (((((~(arr_33 [i_12])))) >= (arr_34 [i_12 + 1])));
    }
    #pragma endscop
}
