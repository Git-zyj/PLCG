/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 > (0 * var_8)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_12 = ((arr_4 [i_0] [14] [i_1]) ? (arr_4 [i_0] [i_0] [i_1]) : ((~(arr_4 [i_0] [i_0] [i_1]))));
            var_13 = (arr_4 [i_0] [i_1 - 1] [i_1]);
            var_14 = arr_3 [i_1 - 2] [i_1];
            arr_5 [i_0] = (~var_8);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [2] [i_2] [i_2] = ((1 ? 1 : -32756));
            arr_9 [i_0] = 1815606667;
            arr_10 [i_2] [i_0] [i_0] = (arr_4 [i_2] [i_2] [i_0]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [i_4] [i_4] = (~-1);
                        arr_16 [i_0] [i_2] [i_4] [i_2] [i_4] = var_2;
                    }
                }
            }
        }
        var_15 = ((((((min(-1, var_10))) ? var_1 : (min(var_6, var_9)))) >= ((min((arr_11 [i_0] [i_0] [10]), var_4)))));
        var_16 = 1;
    }
    var_17 = var_7;
    var_18 = ((~((-1 ? ((max(-1, 1))) : (!0)))));
    #pragma endscop
}
