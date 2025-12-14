/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-3370977723427839359, 53767));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [8] [1] [i_2] = 11768;
                                arr_15 [i_4] [9] [i_2] [1] [i_0] = ((-(!var_7)));
                                var_13 = 11772;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_2] [i_2] [i_5] [i_6] = (max((var_9 >= 53750), 11774));
                                var_14 |= (11771 > 11768);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_15 = var_2;
                                arr_27 [i_8 - 1] [i_7] [i_2] [i_1 + 1] [i_0] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = 53758;
    var_17 = var_11;
    var_18 = 53758;
    #pragma endscop
}
