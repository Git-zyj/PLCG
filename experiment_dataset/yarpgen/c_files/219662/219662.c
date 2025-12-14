/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((16056 || (arr_1 [i_0])));
        arr_5 [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_13 ^= (var_9 & var_11);
                            var_14 = (min(var_14, (((-17849 ? -8947027157003420158 : 0)))));
                        }
                    }
                }
            }

            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                arr_23 [0] [i_1 + 1] [8] [i_6] = (((((((1125899638407168 / (arr_22 [i_6 - 1]))) >> (arr_22 [i_6 + 3])))) ? ((((arr_8 [i_1 - 1]) ? (arr_8 [i_1 - 1]) : (arr_7 [i_6 - 3])))) : -var_8));
                arr_24 [i_1] [7] = (min((max(18446744073709551594, (arr_13 [i_1] [i_6 + 2] [i_6] [i_6]))), ((min(13758, (arr_13 [14] [i_6 + 2] [i_6 - 1] [i_6]))))));
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_15 *= (arr_12 [i_1] [i_7] [i_1 + 1]);
            var_16 = (arr_22 [i_1 - 2]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_31 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1] |= (((arr_13 [i_1 + 1] [i_1 - 1] [13] [i_1 - 1]) ? (arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1]) : var_5));
                        var_17 = (max(var_17, (((var_8 ? (arr_9 [i_1] [i_1 - 1]) : 8947027157003420165)))));
                        arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_8 [i_7]) != (arr_21 [i_1 + 1] [i_1 - 1] [i_9])));
                        arr_33 [i_9] = 16063;
                    }
                }
            }
        }
        var_18 = var_1;
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_36 [2] = (((((((((arr_34 [i_10]) && (arr_35 [i_10]))))) & var_3)) & (((((var_10 != (arr_34 [i_10]))) ? (var_5 / var_5) : (min((arr_35 [i_10]), (arr_35 [i_10]))))))));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_39 [i_10] [i_11] = (((arr_34 [i_11]) - 2528168759));
            arr_40 [i_11] = (((var_11 ^ (arr_37 [i_10]))));
        }
    }
    var_19 = (var_0 != var_3);
    #pragma endscop
}
