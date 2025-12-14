/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (var_0 ? var_7 : var_2);
    var_12 = (min(var_12, var_8));
    var_13 = 606272390;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (max(var_14, var_7));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_4] = (!0);
                                arr_17 [i_4] = ((min(var_6, var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
