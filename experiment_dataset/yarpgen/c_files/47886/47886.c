/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [1] [1] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] = ((-(min(((var_10 ? var_1 : 52560)), 125))));
                                var_18 += (!9223372036854775798);
                            }
                        }
                    }
                    var_19 = (((-25004 ^ var_16) ? (((var_6 ? var_4 : var_6))) : (arr_5 [i_0] [i_1] [i_1] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_23 [i_6] = -24994;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_20 *= (!var_10);
                                arr_32 [i_6] [i_6] [i_9] [i_6] [5] [5] = var_0;
                            }
                        }
                    }
                }
                var_21 -= (max(0, -1279998857408139452));
                arr_33 [i_5] [i_6] = (((var_15 ? (arr_4 [i_5] [i_6] [i_6]) : var_13)));
            }
        }
    }
    #pragma endscop
}
