/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (65526 == -1023400212);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = (max(var_14, (((0 ? 18446744073709551615 : (~var_2))))));
            var_15 = (max(var_15, 1023400203));
            arr_7 [i_0 + 1] [i_0] [i_1] = ((var_8 ? (arr_5 [i_1] [i_0 - 2] [i_0 - 2]) : var_10));
            arr_8 [i_0] [i_1] [i_0] = -1;
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_16 = (arr_10 [i_0 - 1] [i_3]);
                var_17 = 127;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_16 [0] [i_4] [i_4] &= (-1023400212 || -1);
                var_18 *= (((((4 ? 8388544 : -1023400232))) ? ((~(arr_3 [12] [15] [8]))) : -24));
            }
            var_19 = (max(var_19, ((((!350323729) ? 4078839482 : 15)))));
            var_20 = var_10;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_21 = (max(var_21, (((!((((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6]) ? var_9 : 6813768248333561615))))))));
                        arr_22 [8] [i_0] [14] [i_0] [i_0] = ((6813768248333561615 ? ((var_5 ? 0 : -1023400212)) : ((var_9 ? -1359535658 : var_2))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_22 -= ((~(arr_15 [i_0] [i_0 - 1] [i_0])));
            var_23 *= (arr_14 [i_0 - 1] [i_7] [i_7] [i_7]);

            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                var_24 = var_3;
                arr_28 [i_0] = (~3904301687);
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_25 = ((~((571314239 ^ (arr_18 [i_0 - 2] [i_9] [i_10])))));
                            arr_34 [i_8 - 1] [i_0] [i_8 - 1] [3] [3] [i_0] [i_0 - 2] = (901413176 + -8388561);
                            arr_35 [i_10] [i_0] [i_8] [i_8 + 1] [i_0] [11] = ((!(((1359535655 ? -1023400212 : 4080)))));
                        }
                    }
                }
            }
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                arr_38 [i_0] [i_7] [i_7] [i_0] = ((-(var_4 + var_1)));
                arr_39 [0] [i_0] [i_11 - 2] [i_11 - 2] = ((+(((((arr_5 [i_0] [i_0 + 1] [0]) + 2147483647)) >> (-1314413894042853569 + 1314413894042853580)))));
                arr_40 [i_11] [i_0] [i_11 + 1] = ((1359535658 != (!var_2)));
            }
            var_26 = (arr_14 [0] [1] [i_7] [i_7]);
        }
        var_27 -= ((~(arr_5 [i_0 - 2] [i_0] [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_28 *= ((var_1 ^ (((((arr_9 [5] [i_12]) + 2147483647)) >> (((arr_26 [i_12] [9] [i_12] [i_12]) - 1566965360))))));
        arr_44 [i_12] = (((((-1023400224 ? -16 : 11357580613597095404))) ? 3393554119 : (arr_25 [i_12])));
    }
    #pragma endscop
}
