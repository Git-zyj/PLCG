/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (!-413714424);
                        var_20 = (max(var_20, (((var_7 <= 108) ? ((-3705 ? var_1 : var_2)) : 155))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_13 [11] [11] [i_2] [11] [i_0] = (max(-1362932863, -1362932855));
                        var_21 ^= (-((max((arr_4 [7] [i_2] [i_4]), 1362932863))));
                        arr_14 [i_1] [i_1] [i_1] [i_0] [i_1] [11] = 178;
                    }
                    var_22 *= -413714440;
                }
            }
        }
    }
    #pragma endscop
}
