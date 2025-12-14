/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = arr_6 [i_0 - 1] [i_0 + 1];
                    arr_7 [1] [i_0 + 2] [i_2] [1] = ((-(arr_6 [i_0] [i_1])));
                    var_21 ^= (((-9223372036854775807 - 1) ? (((-9223372036854775807 - 1) ? 6707625642034965498 : (-9223372036854775807 - 1))) : 9223372036854775807));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((4294967295 ? -1072192871 : 9223372036854775807))));
                                var_23 = (-9223372036854775807 - 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((((arr_26 [i_3] [i_3] [i_5] [i_4 + 2] [i_3]) ? (((arr_26 [i_3] [18] [i_5] [i_4 - 2] [i_9]) ? (arr_25 [1] [i_4 - 1] [i_5] [i_4 - 2] [i_9] [i_4 + 2] [i_4]) : (arr_26 [i_3] [i_4 + 1] [i_5] [i_4 - 2] [i_3]))) : (max((arr_22 [i_5] [i_3] [i_5] [i_4 - 2] [i_3] [i_4 + 1]), (arr_25 [i_3] [9] [i_5] [i_4 - 1] [i_5] [i_3] [i_3]))))))));
                                arr_27 [i_3] [14] [i_5] [i_4 - 2] [i_3] = ((((((42684 != (arr_17 [i_9] [i_4] [i_5] [i_4] [i_4] [i_3]))) ^ ((max(-6136, -25)))))));
                                var_25 = (min(var_25, ((((((var_9 / (arr_9 [i_3] [13])))) - (((((max(-4401, var_12)))) % ((469762048 ? 4006344756 : var_0)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((~(((!(-9223372036854775807 - 1)))))))));
                                var_27 = (max(var_27, ((((((((max((arr_28 [i_11 - 1] [i_11] [i_3] [i_3] [17] [i_3]), 9007199237963776))) ? (arr_10 [i_4]) : var_6))) ? ((-(arr_25 [i_4] [i_4] [i_10 + 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]))) : var_0)))));
                                var_28 = ((!(arr_18 [i_10] [i_5])));
                                arr_33 [i_3] [i_4 + 2] [i_5] [i_3] [i_11 - 1] [21] = 1;
                            }
                        }
                    }
                    var_29 |= (((arr_21 [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 + 1] [i_4 - 2]) < (((((((-2147483647 - 1) ? (arr_13 [20]) : var_3)) < ((var_1 ? -1740 : (arr_14 [i_3])))))))));
                }
            }
        }
    }
    #pragma endscop
}
