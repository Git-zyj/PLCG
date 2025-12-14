/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((((((255 ? var_2 : 95))) ? var_10 : 98141835)) | 3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (3 + (arr_1 [i_0]));
        var_15 |= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] = (min((max((-2147483647 - 1), (~199123649))), (arr_4 [14] [1])));
                    var_16 = (max(var_16, (((-(((((arr_3 [i_1]) ? (arr_0 [i_1]) : 5292977806301850811)) - (arr_8 [i_3]))))))));
                    arr_13 [i_1] [i_1] [13] = ((var_13 ? -199123653 : (((arr_4 [i_1] [i_3]) + -199123650))));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_17 = (max(var_17, (((arr_1 [i_1]) | ((((!0) || ((max(var_0, 0))))))))));
                        arr_17 [i_4] [i_4] [i_3] [i_1] [21] = (((((arr_6 [i_4]) ? (arr_6 [i_3]) : (arr_6 [i_1])))) ? (min((arr_6 [i_2]), (arr_6 [i_2]))) : (arr_6 [i_4]));
                    }
                }
            }
        }
        arr_18 [i_1] = (((((((arr_6 [i_1]) ? 255 : (arr_15 [14] [14] [14] [i_1]))))) ? (((-((min(165, 4)))))) : (((((arr_9 [i_1] [i_1] [i_1]) ? (arr_7 [i_1]) : (arr_16 [14] [14] [14]))) * (((var_5 ? 635777239 : (arr_9 [i_1] [i_1] [i_1]))))))));
        var_18 = min((((~4095) ? (((arr_15 [0] [i_1] [8] [0]) ? 236 : var_7)) : 1236571566)), ((((arr_14 [6] [i_1] [i_1]) != (((arr_14 [8] [8] [8]) ? 119 : 50331648))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_19 = (~15);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    {
                        var_20 = -var_5;
                        var_21 = (arr_1 [i_1]);
                        var_22 = -128;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_29 [12] [i_8] [i_5] [i_1] &= (arr_14 [i_8] [i_8] [2]);
                        var_23 = (min(var_23, ((((((~var_7) + 2147483647)) >> (!var_12))))));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_32 [i_10] = (min((min(((min((arr_4 [i_10] [i_1]), 253))), ((-(arr_28 [i_1] [i_10]))))), (((!((min(var_2, (arr_3 [14])))))))));
            var_24 |= ((((arr_6 [i_10]) - ((min(255, 133))))) + 255);
        }
    }
    #pragma endscop
}
