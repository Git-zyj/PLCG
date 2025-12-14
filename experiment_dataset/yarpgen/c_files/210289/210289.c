/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((arr_0 [i_0]) ^ 1230402851)));
        arr_3 [i_0] [i_0] = (((var_10 / (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = min((((((-(arr_5 [i_1] [i_1])))) ? ((-(arr_4 [i_1] [i_1]))) : -0)), (((min((arr_4 [i_1] [i_1]), 1)) << (0 * 4090529758))));
        arr_8 [i_1] = (max(((max((((arr_4 [3] [i_1]) ? var_8 : (arr_1 [i_1]))), (min(-878495096, 112))))), (~4090529787)));
        var_11 += (arr_4 [i_1] [11]);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = (((arr_0 [17]) - (((-(arr_10 [i_2] [i_2]))))));
                arr_14 [i_2] = (4090529758 == 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_21 [i_5] [i_4] [1] = (arr_17 [14] [i_5] [19]);
                var_12 -= (((((!878495113) ? ((var_9 ? (arr_18 [i_4]) : 3295480202)) : (-878495096 || 139))) >= (((arr_19 [18] [i_5]) + (((var_3 ? var_1 : (arr_16 [i_4]))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_26 [i_5] [i_4] [i_4] = (((max(((14 ? 204437537 : 9711617668466680707)), ((((arr_25 [i_6] [10] [i_4]) ? 24826 : (arr_15 [i_4]))))))) ? var_2 : -4722155389311401138);
                            var_13 = (max(var_13, (((max((arr_18 [i_4]), (arr_18 [i_4])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_36 [i_4] [i_5] [i_8] [i_8] [5] [i_10] = ((arr_24 [i_9] [21] [17] [i_4]) || var_9);
                                var_14 = ((-(max((arr_31 [16] [i_8] [i_9] [i_10]), 1626225558583700838))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
