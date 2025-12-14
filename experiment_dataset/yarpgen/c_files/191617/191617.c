/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = 182;
                var_14 = (min(var_14, var_0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] = (((((~(~var_13)))) ? (((~var_10) ? ((var_3 ? var_9 : var_9)) : ((var_13 ? var_4 : var_7)))) : (min(-var_0, ((var_3 ? var_10 : var_12))))));
                var_15 = (min(((min(-80, 70))), (((!var_2) ? ((var_9 ? var_6 : var_6)) : var_10))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_23 [i_2] [i_3] [10] [i_5] &= var_8;
                            arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] = (--var_0);
                        }
                    }
                }
                var_16 = (min(var_16, ((max((((!(!var_3)))), (max(var_2, var_2)))))));
            }
        }
    }
    #pragma endscop
}
