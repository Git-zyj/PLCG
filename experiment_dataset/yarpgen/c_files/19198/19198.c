/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max(((var_2 ? ((65243 ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : var_1)) : (((var_2 ? (arr_6 [i_0] [i_1] [i_2]) : (arr_3 [i_0] [i_1] [14])))))), (arr_1 [i_0])));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_1] [i_2] [0] = -40434;
                        var_13 = var_11;
                    }
                }
            }
        }
    }
    var_14 |= 214;
    var_15 -= var_11;
    #pragma endscop
}
