/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((14 ? var_4 : 3231829686848741950));
                    var_18 = ((-(arr_5 [2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_19 = (((var_7 + var_9) == (arr_0 [i_3] [i_3])));
                arr_13 [i_3] = ((-(min((arr_1 [7] [i_4]), var_5))));
                var_20 = var_10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                arr_20 [i_6] [i_5] = (((arr_1 [i_6 - 2] [i_5]) == (!var_13)));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_21 = (((!var_8) * var_13));
                                var_22 |= 3300536334;
                                var_23 = var_9;
                                var_24 &= ((~(((arr_30 [i_5] [i_5]) + -4044646388560302441))));
                            }
                        }
                    }
                }
                var_25 = ((~(arr_5 [i_5])));
            }
        }
    }
    var_26 = var_14;
    #pragma endscop
}
