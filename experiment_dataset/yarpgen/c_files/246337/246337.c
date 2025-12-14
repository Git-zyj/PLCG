/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [10] [i_4] = (((((max((arr_3 [i_4 + 1] [i_1] [i_1]), (arr_3 [i_4 + 1] [i_1] [i_2]))))) < (max(((((arr_1 [i_1] [i_0]) || 266287972352))), (max((arr_7 [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_2 + 2] [i_3])))))));
                                var_16 = (max(((max(var_0, var_13))), (min((arr_12 [i_3] [i_1] [4] [9] [i_3 + 3] [i_4] [i_2 + 1]), 134086656))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_0] = (min(((min((arr_9 [i_3 + 2] [i_2 + 1] [i_2 + 2] [i_4 + 1]), (arr_0 [i_2 + 1])))), (((arr_12 [i_3] [i_0] [i_1] [i_3 + 3] [i_3 + 3] [i_4 + 1] [i_4 + 1]) % 8196861871812606735))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [1] [9] [i_6 - 1] = ((((min((max((arr_3 [i_5] [i_2 + 2] [10]), var_1)), ((min(var_0, var_9)))))) * ((1 >> (16383 - 16359)))));
                                var_17 = max(((var_0 - (arr_12 [i_0] [0] [0] [i_5] [i_5] [12] [0]))), (((((min(var_15, 2243755640))) || ((min((arr_3 [i_0] [i_0] [i_0]), -32756)))))));
                            }
                        }
                    }
                    var_18 = (((min((min(1152921504606846975, (arr_19 [i_0] [i_0] [12]))), (((6145 | (arr_3 [i_0] [i_1] [15])))))) >> ((((-3272 > var_6) <= ((min(var_1, (arr_5 [i_2] [i_1])))))))));
                }
            }
        }
    }
    var_19 = (max(var_13, (((max(1, var_8)) >> (((max(var_9, var_11)) - 13298029694240454802))))));

    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = (max((max(-1, 18446744073709551613)), ((min(var_4, 240)))));
        var_20 = (max(var_20, ((max((max((min(18446744073709551607, var_8)), ((min(var_15, var_4))))), ((max(var_6, (-9223372036854775807 - 1)))))))));
        var_21 = (((max(0, 4294967288)) + ((max((min(3, var_0)), (170 / var_13))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_22 = (var_2 * var_8);
        arr_26 [i_8] = (((arr_22 [i_8]) - var_7));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                {
                    var_23 = (min(var_23, ((max((min((arr_30 [i_11 + 1] [i_11] [22]), ((min(-1229, 0))))), ((((var_14 ^ var_13) <= (((min(var_10, (arr_31 [6])))))))))))));
                    arr_34 [i_9] [i_9] [21] = (((min((max(var_11, 239)), var_5)) ^ (((max((arr_30 [i_9] [i_10] [i_9]), (arr_27 [i_11]))) + (((min((arr_27 [i_9]), var_13))))))));
                    arr_35 [i_9] = (max(((min((min((arr_33 [23] [i_11] [i_11] [i_11]), (arr_32 [i_9] [i_9] [i_11 + 1] [i_9]))), var_15))), (max(((0 + (arr_27 [i_10]))), (arr_33 [i_11 + 1] [i_11] [i_10] [i_10])))));
                    arr_36 [i_9] = max((((max(2313524087, 2831395409)) * (((((arr_30 [i_9] [13] [i_9]) <= var_10)))))), (max((max(var_9, var_5)), var_9)));
                    arr_37 [i_10] [i_11 + 1] [i_10] [0] &= (min((max((min((arr_28 [18]), 18446744073709551603)), ((min((arr_32 [i_9] [i_9] [12] [10]), var_14))))), ((min((min((arr_31 [8]), 255)), (((65535 % (arr_33 [i_9] [i_9] [18] [i_9])))))))));
                }
            }
        }
    }
    #pragma endscop
}
