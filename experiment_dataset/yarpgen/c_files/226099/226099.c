/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_3] [i_3] [i_2] [i_1 - 1] [i_2] = (((((1 ? (min(var_5, var_2)) : (arr_6 [i_3] [i_0 - 2] [i_2] [i_3])))) ? (arr_10 [i_0 - 2] [i_1 + 1] [i_2] [i_3]) : 32762));
                                arr_13 [i_4] [i_1 - 1] [i_2] [i_0 + 4] [i_2] = -32753;
                                arr_14 [i_2] [i_3] [i_2] [i_1 + 3] [i_2] = (((min((arr_6 [i_0 + 2] [i_1 - 2] [i_2] [i_3]), (arr_4 [i_3] [i_1 - 2] [i_0 - 2])))) ? ((1 ? var_11 : 237)) : (arr_4 [i_4] [i_1 + 4] [i_0 - 1]));
                            }
                        }
                    }
                }
                arr_15 [i_0 - 2] [i_1 - 2] = (min(10, var_3));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] = (arr_11 [i_0 + 1] [i_0]);
                                arr_27 [i_0 - 2] [i_1 + 2] [i_5] [i_6 + 1] [i_7] [i_0] [i_5] = (((((min((arr_2 [i_0 + 4]), var_11)))) ? (arr_19 [i_0 - 1] [i_1] [i_5] [i_6] [i_7]) : ((+(max((-9223372036854775807 - 1), 9223372036854775796))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                {
                    var_13 = var_10;
                    var_14 = (-9223372036854775807 - 1);
                    var_15 = var_10;
                    arr_36 [i_8] [i_9] [i_10 + 1] = ((((63740 ? ((50025 ? var_2 : (arr_30 [i_8] [i_10]))) : (max(3, (arr_30 [i_8] [i_9])))))) ? ((~(((arr_29 [i_9]) ? 1 : var_5)))) : ((1 ? ((28 ? (arr_35 [i_10 - 2] [i_9] [i_10] [i_8]) : (arr_35 [i_8] [i_8] [i_8] [i_8]))) : (((arr_33 [i_10] [i_10] [i_9] [i_8]) ? 1 : var_4)))));
                    var_16 -= var_2;
                }
            }
        }
    }
    var_17 = var_3;
    var_18 = var_2;
    #pragma endscop
}
