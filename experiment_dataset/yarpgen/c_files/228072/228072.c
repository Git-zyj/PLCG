/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = ((649280766767519390 << (255 - 252)));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (((arr_7 [i_3 - 1] [i_1 - 4] [i_2] [i_3 - 1]) ? (arr_7 [i_3 + 1] [i_1] [6] [i_3]) : (arr_7 [i_3 - 3] [i_1] [i_0 + 1] [i_0 + 1])));
                        arr_10 [1] [i_1] [i_1] = ((var_0 ? (arr_6 [i_0 - 1] [i_3 + 2] [i_1 - 4]) : (arr_6 [i_0 + 1] [i_3 + 2] [i_1 + 1])));
                        var_13 *= (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : var_11));
                    }
                }
            }
        }
    }
    var_14 = var_7;
    var_15 = var_11;
    #pragma endscop
}
