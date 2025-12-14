/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(min(var_7, var_11))));
        arr_4 [i_0] = max(89, (min(var_14, -42)));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] = var_17;
        arr_10 [i_1] = (var_10 >= var_19);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_18 [i_1] [i_2] [i_1] = (32767 >= 1818435905);
                        arr_19 [i_1 + 2] [i_1] [i_1] [i_1 + 2] = (3590043098843948905 >> 41);
                        arr_20 [i_1] [i_4] [i_3] [i_1] = (var_10 & 17970476805768186673);
                        arr_21 [i_1] [i_1] = (arr_15 [i_1] [i_1]);
                    }
                    arr_22 [i_1] = ((-(var_3 >= var_6)));
                }
            }
        }
        arr_23 [4] = (((arr_13 [0] [i_1] [0]) >= 49043));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_34 [i_5] [i_5] [i_7] [i_7] [i_5] [i_5] = (22 & 65523);
                        arr_35 [i_6] = var_19;
                        arr_36 [5] [i_5] [i_5] [i_5] = ((max(-92, var_13)));
                    }
                }
            }
        }
        arr_37 [16] = (min(0, (730567474 ^ 5372344576933958620)));
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        arr_42 [i_9] = (((arr_41 [i_9]) >= var_19));

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {
                        arr_49 [i_9 - 3] [i_10] [i_11] [i_11] = ((var_19 & (arr_26 [i_9 - 2])));
                        arr_50 [i_10] [i_12] [i_11] [i_9] = (!var_18);
                    }
                }
            }
            arr_51 [i_9 - 3] [i_9] [i_9] = var_12;
        }
    }
    #pragma endscop
}
