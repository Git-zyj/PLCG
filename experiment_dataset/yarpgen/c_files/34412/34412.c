/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [1] = (arr_1 [i_0 - 1] [i_0]);
        var_15 = (min(var_15, var_5));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1 - 2] [i_1] = ((var_14 * (arr_4 [i_1 - 1])));
        var_16 = (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1 - 1] [i_1])));
        arr_6 [i_1] = -var_5;
        arr_7 [i_1] = (((arr_3 [i_1] [i_1]) && -12648));
    }

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = (min(var_13, -24));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {
                        var_17 = (min(var_17, ((((((((((arr_3 [i_2 + 1] [i_4]) - var_0))) ? (arr_14 [i_2] [i_4] [i_2] [4]) : ((var_1 + (arr_19 [i_2] [i_2] [1])))))) ? (((var_14 + (arr_12 [i_2 + 1] [13] [13])))) : (min(var_4, ((var_12 ? var_5 : 18)))))))));
                        arr_20 [i_2] [i_2] [1] = (arr_14 [i_2] [i_2] [i_2] [i_2]);
                    }
                }
            }
        }
        arr_21 [i_2] [i_2] = ((1 * (((max(45, 24)) << (min(24, 16))))));
        var_18 = (arr_16 [i_2]);
    }
    var_19 = (!-199809240);
    #pragma endscop
}
