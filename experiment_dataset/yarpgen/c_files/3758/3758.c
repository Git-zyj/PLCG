/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = (max(var_11, (((~(arr_1 [6]))))));
        var_12 = (~var_2);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((~(arr_3 [i_1 - 1]))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_13 += (arr_8 [14] [i_2]);
            var_14 = (((arr_4 [i_1 + 3]) >= (arr_4 [i_1 + 4])));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_15 = (((arr_7 [i_1 + 4]) != (arr_7 [i_1 + 1])));

                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    arr_15 [i_1] [i_1 + 3] [i_1] [i_3] [i_3] [i_4] = 57344;
                    arr_16 [i_1 + 2] [i_2] [i_1] [i_4 + 1] [i_4 + 1] [i_2] = (arr_10 [i_1 + 1] [i_1 + 2] [i_1]);
                    var_16 *= arr_4 [3];
                    var_17 = ((~(arr_11 [i_1] [i_2] [i_3] [i_4 + 1])));
                }
                arr_17 [i_1] = (arr_13 [i_1] [16] [i_1]);
                var_18 = (arr_3 [i_3]);
                var_19 = (arr_13 [i_3] [i_3] [i_1]);
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_20 = (max(var_20, var_6));
                            var_21 = (min(var_21, (((~(arr_22 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 1] [1]))))));
                            arr_28 [i_1] [i_1] [i_5] [i_6] [8] = var_1;
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_22 = var_5;
            arr_31 [i_1] = (arr_27 [1] [i_8] [i_1] [i_8] [i_8]);
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_36 [i_9 + 2] = (arr_13 [i_9 + 1] [i_9 + 1] [12]);
        arr_37 [i_9] = (~var_2);
        arr_38 [4] [4] = ((~(~var_9)));
    }
    var_23 = (~(min(22, (~22))));
    var_24 = (~var_7);
    #pragma endscop
}
