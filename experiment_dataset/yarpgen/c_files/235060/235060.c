/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((1 ? (1 - var_13) : 227)), var_13));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!-29);
        arr_3 [i_0] [i_0] = ((-1745832320147248221 ? ((227 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : ((((arr_0 [i_0]) ? 1 : 0)))));
        var_18 ^= ((((39 ? 203 : (arr_0 [i_0]))) != (var_2 == -1745832320147248221)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (~1745832320147248221);
            arr_7 [i_1] [i_1] = ((var_12 ^ (arr_1 [i_0 - 1])));
            arr_8 [i_0 - 1] = arr_5 [i_0];

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_19 = ((1745832320147248220 ? 227 : 0));
                var_20 -= (176 << 1);
            }
            var_21 = (~(var_0 < 65519));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_22 = (!29);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_23 |= ((3384072978 ? 255 : 65516));
                            var_24 = ((!(arr_0 [i_4])));
                        }
                    }
                }
            }
            arr_24 [i_0] [i_3] = (((((arr_0 [i_0]) >= 19)) && (((1745832320147248221 ? 255 : 127)))));
            var_25 = ((1 ? 255 : (~var_12)));
        }
    }
    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_26 &= (((arr_15 [i_7 - 1] [i_7 + 1] [8]) >> (((var_2 / -75) % 65517))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_8] [i_10] [i_10] [i_11] = 39;
                                arr_40 [i_7] [i_10] [i_9] [i_10] [i_10] = (((51 ? 248 : -1401839762)));
                                arr_41 [i_10] = ((((min(14814754556998792263, (arr_17 [i_10])))) ? ((((arr_17 [i_10]) ? (arr_17 [i_10]) : (arr_17 [i_10])))) : (max(88, var_8))));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_27 = ((!(arr_17 [i_12])));
                        arr_46 [i_12] [i_9] [i_7] = (((((min(1, 250)))) ? (min(1, ((var_11 ? (arr_15 [i_8] [i_9] [i_12]) : 120)))) : (arr_18 [15] [15])));
                    }
                }
            }
        }
    }
    var_28 = (193 ? 1 : 1);
    var_29 = ((var_4 ? var_5 : var_10));
    #pragma endscop
}
