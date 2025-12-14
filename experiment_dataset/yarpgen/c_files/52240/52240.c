/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [11] [i_1 - 4] = -38782;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (arr_5 [i_1] [i_2] [i_3] [i_4])));
                                var_12 = (max(var_12, (((var_2 ? var_8 : (min(var_0, (arr_3 [i_2 + 1] [i_1 - 3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            {
                var_13 = (max(9223372036854775807, 9223372036854775807));
                arr_17 [6] [i_6] = (arr_14 [i_5 - 1] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_14 = ((!(arr_13 [i_8] [4])));

                            for (int i_9 = 1; i_9 < 20;i_9 += 1)
                            {
                                var_15 -= (max((((9223372036854775807 ^ 9223372036854775807) ? (arr_12 [i_6 + 2]) : 9223372036854775807)), (arr_21 [i_9] [i_5] [i_7 + 1] [i_6 - 1] [i_5] [i_6 - 1])));
                                var_16 = ((-(((arr_22 [i_5] [i_7] [i_7] [i_9 - 1] [i_9 - 1] [i_9]) ^ -9223372036854775805))));
                            }
                            for (int i_10 = 0; i_10 < 21;i_10 += 1)
                            {
                                var_17 = (min(var_17, (!var_5)));
                                arr_28 [i_7] [i_7] [14] [i_10] = (((arr_21 [i_5 + 3] [i_7] [i_6 + 1] [6] [i_6 - 2] [6]) ? (min(((min((-9223372036854775807 - 1), var_2))), (((arr_27 [i_5] [i_6 - 1] [i_5] [i_7] [i_10]) - (arr_23 [1] [i_6] [i_7] [i_6] [1]))))) : ((((arr_14 [i_7 - 1] [i_7]) ? 9223372036854775807 : ((((arr_21 [i_5] [i_7] [2] [i_8] [18] [i_10]) ? var_5 : (arr_14 [i_7] [i_8])))))))));
                            }
                            arr_29 [i_5] [i_5] [i_7] [i_7] = (arr_19 [i_7] [i_6] [i_7] [i_8]);
                        }
                    }
                }
                var_18 -= (max((!9223372036854775805), (((arr_16 [i_5] [i_5 + 2]) + (arr_21 [18] [i_5] [12] [i_5 + 4] [i_6 - 2] [i_6 + 1])))));
            }
        }
    }
    var_19 = (max(var_19, ((min(var_7, (((var_9 ? var_6 : var_6))))))));
    var_20 = (((min((!var_2), (!9223372036854775807))) ? var_4 : var_4));
    #pragma endscop
}
