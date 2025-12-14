/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_2] [i_2] [i_3 - 2] [i_4] = (min(1, (0 >= 0)));
                                arr_13 [3] [3] [i_2] [3] [0] = ((1 ? 1 : 1));
                            }
                        }
                    }
                    arr_14 [3] [8] [i_2] = ((~(arr_8 [i_0] [i_1] [8] [i_2] [9] [1])));
                    arr_15 [i_1] [i_1] [i_1] = ((!(arr_10 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [1] [i_1] [i_2] [i_5 - 4] [i_5 + 2] [i_6] = (!739698875);
                                arr_22 [i_2] [1] [i_2] [i_5] [i_6] [7] = (var_14 ? (((max(0, var_7)))) : ((var_2 ? (~0) : ((var_9 ? 562229779 : var_13)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_31 [i_7 + 2] [i_7] [i_8 + 2] = ((((max((max(1, var_12)), (((1 && (arr_23 [3]))))))) ? -240141345 : -var_13));
                    arr_32 [i_7 - 3] [i_7] [i_7] [i_9] = (max(0, -6328949876602356646));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                {
                    arr_40 [15] [i_10] [i_10] [i_10] = ((-(((var_3 || (arr_39 [i_10] [i_11] [14] [i_12]))))));
                    arr_41 [i_10] [i_11] [i_11] [i_12] = (arr_37 [i_10] [i_11] [i_12]);
                }
            }
        }
    }
    #pragma endscop
}
