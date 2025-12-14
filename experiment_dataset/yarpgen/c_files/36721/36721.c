/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = ((var_17 ? -var_7 : -var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 = (arr_1 [i_0] [i_0]);
        var_23 = ((-32750 || (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (arr_2 [i_0] [i_2 - 4]);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((116 << (((arr_1 [i_1 + 1] [i_1]) - 94))));
                    arr_10 [i_0] [i_0] [i_2] = var_8;
                    var_24 = (arr_6 [i_0] [i_2 + 1] [4]);
                }
            }
        }
        arr_11 [i_0] = (arr_5 [i_0]);
    }
    #pragma endscop
}
