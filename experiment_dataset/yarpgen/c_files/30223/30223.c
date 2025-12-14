/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (((var_10 ? ((-(arr_1 [i_0]))) : (arr_0 [i_0]))))));
        var_17 = (arr_1 [9]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_18 = var_9;
        var_19 &= (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_20 = (arr_2 [i_2]);
        var_21 = (max(var_21, (arr_4 [i_2])));
        var_22 = ((var_9 ? var_10 : var_14));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] = ((!(arr_5 [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_3] [i_4] [i_4] [i_2] [i_2] = (arr_5 [i_2]);
                                arr_20 [i_2] [6] = ((~(arr_1 [i_4])));
                                arr_21 [i_2] [i_3] [i_4] [i_4] [i_5 + 1] [i_5] [i_2] = 94;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
