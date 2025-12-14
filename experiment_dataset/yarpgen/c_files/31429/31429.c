/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = var_6;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 + 2] = ((var_9 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 2])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = (((((arr_4 [i_0] [i_0] [i_1]) ? (arr_1 [i_0]) : var_6)) | (arr_5 [i_0 - 1])));
            var_14 = (((arr_0 [i_0 - 1]) ? (arr_6 [i_1] [i_0]) : ((((!(arr_5 [i_0])))))));
            var_15 = (arr_6 [i_1] [i_1]);
            arr_7 [i_1] = (((arr_5 [i_0 - 2]) ? (arr_5 [i_0 + 3]) : (arr_5 [i_0 - 1])));
            arr_8 [i_1] [3] = (((arr_2 [i_0] [i_1]) != (arr_2 [i_1] [i_1])));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 = (min(var_16, ((((arr_5 [i_0 + 3]) && (arr_9 [i_0 + 4] [i_0 - 1]))))));
            var_17 = (max(var_17, ((((~17586955510683738686) != (((28497 >> (((arr_6 [i_0 + 2] [7]) - 1029699113))))))))));
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = ((-(((arr_12 [i_0 - 2] [i_0]) ? var_10 : -1))));
            var_18 = (((arr_0 [i_0 + 3]) ? 1 : (arr_12 [i_0] [i_3])));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_19 = (~var_9);
            var_20 = (((((arr_9 [i_0] [i_0 - 2]) + 2147483647)) << (((-8140200874190942378 + 8140200874190942382) - 4))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_0] [i_0] [1] [i_0] [i_6] = ((arr_18 [i_5 - 1] [1] [i_5] [i_5]) ? (arr_21 [i_5 + 2] [i_5] [i_5] [i_5]) : (arr_4 [i_5 + 1] [i_5] [i_5]));
                        var_21 = (max(var_21, ((((arr_6 [i_0 - 1] [i_5 - 1]) << 1)))));
                        arr_23 [i_0] [i_4] = 0;
                        var_22 = (arr_11 [i_6]);
                        arr_24 [i_0] [i_4] [i_0] [i_6] = ((!(arr_2 [i_5 + 1] [i_0 + 1])));
                    }
                }
            }
            var_23 = ((-(((arr_10 [i_0] [i_4] [i_0]) ? 31593 : var_0))));
        }
    }
    #pragma endscop
}
