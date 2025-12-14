/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = ((~9223372036854775795) ? (max((max(-9223372036854775783, -9223372036854775796)), (((-(arr_5 [i_0] [i_0] [4] [i_4])))))) : (arr_0 [i_2 + 3]));
                                var_14 = (min((max(((min((arr_5 [i_0] [i_1] [i_2 - 1] [i_1]), (arr_3 [i_0])))), (arr_4 [i_2 + 1] [i_0 - 1]))), (arr_8 [i_0] [i_0] [i_3] [i_0])));
                                var_15 = (min(var_15, ((min((max(4294967295, (arr_8 [i_0 + 2] [i_0 - 1] [i_1 - 2] [i_2 + 2]))), (!-9223372036854775795))))));
                            }
                        }
                    }
                    arr_13 [i_2] = ((max((arr_12 [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0] [i_0]), (min(9223372036854775795, (arr_7 [i_0] [i_0] [i_1 - 2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 += (arr_0 [i_2]);
                                var_17 &= arr_16 [i_0] [i_1 - 2];
                            }
                        }
                    }
                    var_18 = (max((arr_19 [i_0] [i_0] [i_0 - 2]), (((min((arr_0 [i_2]), 59251999))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_2] [i_0] = ((~(arr_3 [i_0 + 1])));
                                arr_27 [i_2] = (max((((!((((arr_16 [i_0] [i_0]) ? 9223372036854775795 : 18446744073709551615)))))), ((~(arr_21 [i_0] [i_1] [1] [i_7] [i_8])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 |= ((var_4 ? var_1 : (((min(var_0, (min(var_10, var_0))))))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            {
                arr_32 [i_9] [i_9] [i_9] = ((((min((arr_31 [i_10 + 1] [i_10 + 1] [i_10 - 2]), (min(-9223372036854775778, (arr_20 [i_9] [i_10])))))) ? (((~(~-59252001)))) : (arr_29 [10])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_38 [i_9] [i_9] [i_11] [i_9] [i_12] = ((!(arr_19 [i_9] [i_9] [i_9])));
                            var_20 = (arr_31 [i_10 - 1] [i_10 - 2] [i_10 - 1]);
                        }
                    }
                }
                var_21 -= ((((max((~-196983091), 32761))) ? ((((0 ? 15 : -9223372036854775795)))) : (arr_3 [i_9])));
                var_22 = (max(var_22, (((-((min((arr_30 [i_9]), (arr_30 [i_10])))))))));
            }
        }
    }
    #pragma endscop
}
