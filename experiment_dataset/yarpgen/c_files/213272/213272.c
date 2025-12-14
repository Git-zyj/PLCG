/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_4 + 3] [i_3] [i_3] [i_0] = -113;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(((arr_0 [i_0 - 1]) ? 6 : var_1)));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [4] = (arr_6 [i_0] [1] [i_1 - 2] [2]);
            }
        }
    }
    var_19 = (((((min(-32766, var_10)))) ? var_14 : var_16));
    #pragma endscop
}
