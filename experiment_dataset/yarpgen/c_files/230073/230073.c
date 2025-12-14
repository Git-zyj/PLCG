/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = 1;
        var_20 *= var_6;
        var_21 = (arr_1 [i_0] [i_0]);
        var_22 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_23 = ((!(var_1 || 64777)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_3] [i_1] [i_5] [i_5] [1] = (!var_1);
                                var_24 = (arr_4 [i_2 - 2]);
                                arr_18 [9] [i_2] [i_1] [i_2] [i_2] = -1;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_25 = var_11;
                                var_26 = (max(var_26, (~var_16)));
                                var_27 = (i_1 % 2 == zero) ? ((((-5308 + 2147483647) << (((arr_14 [i_1] [i_9 + 1] [i_7] [i_8] [i_9] [9] [i_1]) - 8523414557240205315))))) : ((((-5308 + 2147483647) << (((((((arr_14 [i_1] [i_9 + 1] [i_7] [i_8] [i_9] [9] [i_1]) + 8523414557240205315)) + 369154795262485645)) - 31)))));
                                var_28 = (arr_6 [i_9 - 1] [i_9 - 1]);
                            }
                        }
                    }
                    var_29 = 42258;
                    var_30 -= (((arr_11 [i_1] [i_1] [i_7]) + 271517291968537911));
                    var_31 = (((arr_25 [i_1] [i_1] [i_1] [5] [15]) ^ var_0));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                {
                    var_32 ^= ((((-(arr_27 [0] [i_10 - 2] [0] [i_12] [0])))));
                    arr_36 [i_11] = ((((min((arr_16 [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 1]), (arr_13 [i_10] [20] [i_11] [i_11] [i_12])))) ? ((((-8663 - (arr_30 [i_12]))))) : (((arr_30 [i_12 - 3]) + 15))));
                    arr_37 [i_11] [i_11] = ((-((var_14 ? (arr_32 [i_10 - 1]) : (arr_32 [i_10 + 1])))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_43 [i_13] [i_13] [i_13] [8] [i_13] [1] &= ((min((((var_13 != (arr_13 [i_13] [i_13] [i_13] [11] [i_13])))), (max(var_12, -6745)))));
                                arr_44 [i_11] [i_13] [i_12] [i_11] [i_11] = ((((max((max(-6352388049621056464, (arr_15 [i_11] [i_11] [i_12]))), (max((arr_9 [i_13] [i_12] [i_10]), 65520))))) ? (((!((min(var_14, (arr_32 [i_10]))))))) : var_6));
                                arr_45 [i_10] [i_10] [i_11] [i_10] = var_3;
                            }
                        }
                    }
                    arr_46 [i_11] [i_11] [i_11] = ((((((2086212191 ? 1 : 15986))) < ((576460752303423488 ? (arr_7 [i_10 + 2] [i_11]) : var_6)))));
                }
            }
        }
    }
    var_33 |= (((((var_14 << (5924450908325171282 - 5924450908325171268)))) << (!var_10)));
    var_34 = (min(var_34, (var_15 >= 271517291968537911)));
    #pragma endscop
}
