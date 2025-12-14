/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0 - 1]) * (arr_0 [i_0] [i_0 - 1])));
        var_14 ^= (((((arr_1 [i_0]) ? var_12 : var_6)) < -var_13));
    }
    var_15 = (max(var_15, var_2));

    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_16 ^= (((((-(~var_2)))) ? -134217727 : (((arr_3 [i_1 + 1]) * (arr_3 [i_1 + 1])))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_14 [i_1 + 1] [i_2 - 2] [i_2] = ((-27664 ? 1948664252 : 104));
                    var_17 = (min(var_17, (min(-9264, 1))));
                    var_18 = (((((+(min((arr_11 [1] [i_2 - 1]), (arr_8 [7] [i_2])))))) && -9223372036854775807));
                }
            }
        }
    }
    #pragma endscop
}
