/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((arr_2 [i_0]) ? (((!(arr_2 [i_0])))) : (arr_2 [i_0])));
                var_21 = (((((((max(-1, 32767))) ? (13227244645903778212 - 6966702695873386856) : var_17))) ? (((min(9095834527381253720, var_0)))) : (((((min((arr_4 [6]), 6966702695873386842))) || (((1776766608 ? (arr_4 [i_0]) : (arr_0 [i_1])))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] = (max(27, (((arr_0 [i_3 - 1]) ? 255 : (arr_0 [i_3 + 1])))));
                                var_22 = ((-(arr_14 [i_6 + 1] [i_3 + 1] [i_3 - 2] [i_5])));
                                arr_21 [i_6] [i_6 - 1] [8] [i_6] = (min((max(12, (arr_0 [i_6 + 1]))), (min((arr_0 [i_6 - 1]), (arr_0 [i_6 + 1])))));
                                var_23 *= 65535;
                                arr_22 [i_5] [i_3] [7] = (23032 ? (-2147483647 - 1) : -10019);
                            }
                        }
                    }
                    var_24 += (arr_17 [i_2]);
                }
            }
        }
        var_25 = max(51, 22);
        arr_23 [7] = (max((((((108 ? -70 : -1228037578))) ? 2518200691 : (1228037582 & 0))), ((5083423783358433283 & (arr_4 [i_2])))));
        var_26 = ((-23033 ? 68 : var_6));

        /* vectorizable */
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            var_27 = 2149945167;
            arr_27 [i_2] = (arr_26 [i_7]);
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_30 [i_8] [i_2] [i_2] = ((max((arr_17 [i_2]), (var_11 / 18446744073709551615))));
            var_28 = (arr_11 [i_2] [i_2] [i_2]);
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                var_29 -= ((((((arr_31 [i_9 - 2]) ? (arr_2 [i_9 + 1]) : (arr_4 [i_9 - 3])))) ? (((max((arr_2 [i_9 - 1]), (arr_31 [i_9 - 3]))))) : (arr_4 [i_9 - 3])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_40 [i_11] = (max(((((arr_33 [i_9 - 3]) ? (arr_33 [i_9 - 2]) : (arr_33 [i_9 - 3])))), ((((((arr_3 [i_9]) ? (arr_31 [i_12]) : 16991))) ? 0 : (arr_32 [i_9 - 3])))));
                            arr_41 [i_10] [i_9] [i_10] [i_12] [i_10] |= ((16777215 ? 0 : 35));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
