/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 = var_10;
        arr_2 [i_0] = ((((((((arr_1 [i_0 - 1]) ? var_9 : var_4)) / (arr_0 [i_0 - 1])))) ? (((var_4 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 2])))) : ((((max(var_1, var_9))) ? 6925 : ((var_8 ? (-32767 - 1) : var_11))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0 - 1] [i_1] [i_0] = var_2;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = var_10;
                        var_17 = (max((max(7914027267676969256, 611582711)), ((((arr_3 [i_0 + 2]) & -6918)))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0 - 1] [i_4] = 7841656606153099731;
            arr_14 [i_0 + 2] [i_0 + 2] [i_0] = ((((var_1 ? (arr_8 [i_0] [i_4]) : (arr_11 [i_0] [i_4] [i_0]))) ^ ((-((-20814 ? 1 : -6954))))));

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                arr_18 [i_0 + 2] [i_4] [i_0] [i_5 + 1] = (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 1]);
                arr_19 [i_0] [i_4] [i_5 - 2] [i_5 - 2] = (arr_1 [i_0 - 1]);
                var_18 = (min(2861051282, 0));
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_19 = (arr_24 [i_7]);
                        arr_29 [i_0 - 1] [i_6 - 1] [i_7] [i_0] = (((arr_23 [i_0 + 2] [i_0 - 1] [i_6 + 1] [i_8 - 1]) ? var_11 : (arr_21 [i_0 + 2] [i_0 + 2] [i_0])));
                    }
                }
            }
            arr_30 [i_0] [i_6 + 1] = var_11;
            var_20 = (arr_10 [i_0 + 2] [i_6 + 1] [i_0] [i_6 + 1]);
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        arr_37 [i_6 - 1] [i_9 - 1] [i_0 + 2] [i_9 - 2] [i_0] = ((3872349533 ? 193 : (((arr_33 [i_10] [i_9 - 2] [i_6 + 1] [i_0 + 1]) ? var_14 : var_8))));
                        arr_38 [i_9] [i_6 + 1] [i_6 - 1] [i_6 - 1] |= ((-(arr_21 [i_9] [i_6 - 1] [i_9])));
                        arr_39 [i_0 + 2] [i_6 - 1] [i_9 - 2] [i_10] [i_0] = ((((((var_11 > (arr_8 [i_0] [i_6 + 1]))))) + (arr_36 [i_0] [i_6 - 1] [i_9 - 1] [i_10])));
                        var_21 = ((~(arr_12 [i_0 + 1] [i_6 - 1])));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_22 *= (((arr_41 [i_11]) ? ((max(0, (max(var_0, var_3))))) : (var_8 / -20829)));
        var_23 = (min(((max((arr_41 [i_11]), (arr_41 [i_11])))), (max((arr_40 [i_11]), (arr_40 [i_11])))));
    }
    var_24 = var_1;
    #pragma endscop
}
