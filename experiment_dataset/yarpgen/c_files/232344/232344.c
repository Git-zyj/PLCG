/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_1] [i_2] = (((arr_0 [i_1]) != var_3));
                        arr_12 [i_1] [i_1] = ((((max(44578, (arr_10 [i_0] [i_1] [i_3])))) | var_8));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_11 = 8191;
                            arr_15 [i_0] [i_1] = arr_8 [i_1] [i_1] [i_3] [i_4];
                            var_12 = (((arr_13 [i_0] [i_1] [i_2 + 2]) | ((var_1 ? var_0 : (arr_13 [i_0] [i_1] [i_2 - 1])))));
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_13 = var_0;
                            arr_18 [3] [i_3] [i_1] [i_3] [i_3] = ((~((var_1 + (arr_9 [i_5 + 1] [i_1] [i_1])))));
                            arr_19 [i_0] [i_1] [i_2 + 4] [i_3] [i_5] [i_5 - 1] = var_7;
                        }
                        var_14 = arr_14 [i_2 - 1];
                    }
                }
            }
        }
        var_15 = (((min(var_3, var_8))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_23 [i_6] = 58919;
        var_16 = arr_3 [i_6] [i_6];
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            {
                arr_30 [i_7] [6] [i_7] = (min((arr_17 [i_7] [i_7] [6] [10] [20] [i_7] [i_8]), ((~(arr_4 [i_7 - 1] [i_8] [14])))));
                var_17 = (((((65531 ? 44584 : (arr_27 [i_8 + 1])))) ? (arr_16 [16]) : (((arr_2 [i_7]) ? (arr_17 [i_8 - 1] [8] [0] [i_7] [0] [i_7] [i_7]) : 0))));
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
