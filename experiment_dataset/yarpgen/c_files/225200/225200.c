/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (var_4 / var_9))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = var_14;
                        var_19 = (((arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (arr_10 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1]) : (arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])));
                    }
                }
            }
        }
        var_20 = (arr_9 [i_0] [i_0] [7]);
        var_21 = (((arr_3 [i_0] [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_7 [i_0] [21] [i_0])));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_22 = ((-((117 ? (arr_8 [i_4] [i_4] [6]) : var_11))));
            var_23 = (min(var_23, (((-8529154808859430139 ? 2259083639943938459 : (((8532 ? 24576 : 1))))))));
        }
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            var_24 = (max(var_24, (arr_14 [i_5 + 1] [6])));
            var_25 = ((56998 | (arr_2 [i_5 - 1] [i_5])));
        }
    }
    var_26 = var_0;
    #pragma endscop
}
