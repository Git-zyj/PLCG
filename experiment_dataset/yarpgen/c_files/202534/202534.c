/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (!var_1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = (((var_2 >> (-2021927914 + 2021927923))));
        var_12 *= ((var_0 ? (arr_0 [i_0 + 2] [i_0 + 2]) : 1));
        arr_2 [i_0] [i_0] = (arr_0 [i_0 + 2] [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 *= (~(arr_3 [i_0] [i_1]));
                    arr_8 [i_0] [i_0] [i_2] = (arr_7 [i_0] [i_1] [i_1] [i_2]);
                    var_14 = (((~var_3) * var_2));
                }
            }
        }
    }
    #pragma endscop
}
