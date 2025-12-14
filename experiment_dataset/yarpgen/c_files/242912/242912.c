/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = (arr_9 [i_0] [i_0] [i_1] [i_0 + 2]);
                        var_13 = (min(var_13, var_0));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((~(min(-37510, (arr_7 [1] [i_0 + 1] [i_0])))));
    }
    var_14 = (((~(~var_12))));
    var_15 = var_10;
    #pragma endscop
}
