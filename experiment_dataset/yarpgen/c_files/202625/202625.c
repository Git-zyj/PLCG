/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? var_1 : (min(16185748242332973987, 2260995831376577639))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_3] [i_4] = ((!(arr_7 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0])));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = (min(((~(((arr_6 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) << (var_1 - 5438303129404644911))))), (((var_5 ? var_3 : (arr_12 [i_4] [i_3] [i_1] [i_0]))))));
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_1] [i_4] = var_2;
                            }
                        }
                    }
                    var_11 = 2260995831376577628;
                }
            }
        }
    }
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_22 [i_6] = ((~((((!(arr_21 [i_6] [i_5]))) ? var_9 : (((2260995831376577647 ? 1 : -55)))))));
                arr_23 [i_6] = 2260995831376577626;
            }
        }
    }
    #pragma endscop
}
