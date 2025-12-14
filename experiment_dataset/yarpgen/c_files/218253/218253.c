/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0] [i_2] [i_1] [i_1] [i_0] = var_2;
                                var_15 -= ((((((2561013597 ? 33 : (arr_10 [i_0] [8] [i_2] [i_3]))) != var_3)) ? (-11982 > 1) : var_2));
                                var_16 = (max(var_16, (((arr_11 [i_0] [i_2 + 1] [i_0] [i_3] [14]) - (arr_11 [i_0] [i_2 - 2] [i_2] [i_2 - 2] [i_0])))));
                            }
                        }
                    }
                }
                var_17 |= arr_9 [i_0] [i_0] [i_1] [i_1] [i_1];
            }
        }
    }
    var_18 = -var_8;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_22 [i_5 + 1] [i_6] [i_6] = (((((((var_11 >> var_11) != ((((arr_20 [i_5 - 1]) || var_6))))))) + var_5));
                var_19 = 33;
                var_20 *= var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            {
                arr_29 [i_7] [i_7] = var_3;
                var_21 = (arr_20 [i_8]);
            }
        }
    }
    #pragma endscop
}
