/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(max((((arr_1 [i_0] [i_0]) | var_10)), (arr_0 [i_0] [i_0])))));
        var_14 = 3627220739;
        var_15 = (3627220739 ? 1152921504472629248 : 0);
        var_16 = (min(var_16, (arr_0 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_17 = 0;
                    arr_11 [14] [i_2] [i_3] |= ((1 & (((0 == (arr_9 [i_1] [i_2] [i_3]))))));
                    var_18 = (min(var_18, (arr_9 [i_2 - 1] [i_2] [i_3 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
