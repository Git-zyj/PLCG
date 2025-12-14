/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(16744448, (max((((var_11 ? var_10 : var_18))), var_11))));
    var_20 *= ((min((2147483647 || var_8), ((var_1 ? -122 : var_5)))) >= var_10);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 = (-4609 >= 254);
        var_22 = ((!(((~(arr_0 [i_0]))))));
        var_23 |= (((arr_1 [i_0 + 2] [i_0]) ? (arr_2 [i_0 - 1] [i_0 + 2]) : (((arr_1 [i_0] [i_0]) << (((arr_1 [i_0 - 1] [i_0 + 1]) - 1152805246))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_24 = var_14;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [i_1] = 25908;
                        arr_16 [i_4] [8] [8] [i_1] |= ((-(arr_7 [8] [10] [0])));
                        var_25 = ((20590 >> (65535 < -7488598383961205815)));
                    }
                }
            }
        }
        arr_17 [i_1] = (((((878556807 | var_15) ? var_16 : (arr_14 [i_1 + 2] [i_1 + 1] [i_1] [10]))) / (((-((min((arr_11 [i_1 - 1] [i_1]), 73))))))));
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_26 *= (((arr_28 [i_5] [i_6] [i_5 - 1] [i_9 + 2] [i_9]) <= (arr_28 [5] [i_9] [i_5 + 2] [i_9 + 2] [3])));
                            arr_29 [i_9] [i_8] [i_5] [i_5] [i_6] [i_5] = ((!(((30726 ? (arr_10 [i_5] [2] [i_7]) : var_11)))));
                            var_27 = ((-(arr_23 [i_5] [i_6] [i_5 + 1] [i_8 + 1])));
                            arr_30 [9] [7] [i_5] [i_6] [i_5] = (arr_0 [i_6]);
                        }
                    }
                }
            }
            var_28 -= var_0;
        }
        arr_31 [i_5] = ((((((max(4239840831, -878556808))) ? ((((arr_7 [i_5] [i_5 + 2] [i_5]) <= (arr_8 [1])))) : ((min(142, 1)))))) * -2582145582);
        arr_32 [i_5] = var_18;
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            {
                var_29 = ((!(((~(min(113, 2157968083967381550)))))));
                var_30 = (~((~((var_12 ? (arr_33 [i_10]) : (arr_35 [0] [0]))))));
            }
        }
    }
    var_31 = 1367145782;
    #pragma endscop
}
