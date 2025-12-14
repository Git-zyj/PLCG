/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (1 | (arr_3 [10]));
                                arr_15 [i_4] [i_2] [i_2] [i_2] [i_0] |= (((((((((arr_3 [i_3]) ? var_0 : var_9))) ? (arr_3 [1]) : (((arr_4 [i_2 - 2] [i_3]) ? 43912 : 1))))) ? (((((0 ? 21624 : var_1))) ? (((arr_2 [23] [i_3]) ? (arr_0 [i_2]) : 18833)) : (arr_5 [i_1]))) : ((min(((-4627 ? 112 : 0)), ((max(0, -43))))))));
                            }
                        }
                    }
                }
                var_20 -= ((!(((~(max((arr_9 [i_0] [i_1] [i_1]), (arr_5 [i_0 - 2]))))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] = ((-29292 ? var_14 : 549755748352));
                            arr_22 [i_6] [i_6] [i_1] [i_0] [i_0] = 4626;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            {
                var_21 = var_16;
                var_22 += ((var_18 ? (arr_3 [i_7]) : 3699035586));
            }
        }
    }
    #pragma endscop
}
