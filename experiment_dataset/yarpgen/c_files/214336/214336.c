/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((35180077121536 ? var_6 : ((var_6 >> (((min(11434815749497048790, (-2147483647 - 1))) - 11434815749497048772)))))))));
    var_15 *= ((((min((max(var_11, var_0)), var_7))) ? ((min(-31, var_9))) : ((((var_1 ? var_2 : var_5)) - var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [15] [i_0] [i_3] = ((!(~var_12)));
                        arr_14 [i_0] [i_1] [i_2] = var_0;
                    }
                }
            }
        }
        var_16 = var_0;
        arr_15 [i_0] = -var_11;

        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            var_17 = ((-(arr_6 [i_4] [i_4] [i_4 - 1] [i_4 - 2])));
            var_18 = ((((((!(arr_2 [i_4]))))) & ((var_10 << (arr_12 [i_0])))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [i_0] = var_9;
                        arr_23 [i_0] [i_0] [i_0] [i_0] = var_2;
                    }
                }
            }
            arr_24 [i_0] = ((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < var_7)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_19 = (max(var_19, (arr_10 [i_0] [i_0] [i_0])));
                        var_20 = (arr_21 [i_0] [i_0] [i_7] [10] [10] [i_9]);
                        arr_32 [i_0] [i_8] [i_0] [i_0] = (((arr_26 [i_0] [i_8] [i_9]) * var_9));
                    }
                }
            }
            arr_33 [i_0] [i_7] [i_7] = var_12;
        }
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            var_21 = (arr_9 [i_10 + 1] [i_10] [i_10 - 2] [i_10 - 1] [18]);
            var_22 += ((!(arr_8 [i_10] [i_10 - 2] [i_10 - 2])));
        }
        var_23 = (max(var_23, (arr_6 [i_0] [i_0] [i_0] [i_0])));
    }
    var_24 = var_2;
    #pragma endscop
}
