/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((max((((arr_4 [i_0] [15] [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (-689448798 / var_3))) ^ ((max(var_14, 63)))));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_16 = (((((((arr_4 [i_0] [i_0] [i_0]) || 1497389102)))) ? (((!var_1) ? var_8 : ((31762 ? var_13 : var_4)))) : ((86 ? (!-71) : (!var_3)))));
                    var_17 = (-(50362 / var_14));
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_18 *= max((((54 < (arr_11 [i_0] [i_0] [i_3 - 1])))), (((max(var_1, var_2)) - 1787228849)));
                    arr_12 [i_0] [i_1] [i_1] [i_3 + 1] = max((((37 + 8486711876134207821) ? var_0 : ((max(var_10, 38019))))), 1);
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = -3078;
                                var_20 = (234066278 - 1);
                                var_21 = ((((-var_4 ? ((max((arr_9 [i_4] [i_4] [i_4] [i_4]), 46))) : ((1 ? var_6 : 870791198)))) * -var_12));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_0] = ((max(0, 46)));
                    var_22 = (max(397108620, 37));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_23 += var_11;
                    arr_24 [i_7] [4] [i_1] [i_7] = ((((((arr_3 [i_0] [19] [i_7]) * 96))) && (arr_6 [i_1 - 1] [i_7 + 4])));
                }
            }
        }
    }
    var_24 = (max(((((max(38418, var_10))) ? var_3 : var_2)), var_5));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_27 [i_8] = 50;
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    {
                        var_25 = ((!(arr_35 [i_9 - 1] [i_9 + 1] [i_11 - 1] [i_9])));
                        var_26 += var_13;
                    }
                }
            }
        }
        var_27 *= ((~(arr_9 [i_8] [i_8] [i_8] [i_8])));
        var_28 = (((1 <= var_4) || -40963));
        arr_38 [i_8] [i_8] = var_5;
    }
    #pragma endscop
}
