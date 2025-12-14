/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_0 [i_0]), (min(57563, 2251799813685247))));
        var_20 += (arr_1 [2]);
        var_21 = (arr_0 [i_0]);
        arr_3 [i_0] = ((~(((min((arr_0 [i_0]), 0)) - 4294967295))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = -667812417679383404;
                    arr_10 [i_0] [4] [i_0] [i_2] = (min(7954, 1));
                    arr_11 [i_0] [i_0] = (arr_7 [i_0] [i_0] [9] [i_2]);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (((2515422373 >= (min(16384, 678955542)))));
                }
            }
        }
    }
    var_23 = (((((678955547 <= ((min(var_4, var_9)))))) / var_0));
    #pragma endscop
}
