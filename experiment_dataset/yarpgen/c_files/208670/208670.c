/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_0] [i_3 - 1] = (min(((((arr_9 [i_3 + 2] [i_3 - 1] [i_3] [i_2 + 1] [i_2]) - (arr_9 [i_3 + 3] [i_3 - 1] [i_2] [i_2 - 1] [i_0])))), ((-((-(arr_6 [16] [16])))))));
                            var_12 &= (~8277);
                            var_13 = (max((arr_9 [5] [i_2 - 2] [i_2 - 2] [i_3 + 2] [i_0]), (arr_9 [i_0] [i_2 - 2] [2] [i_3 + 2] [i_3])));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_14 = (arr_7 [i_0]);
                        var_15 = ((18446744073709551615 ? 85 : 214));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_16 = var_11;
                        arr_20 [i_4] [i_1] [i_4] [i_6] = (((arr_17 [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4]) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4]) : (arr_12 [i_4 + 2] [i_4 + 1] [i_4])));
                        var_17 = (max(var_17, (((arr_18 [i_4] [9] [9] [i_4 - 1] [10]) ? (arr_5 [i_4 - 1]) : ((((arr_14 [i_0] [i_6] [i_4] [i_6] [i_1] [i_6]) && var_9)))))));
                        var_18 = ((~(arr_6 [i_6] [i_0])));
                    }
                    arr_21 [i_0] [i_1] [i_4] [i_4] = (arr_18 [i_1] [i_1] [i_0] [i_0] [8]);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_27 [i_8] [i_7] [i_4] [i_4] [i_1] [i_0] = (i_4 % 2 == 0) ? (((var_3 | ((((((arr_8 [i_4 + 2]) + 2147483647)) << (((arr_16 [i_4]) - 354889094)))))))) : (((var_3 | ((((((arr_8 [i_4 + 2]) + 2147483647)) << (((((((arr_16 [i_4]) - 354889094)) + 1030256133)) - 12))))))));
                                var_19 = (arr_9 [13] [i_7] [i_7] [i_7 - 1] [i_8]);
                            }
                        }
                    }
                    var_20 = ((((max((arr_6 [4] [i_1]), (((var_1 ? 127 : var_11)))))) ? (((~2198090516) & -3040994055472923067)) : (((var_6 ? (arr_0 [i_4 + 1]) : (arr_0 [i_4 + 1]))))));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_21 = (min(var_1, (((~(arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                    var_22 &= (arr_18 [11] [9] [i_0] [i_9] [i_9]);

                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        arr_33 [i_0] [2] [i_9] [i_10] = (var_6 >= (((((((var_9 ? var_11 : (arr_28 [8] [3] [i_0])))) != (((arr_14 [i_0] [i_10] [i_1] [i_9] [i_10] [i_0]) ? (arr_4 [i_1] [i_10]) : var_8)))))));
                        var_23 = (max((arr_30 [i_10]), ((((arr_31 [i_10] [i_10 - 1] [i_10] [i_10 - 2]) - (((arr_19 [i_10]) ? var_5 : 1)))))));
                    }
                    var_24 = (((((arr_22 [4] [i_1] [i_9] [i_9]) ? -483887258 : (arr_22 [i_0] [i_1] [i_9] [i_0]))) * (arr_26 [i_9] [2] [i_0] [i_1] [i_0] [i_1] [i_0])));
                    var_25 = (((((-(min((arr_28 [i_0] [i_1] [i_9]), (arr_5 [i_0])))))) + (arr_6 [i_0] [i_1])));
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    arr_36 [i_11] [i_11] [i_1] [i_0] = ((0 ? (!228) : -1));
                    var_26 = (max(var_26, ((((((((arr_13 [i_11] [i_11] [i_11] [i_0]) ? var_1 : (arr_6 [i_0] [i_1]))) / (((arr_2 [i_0]) % (arr_32 [i_11] [i_1] [i_11]))))) & (arr_1 [i_11]))))));
                    arr_37 [1] [i_1] [i_11] [i_11] = (arr_19 [i_11]);
                }
            }
        }
    }
    var_27 = var_2;
    var_28 = ((4057 ? (~-102) : ((1 ? var_7 : (var_10 != var_3)))));
    var_29 -= var_10;
    var_30 *= (min(1, 65531));
    #pragma endscop
}
