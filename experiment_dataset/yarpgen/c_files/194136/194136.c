/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 = (((((12318 ? 16272377908196093720 : var_1))) ? (-66 - var_0) : (211 + -1)));
        arr_2 [i_0] = (~var_5);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (!var_3);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_12 = var_1;
            var_13 = -1;
            var_14 ^= ((!(((53 ? -8685865672004443758 : var_9)))));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_16 [14] [8] [i_2] [8] = (-9223372036854775807 - 1);

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_15 = ((var_5 ? (arr_11 [i_3 + 2] [i_3 - 4] [i_5 + 2]) : -66));
                            var_16 = ((var_1 ? -2543 : (!var_6)));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_1] [i_1] = var_1;
            var_17 = ((!(((65 ? var_5 : var_9)))));
            arr_26 [15] [10] [i_1] = ((arr_23 [i_1] [i_6]) ? (!677464370) : var_6);
            var_18 = var_9;
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_31 [i_7] [i_1] [i_7] = ((((0 ? var_6 : (arr_11 [i_1] [i_7] [i_1])))) ? 53 : (arr_7 [i_1] [18] [i_1]));

            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                arr_35 [10] [i_7] [14] = (((~3) % var_5));
                var_19 = (((~247) ? ((((!(arr_11 [i_8] [i_7] [i_1]))))) : var_7));
                arr_36 [i_1] [i_1] [i_7] [i_1] = ((-((8 ? 1 : 9059867930986267918))));
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
