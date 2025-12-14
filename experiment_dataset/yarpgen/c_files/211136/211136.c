/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1181783001387974367;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = (var_5 & (((107 ? -107 : -104))));
                        var_12 = 107;
                        var_13 = (-3 + -104);
                        var_14 = var_8;
                    }
                }
            }
        }
        var_15 = 103;
        var_16 = (((arr_1 [i_0 + 3]) ? 1 : (arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = ((((!(arr_15 [i_4]))) ? 1 : -107));
        var_17 = (arr_13 [i_4]);
        var_18 = ((-(var_10 | var_3)));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_19 -= (((-4725788395117471990 / 2814950948465607895) ? ((var_7 / (arr_17 [i_4] [i_5 + 1]))) : -1));
                    var_20 = var_4;

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_21 = ((-3235222159 ? 1059745126 : (2578506782 <= 1)));
                        var_22 = ((((201310471 ? var_0 : 1059745126)) >= (((44 ? 118 : 3235222169)))));
                        var_23 = -1141148794637142440;
                    }

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        arr_26 [i_5] [i_6] [i_4] [i_5] [i_4] [i_5] = -var_4;
                        arr_27 [i_4] [i_5 - 1] [i_5] [i_8] = ((!(!28439)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_24 = ((var_9 ? 3235222155 : 1));
        arr_32 [5] = ((var_4 ? var_8 : var_6));
        var_25 = -116;
    }
    var_26 = (max(401198726934040185, (((-(18446744073709551615 || 0))))));
    #pragma endscop
}
