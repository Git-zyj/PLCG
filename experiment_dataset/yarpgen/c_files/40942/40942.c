/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [1] [i_2] [1] [1] [i_0] [i_0] = (min(((((((var_11 ? var_8 : (arr_9 [12] [i_3])))) < (max((arr_2 [13]), 0))))), (((!0) ? var_6 : (((arr_4 [13]) * var_0))))));
                            var_12 += var_10;
                        }
                    }
                }
                var_13 = (max(var_13, (((((var_2 && (arr_9 [i_0] [i_1]))) ? (arr_3 [i_1]) : var_5)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_14 = (max(var_14, (((((min((min(var_8, 1)), (arr_8 [i_4] [i_4 + 1] [i_4 + 1] [i_4])))) || ((((arr_3 [i_4 - 1]) * (((0 ? 0 : 1)))))))))));
                var_15 = (1 ? 18205 : 1);
            }
        }
    }
    #pragma endscop
}
