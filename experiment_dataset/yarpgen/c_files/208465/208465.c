/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_2] [i_3 - 2] [i_4 - 3]);
                            var_20 = (((((arr_7 [10] [i_1] [i_2 + 1] [i_3 + 1] [i_4 + 2]) ? (arr_7 [i_0] [i_1 - 1] [i_2] [i_2] [8]) : (arr_7 [i_1 + 1] [i_3] [i_2 - 1] [i_1 + 1] [i_0]))) & (min((arr_7 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]), (arr_7 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])))));
                            var_21 = (min(var_21, (((+(min((arr_8 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_3 + 1]), (arr_8 [i_1 + 1] [i_2] [i_2 + 1] [i_3 + 1]))))))));
                            arr_13 [i_4] [i_3] [i_2] [i_0] [i_0] = (min((arr_8 [i_4] [i_3 - 2] [i_1] [i_0]), 4114747496));
                            var_22 = (((min(-4865580246753180752, (arr_7 [i_1 - 1] [i_3 - 2] [i_4 - 3] [i_3 - 2] [1]))) / (arr_7 [i_1 + 2] [i_3 - 2] [i_4 - 1] [11] [5])));
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] [i_2 + 1] = (((((arr_0 [i_0]) == (arr_6 [i_1 - 1] [i_1] [i_2 + 1] [i_2]))) ? var_14 : (min((arr_5 [i_0]), ((~(arr_0 [1])))))));
                var_23 = (max(var_23, (arr_1 [i_2])));
            }
            arr_15 [i_0] [i_0] [i_1 - 1] = 77;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [1] [i_7] [i_7] [i_7] = var_13;
                            var_24 = (arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 1]);
                            var_25 = (((((min(1126474461, (arr_1 [i_5]))))) ? (arr_9 [i_0] [i_5] [i_5] [i_7]) : (((0 % (arr_6 [i_7] [i_7] [i_5] [i_7 - 1]))))));
                            arr_24 [i_0] [i_0] [i_5] [i_7] = (min((arr_11 [i_1 + 2]), ((min(var_7, 4114747498)))));
                            var_26 = (min(var_26, 25462));
                        }
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            var_27 = ((13973171230944210219 ? ((2139750873 ? 180219802 : ((251 ? var_2 : 0)))) : 1716855807));
            arr_29 [i_8] [11] [i_0] = (((arr_16 [i_8] [i_8 + 2]) ? ((((arr_16 [i_8] [i_8 + 4]) ^ 212))) : (((arr_16 [i_8] [i_8 + 2]) | 18446744073709551602))));
            arr_30 [i_0] [5] = var_12;
            var_28 = (((((min(var_5, var_4))))) ? ((((min(var_10, (arr_1 [i_0])))) ? (min(13186361945812277568, -25463)) : 2795681924593487457)) : ((((18446744073709551592 && (((arr_10 [i_8] [i_8] [0] [i_0] [i_0]) != (arr_5 [i_0]))))))));
        }
        arr_31 [i_0] = (min(((((arr_11 [i_0]) != (min((arr_10 [i_0] [10] [i_0] [i_0] [i_0]), 7927244170072487034))))), (min(((var_2 ? var_13 : (arr_7 [i_0] [i_0] [2] [i_0] [2]))), (arr_19 [i_0])))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = (arr_16 [i_9] [i_9]);
        arr_35 [i_9] = -8;
    }
    var_29 = var_14;
    #pragma endscop
}
