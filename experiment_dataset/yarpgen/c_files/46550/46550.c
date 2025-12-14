/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((min((arr_2 [i_0] [11]), var_14)));
        var_18 = (arr_0 [i_0] [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, (((arr_11 [i_3 - 4] [i_3 - 2] [i_4 + 1]) ? (arr_15 [i_3 - 4] [i_3 - 2] [i_4 + 1] [i_3 - 2]) : (arr_15 [i_3 - 4] [i_3 - 2] [i_4 + 1] [i_4 + 1])))));
                        var_20 = (max(var_20, (arr_14 [i_3] [i_2] [i_3])));
                        var_21 -= (((arr_15 [i_3 - 2] [i_4 + 1] [i_3 - 2] [i_2]) ? (arr_15 [i_4 - 1] [i_4 - 2] [i_3 - 3] [i_1]) : (arr_15 [i_4 + 1] [i_4 - 2] [i_3 - 2] [i_1])));
                        var_22 = (min(var_22, var_5));
                        var_23 += (arr_1 [i_2]);
                    }
                }
            }
        }
        var_24 = (((!var_13) ? (((1 ? (arr_5 [i_1]) : (arr_2 [i_1] [4])))) : (arr_11 [8] [8] [i_1])));
        var_25 = (~var_10);
    }
    #pragma endscop
}
