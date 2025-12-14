/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 = ((((var_11 >= (arr_8 [i_3 + 2] [i_1] [i_2 + 2] [i_1]))) ? 184998540 : (((arr_10 [i_0] [i_3 - 1] [i_2 + 4] [i_0]) % var_3))));
                            var_13 = (max(var_13, ((((4172794232 >> (((arr_9 [i_0] [i_3 - 2] [i_0] [i_3 - 2] [i_2 + 1]) - 1260170673))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] [i_5] [i_4] [i_1] [i_5] [12] = 1399859160;
                            arr_17 [i_5] = ((1046273203 >> (((min(var_11, 1740454740326361542)) - 1740454740326361518))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_14 |= -10625817430633138488;
                            var_15 = ((((((max(255, 43789))) ? var_11 : var_1)) >= var_8));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_35 [i_8] [i_8] [i_9 - 1] [i_10] [12] = (((arr_32 [i_8] [i_9] [i_9 - 1] [i_11]) && (((arr_32 [i_8] [i_8] [i_10] [i_11 - 2]) > (arr_32 [i_8] [i_9] [i_10] [3])))));
                            arr_36 [i_8] [1] [i_10] = var_8;
                            var_16 = (min(var_5, (max(((((arr_27 [i_11] [i_9]) * var_4))), ((3 ? var_7 : 1))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_44 [i_8] [i_8] [i_12] = var_6;
                                var_17 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
