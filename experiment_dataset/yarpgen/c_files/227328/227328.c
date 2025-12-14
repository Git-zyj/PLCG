/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 *= (((arr_0 [i_0] [i_0]) ? var_8 : (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, 1));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_17 += (((arr_3 [i_2 + 1] [i_1] [i_1]) ? (arr_7 [i_2 + 1] [i_1] [i_1] [i_0]) : (arr_3 [i_2 + 1] [i_1] [i_2])));
                        var_18 = ((9 ? 0 : (arr_8 [i_0] [i_0] [i_3] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_5] [i_4] = (((arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2 + 1]) ? (arr_6 [i_2] [i_2] [i_2] [i_2 + 1]) : var_0));
                                var_19 = (~63);
                                arr_17 [i_0] [i_5] [i_2 + 3] [i_4] = (((3584 || var_13) ^ (arr_11 [i_2 + 1] [i_2 + 1])));
                                var_20 += ((-1 ? (arr_6 [i_2 + 1] [i_1] [i_4] [i_4]) : (arr_6 [i_2 + 2] [i_1] [i_4] [i_4])));
                            }
                        }
                    }
                }
            }
        }
        var_21 = ((0 == (var_2 % var_11)));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_22 = ((-32762 ? 1 : 18446744073709551615));
        var_23 += (((var_12 + var_4) ? (((arr_20 [i_6] [i_6]) ? (~9223372036854775807) : (((var_5 ? 1 : var_14))))) : (63 % -1)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_24 = (max(var_24, ((((arr_6 [i_7] [i_7] [i_7] [i_7]) < (min(var_11, (arr_20 [i_7] [12]))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                {
                    var_25 = (min((min((arr_15 [i_9] [i_9 + 2] [i_9 - 1] [13] [i_7] [i_9 + 1] [i_9]), ((-(arr_12 [i_9] [i_9] [3] [i_8] [i_8] [i_8] [i_7]))))), (-1 >= 0)));
                    var_26 = ((((((var_9 ? var_0 : 0)) | ((max(var_0, -32757))))) < (((((((-127 - 1) % var_6))) >= var_13)))));
                    var_27 = (arr_26 [i_7] [i_7]);
                }
            }
        }
        arr_29 [i_7] = (min(15, (max((max(var_8, (arr_8 [i_7] [i_7] [i_7] [i_7]))), (((var_14 ? 98304 : var_2)))))));
        var_28 -= (max((min(((2047 ? 14336 : 10)), (~var_14))), (((!(-127 - 1))))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                {
                    var_29 ^= ((((((((255 ? var_13 : 1))) ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]) : 6144))) - (arr_3 [i_7] [i_7] [i_7])));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_38 [i_7] [i_7] = var_1;
                        var_30 = ((!((min(((((arr_36 [i_7]) ? (arr_25 [i_7]) : 2046))), (arr_18 [i_10 - 1]))))));
                        arr_39 [0] [i_7] = ((((65527 && (arr_7 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))) || (((arr_7 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1]) && (arr_7 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        var_31 = (~var_4);
                        var_32 = ((var_7 >= ((var_2 ? var_10 : var_6))));
                    }
                    arr_42 [i_7] [10] [i_11 - 1] [i_7] &= (min((arr_13 [i_11 - 1] [i_10 + 2] [i_11 - 1] [i_11 - 1] [i_10 + 2]), ((((arr_4 [i_11 - 1]) < 1)))));
                }
            }
        }
    }
    var_33 = ((((var_9 ? var_13 : 7680)) ^ ((((min(4, 32765)) | (18446744073709551615 >= var_5))))));
    #pragma endscop
}
