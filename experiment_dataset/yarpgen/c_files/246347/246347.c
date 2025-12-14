/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((0 ? -122 : -1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((~((-113 ? -113 : 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = var_0;
                    var_13 = (((arr_3 [i_0] [i_0]) ? (arr_0 [i_0]) : -113));
                    arr_8 [i_0] [i_1] [i_0] = (arr_4 [i_0] [i_1] [i_2]);
                }
            }
        }
        arr_9 [i_0] [i_0] = (!var_3);
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        arr_12 [i_3] = (min(113, ((-114 ? 0 : 1))));
        var_14 = (((((~(((arr_11 [i_3]) ? 113 : (arr_1 [i_3])))))) ? (!113) : (~0)));
        var_15 = (max((~54), ((((((arr_1 [i_3]) ? (arr_2 [i_3] [i_3 - 1]) : (arr_3 [i_3] [i_3])))) ? ((min(var_7, 113))) : (~var_2)))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_3] = ((-((15 ? (arr_5 [i_4]) : var_2))));
            var_16 = var_8;
            var_17 = (!1);
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 = ((((max(1, 110))) ? (((min(1, 110)))) : 0));
        var_19 = (min(((~(((arr_14 [i_5]) ? (arr_6 [i_5] [i_5] [i_5]) : var_1)))), ((min(1, 1)))));
    }
    #pragma endscop
}
