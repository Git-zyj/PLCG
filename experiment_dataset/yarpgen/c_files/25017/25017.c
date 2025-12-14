/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 110;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((var_6 ? ((var_7 ? var_9 : (arr_0 [i_0]))) : 0));
        arr_3 [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, ((((arr_10 [i_0 - 2] [i_3 - 1]) ? 3221225472 : var_3)))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = 0;
                    }
                }
            }
        }
        arr_13 [i_0] = ((((1073741836 ^ (arr_8 [i_0] [i_0])))) != (arr_1 [i_0]));
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_13 |= ((3221225472 ? 9057404480280675933 : 90));

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_14 = (min(var_14, ((max(var_8, var_0)))));
            arr_19 [i_4] = (((!((max(1073741819, 1))))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            arr_24 [i_4] = -117;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_31 [i_4] [i_6] [i_6] [i_6] = (((arr_5 [i_6 - 2] [i_6 - 2] [i_4 - 2]) ? (arr_8 [i_6 + 1] [i_4 + 1]) : (arr_5 [i_6 - 2] [i_6 - 2] [i_4 + 1])));
                        arr_32 [i_4] [i_6] [i_8] [i_6] = var_1;
                        var_15 = (((arr_5 [i_4] [i_4 - 1] [i_6 - 2]) && (arr_8 [i_4 - 1] [i_6 - 3])));
                        var_16 = var_6;
                        arr_33 [i_4] [i_6] [i_6] [i_4] [i_8] = (arr_22 [i_6 - 2]);
                    }
                }
            }
            arr_34 [i_4] [i_4] [i_4] = (((arr_1 [i_4]) - 1));

            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                var_17 = (((arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                arr_37 [i_4] [i_4] [i_9] = (arr_11 [i_9 - 1] [i_4 - 2] [i_4] [i_4] [i_4] [i_4]);
            }
        }
    }
    var_18 = 255;
    #pragma endscop
}
