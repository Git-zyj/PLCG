/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [9] = ((-(max(var_7, (arr_4 [i_1 + 1] [i_0 + 1] [i_0 + 2])))));
                    var_11 = (max((((!((var_6 && (arr_2 [i_1 + 1])))))), (arr_3 [i_2] [i_1 + 1] [i_0])));
                    arr_9 [i_0] [i_1] [i_2] = ((-(~var_9)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_12 = (min(var_12, (arr_11 [i_3])));
        arr_12 [i_3] = ((-var_5 / ((~(~120)))));
        var_13 = (1162310904 - var_9);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_14 = var_1;
        var_15 ^= (var_3 ? (((arr_1 [i_4 + 2]) ? (arr_4 [i_4] [i_4] [i_4 + 2]) : (arr_0 [i_4 + 2] [1]))) : 190);
        var_16 = 791208499;
        arr_15 [i_4] = (arr_2 [1]);
    }
    #pragma endscop
}
