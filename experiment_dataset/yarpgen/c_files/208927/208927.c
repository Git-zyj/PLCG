/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = var_10;
                    var_13 ^= var_7;
                    arr_6 [i_2] [i_2] [i_2] [i_2] = var_11;
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [10] = ((var_1 ? ((var_1 ? var_7 : var_3)) : var_7));
                                var_14 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 ^= (!var_11);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                arr_20 [i_6] = (-var_0 ? var_5 : var_2);
                arr_21 [i_6] [i_6] = ((-17676 ? -var_0 : var_11));
                arr_22 [i_6] = (((!var_9) ? var_2 : -var_11));
            }
        }
    }
    #pragma endscop
}
