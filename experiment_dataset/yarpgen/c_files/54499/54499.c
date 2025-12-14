/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0];
        var_20 = 13064431920882201314;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_4 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 = ((0 * (12 / 2147483647)));
                        arr_13 [i_0] [i_2] [i_1] [i_2] [3] = (arr_7 [i_3 + 2]);
                        var_22 = (arr_10 [i_2] [i_2] [i_3] [i_2] [i_2 + 1]);
                    }
                }
            }
            arr_14 [i_0] = 127;
            var_23 = ((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])));
        }
        arr_15 [i_0] = ((arr_9 [8]) ? 3342425165 : (arr_9 [2]));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_20 [i_4] = (((arr_18 [i_4]) >= (arr_0 [i_4] [i_4])));
        arr_21 [i_4] [i_4] = (~(arr_16 [i_4] [i_4]));
        arr_22 [i_4] = (((arr_16 [i_4] [i_4]) == (arr_16 [i_4] [i_4])));
    }
    #pragma endscop
}
