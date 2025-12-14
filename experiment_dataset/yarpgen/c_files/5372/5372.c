/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, (((((var_2 ? (min((arr_0 [6] [i_0]), var_16)) : (var_14 - var_10))) ^ (((!(arr_2 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min((((((-4 | (arr_7 [i_2] [i_1] [i_2])))) ? ((((arr_0 [i_0] [i_0]) / var_16))) : ((var_16 ? 18446744073709551615 : (arr_4 [i_0] [i_0] [i_0]))))), (arr_4 [i_0] [i_2] [i_2])));
                    var_21 = -7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = var_4;
                                var_22 |= ((~((((arr_2 [i_1] [i_2]) ? var_10 : (arr_4 [i_0] [13] [0]))))));
                                arr_14 [i_0] [i_2] [i_2] [i_2] = (arr_4 [i_1] [i_2] [5]);
                                var_23 = var_1;
                            }
                        }
                    }
                    var_24 = (((((arr_8 [i_0] [i_1] [i_2]) << ((((1 ? 59786 : (-2147483647 - 1))) - 59781)))) | ((~(((arr_7 [i_2] [i_2] [i_2]) ? (arr_2 [i_0] [i_0]) : (arr_11 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_5] [i_6] = var_2;
                                var_25 &= (min(((((((var_1 >> (var_4 - 4007177032)))) <= (min((arr_15 [i_0] [i_1] [i_2] [i_5] [i_6]), var_2))))), ((62889 ? 43 : -9917))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = (min((min(1, -var_7)), (((214 ? var_14 : 1)))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_25 [i_7] = arr_4 [0] [i_7] [0];
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_32 [i_0] [i_7] [4] [i_9] |= ((((-6 ? ((~(arr_22 [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [13]))) * var_8));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_36 [4] [4] [i_7] [i_9] [i_9] = arr_28 [i_10];
                            var_26 = (((((((arr_5 [i_9] [i_10]) % 13724722691133876133)) | (((var_2 ? (arr_22 [1] [1] [i_8]) : (arr_17 [i_0] [i_7] [6] [i_9] [i_10]))))))) ? (((~(arr_22 [i_7] [i_7] [i_8])))) : (((0 > var_13) * (((!(arr_22 [i_0] [i_8] [i_10])))))));
                            var_27 = var_0;
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_28 = ((((var_13 >> (var_1 - 36310))) >> (8191 - 8163)));
                            arr_39 [i_0] [10] [i_8] [i_9] [i_7] = var_16;
                            arr_40 [i_0] [i_0] [i_7] [i_0] [i_8] [i_9] [i_7] = (~var_4);
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_29 ^= (((3584 + 16760832) ? (min(21605, 1)) : ((-((-(arr_11 [i_0])))))));
                            var_30 = ((!((((arr_11 [i_7]) ? (-956411324836211415 > var_13) : -18446744073709551615)))));
                            arr_43 [i_0] [i_7] [i_0] [3] [i_0] = 228;
                            arr_44 [i_7] [0] [i_0] = var_15;
                        }
                    }
                }
            }
            arr_45 [i_7] [i_7] [i_0] = (((((~((var_17 ? var_1 : var_9))))) ? (~1996413463) : (((((~(arr_27 [i_0] [12] [12] [i_0])))) ? (((arr_18 [i_0] [i_0] [9] [i_0] [i_0]) ^ var_12)) : (~var_15)))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_31 = (min(((var_16 ? ((min(-1487594600291466647, 65514))) : 7)), var_16));
                            arr_53 [i_13] [i_7] [i_13] [i_13] [i_13] = ((-((254 ? 2147483637 : -21605))));
                            var_32 = (max(var_32, ((min(var_6, (((((var_13 ? var_4 : var_12))) ? ((var_4 * (arr_29 [i_7] [i_13] [13] [i_15]))) : var_3)))))));
                        }
                    }
                }
            }
            var_33 = (((arr_41 [0] [i_7]) == (((((arr_18 [14] [i_0] [1] [0] [0]) + (arr_26 [i_7] [i_7] [i_7]))) >> (((!(arr_33 [i_7] [i_7] [3] [i_7] [i_7] [3] [i_7]))))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            var_34 = var_10;
            arr_56 [i_0] [i_16] [3] = (((((arr_50 [i_0] [i_16]) ? (arr_0 [i_0] [i_0]) : 61976)) >> 2748305181871311630));
        }
    }
    #pragma endscop
}
