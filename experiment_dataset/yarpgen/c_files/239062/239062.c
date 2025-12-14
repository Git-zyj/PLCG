/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = 2791419974;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 = ((1503547297 == (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] = arr_3 [i_0] [i_0];
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 = (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0]);
                        arr_11 [i_0] [i_1] [i_0] = (arr_10 [i_0] [i_0]);
                        arr_12 [i_0] [i_2 + 1] [i_0] = ((2791420017 ? var_5 : (arr_7 [i_0 - 1] [i_2 + 1])));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((((519149465 ? 24 : 33823)) / (arr_8 [i_0] [i_1] [i_0 + 2] [i_2 - 3])));
                    }
                }
            }
        }
        var_14 = (((var_0 & -1704421619) ? (~28174) : (arr_8 [i_0] [i_0 + 3] [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {
                    arr_18 [i_0] [i_4] [i_0] [i_4] = ((2692117931 == ((((!(arr_17 [i_0] [i_0 - 1])))))));
                    arr_19 [i_0] [1] = (arr_0 [i_4] [i_5 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
