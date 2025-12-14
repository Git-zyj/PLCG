/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((var_8 / 162) / var_1)) / var_9)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, (((var_1 != (((((arr_0 [i_0]) != var_7)))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = ((1277242293 ? -1 : 0));
                    var_13 -= 63937;
                    var_14 = (arr_7 [i_0 + 1] [i_1]);
                    arr_10 [i_2] = (((var_9 ? (arr_9 [i_0] [10] [i_1] [10]) : 1793570411756759514)));
                    arr_11 [i_0] [i_1 + 4] [i_1] [i_1] = (((((arr_6 [i_0] [i_0] [i_0] [i_0 - 1]) ? var_3 : 10301910112411157496)) != (arr_5 [i_0 + 1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_15 = ((!(arr_8 [i_3] [8])));
        var_16 = (((arr_3 [18]) != ((~(-9223372036854775807 - 1)))));
    }
    #pragma endscop
}
