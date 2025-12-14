/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_9, (min((var_10 | var_3), ((var_7 << (var_2 - 3188251373)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = ((((30139 ? var_11 : var_0)) != ((((arr_2 [i_0] [1]) ? (arr_0 [8]) : var_9)))));
        var_17 = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = (((((var_7 >> (var_1 + 1486191193)))) ? ((var_9 ? var_10 : (arr_2 [i_1] [i_1]))) : 30139));
        arr_5 [8] = -var_13;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_19 += ((((((arr_2 [i_1] [i_2]) ? var_6 : var_14))) ? var_4 : var_1));
                        arr_16 [i_1] [i_2 - 1] [i_3 + 1] [i_3] = (arr_11 [i_1] [i_1] [i_1]);
                        arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] = ((var_13 && (((var_11 ? (arr_13 [i_1] [i_3 + 1] [i_3]) : var_6)))));
                    }
                }
            }
        }
        arr_18 [3] = (((arr_8 [i_1] [7] [i_1]) == (((arr_12 [i_1] [i_1] [i_1]) + var_1))));
        arr_19 [i_1] = (((arr_9 [i_1]) >= ((((var_5 == (arr_8 [i_1] [i_1] [i_1])))))));
    }
    #pragma endscop
}
