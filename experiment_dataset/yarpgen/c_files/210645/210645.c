/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_6, var_0);
    var_17 ^= 242;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [i_0] = (!var_13);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = arr_8 [i_0] [i_1] [i_2];
                    var_19 = (((arr_8 [i_0] [i_1] [i_0]) == (!0)));
                    arr_10 [i_0] [i_1] [i_0] = 16;
                    arr_11 [7] [i_1] [i_2] = 0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_20 = var_2;
        arr_16 [i_3] [i_3] = arr_13 [i_3];
        var_21 ^= arr_13 [i_3];
    }
    #pragma endscop
}
