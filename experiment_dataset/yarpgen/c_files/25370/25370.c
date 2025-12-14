/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_12 = (-18713 / var_3);
                        var_13 = (var_0 ? (arr_5 [i_1]) : (var_7 * var_8));
                    }
                }
            }
        }
        var_14 = (((arr_14 [i_1] [i_1] [i_1] [i_1]) ? 1090301736 : var_0));
        var_15 = (arr_8 [i_1] [i_1] [i_1]);
        var_16 = (~var_5);
    }
    var_17 = (((~var_1) & (((((var_0 ? var_2 : var_7)) <= var_0)))));
    #pragma endscop
}
