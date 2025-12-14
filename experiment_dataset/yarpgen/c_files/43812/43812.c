/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_6;
    var_12 = var_1;
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_0 + 1]);
                arr_7 [i_0] [i_0] [i_0 + 1] = ((!(((~((((arr_6 [i_0 + 1] [i_1 - 3]) || var_2))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_15 *= (arr_8 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] [i_2] = var_1;
                        var_16 |= (((arr_9 [i_5] [i_5]) ? (((((((arr_16 [i_2] [i_3] [i_4] [i_5]) ? (arr_17 [i_2] [i_3]) : (arr_17 [i_5] [i_5]))) >= ((var_2 * (arr_18 [i_2] [i_3] [i_4] [i_3]))))))) : var_8));
                    }
                }
            }
        }
        var_17 &= ((-((min(-1, -1)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = (arr_12 [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_18 = (max(var_18, (max((~var_2), var_0))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_19 ^= (!((((arr_18 [i_6] [i_8] [i_9] [i_7]) ? -var_2 : (!var_3)))));
                                arr_34 [i_10] [i_9] [i_9] [i_8] [i_7] [i_7] [i_6] = var_8;
                            }
                        }
                    }
                    var_20 = ((!((((arr_14 [i_7] [i_6]) / var_4)))));
                    var_21 = (min(var_21, (((((min(var_9, var_2))) ? (((((var_5 << (((arr_9 [i_7] [i_7]) - 32043))))) ? var_1 : (min(var_4, var_5)))) : var_2)))));
                }
            }
        }
        arr_35 [i_6] [i_6] = ((~((var_5 ? (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
        arr_36 [i_6] = ((-((-(arr_28 [i_6] [i_6] [i_6] [i_6])))));
        var_22 = (((arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? ((~(arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (max(var_10, (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
    }
    #pragma endscop
}
