/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((((((var_0 == var_7) > 1)))) <= (min(var_8, var_3))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_12 -= (((~246) * 15306343919726490271));
        arr_5 [10] = (arr_3 [i_0 - 2]);
        var_13 = (((arr_2 [i_0 - 1]) ^ (((arr_1 [i_0]) ? var_0 : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_16 [i_3] [i_1] [i_2] [i_1] [i_1] [i_3] = ((((min((~var_3), 1))) ? (!1) : (arr_8 [i_1] [i_1])));
                        var_14 = (max(var_14, ((((((~(arr_12 [3] [i_2] [i_3])))) ? (min(((-(arr_8 [i_3] [1]))), (arr_8 [i_1] [i_4 - 1]))) : ((((min(1, var_4))) ? var_0 : -3962)))))));
                        arr_17 [10] [i_3] = ((((((((arr_15 [i_4 + 1] [i_3] [i_3] [i_2] [i_1]) ? 1 : (arr_6 [i_1]))) / 1))) ? (arr_11 [i_4]) : (((arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (((var_0 ? 94 : (arr_14 [i_3] [1])))) : ((-8 ? (arr_7 [i_2]) : (arr_14 [i_3] [13])))))));
                        var_15 = (min(var_15, (((-(min((min(var_3, var_3)), (~3970))))))));
                        arr_18 [i_2] [i_4] [i_3] [i_3] [i_2] [i_1] = 18;
                    }
                }
            }
        }
        var_16 = (0 & var_3);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_17 = ((((arr_19 [i_8] [i_7]) ? (max((arr_11 [i_5]), (arr_9 [i_5] [i_6] [i_5]))) : (arr_7 [i_7]))));
                        arr_29 [i_8] [i_8] [i_8] [i_5] = ((~(((arr_22 [8] [i_6] [i_7]) ? ((1 ? (arr_20 [i_5] [i_5]) : -2304)) : (arr_10 [i_5])))));
                        var_18 = (max(var_18, (arr_23 [i_8] [i_7] [i_6])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_19 = (arr_13 [0] [i_9] [i_5]);

                    for (int i_11 = 4; i_11 < 14;i_11 += 1)
                    {
                        arr_39 [i_11] [i_11] [i_5] = ((!(((((5264095985668413674 << (((arr_14 [i_9] [i_9 + 1]) + 32363))))) || (var_0 == 1)))));
                        arr_40 [i_5] [3] [i_10] [i_11] [i_11] [i_5] = -255;
                    }
                }
            }
        }
    }
    var_20 = (((((var_5 == var_8) ? (var_10 * var_1) : (min(var_4, var_1)))) / (((var_8 ? ((var_5 ? var_6 : 236)) : var_6)))));
    #pragma endscop
}
