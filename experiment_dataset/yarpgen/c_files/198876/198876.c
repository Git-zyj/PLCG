/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 += (max(var_4, ((var_5 ? ((1388266470 ? 1388266470 : -1388266482)) : var_8))));
        arr_4 [i_0] = (min((max(-1388266471, (75 || 1388266469))), (!-3717178209853246548)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, (arr_12 [i_0])));
                        arr_13 [i_0] [15] [i_2 - 1] [15] &= var_0;
                    }
                }
            }
            var_18 = (arr_2 [i_0] [i_1]);
            arr_14 [i_0] = ((6087462753023338679 ? var_7 : var_0));
        }
        arr_15 [i_0] |= (max((arr_9 [i_0] [i_0] [i_0] [0] [i_0]), ((((22616 > var_8) ? (-1388266471 - 48251) : 1)))));
        var_19 = (1866078923 >= -6087462753023338682);
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_27 [i_5] [i_5] = ((((min(12783871527123058561, 40))) ? (max((arr_26 [i_4] [i_4] [i_4] [17] [i_4 + 2]), (max(70389949, var_11)))) : (max(var_4, (arr_19 [i_4 + 2] [i_7 - 2] [i_5])))));
                                var_20 = (!5662872546586493049);
                                arr_28 [i_4] [i_5] [i_5] [i_7] [i_5] = ((127 ? -2225658255571633216 : 1));
                                var_21 = (min(var_21, (!var_8)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_34 [i_5] [i_5] [i_5] = (arr_33 [i_4 + 2] [18] [18] [i_5] [i_4 + 2]);
                                var_22 *= (min(var_6, (((!0) | var_7))));
                                var_23 = var_14;
                            }
                        }
                    }
                    arr_35 [15] [i_5] = var_4;
                }
            }
        }
        arr_36 [i_4 - 1] &= (arr_19 [8] [i_4] [18]);

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_24 = (min(var_24, (arr_17 [i_4])));
            arr_40 [i_4] [i_4] = max((var_6 >= var_2), var_10);
            var_25 = (((max(65, (arr_37 [i_4 + 1]))) % (((arr_19 [i_4 + 2] [i_4 - 1] [12]) << 1))));
        }
        arr_41 [i_4] = var_11;
    }
    for (int i_12 = 2; i_12 < 13;i_12 += 1)
    {
        var_26 = (max(var_26, var_13));
        var_27 = (max(18446744073709551607, -55));
    }
    #pragma endscop
}
