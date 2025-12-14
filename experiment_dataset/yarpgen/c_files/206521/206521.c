/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_15 = (min(var_15, var_10));
        var_16 = -var_6;
        arr_2 [4] = var_9;
    }
    var_17 = (min(-1812422148646499650, var_13));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_18 = (((((~(~-1812422148646499650)))) ? ((var_1 ? var_6 : (!var_11))) : var_10));
                            var_19 = ((!((min(((65535 ? 27236 : 141840826)), 7)))));
                            var_20 = ((~((141840823 ? 255 : -42))));
                            var_21 = (arr_15 [i_1] [i_1] [i_3] [i_1] [i_5]);
                            var_22 = ((-(max(46, -4782471848781589867))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_6] [i_4] [i_1] [i_1] [i_1] = -var_2;
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_6] = var_10;
                            arr_21 [i_1] [7] [i_3] [12] [i_4] [i_6] [1] = (~34256);
                            var_23 = (max(-99892842, 160));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_24 ^= (var_0 - var_2);
                            arr_24 [i_1] [i_2] [i_3] [i_4] [i_7] [i_2] = var_12;
                        }
                        var_25 = (((max(-1, var_11)) | (52338 < 19113)));
                        var_26 = (11885 > 0);
                        arr_25 [9] [i_3] [9] [9] = 32767;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    {
                        var_27 |= (arr_31 [9] [i_10 - 3] [i_10 - 1] [i_10 + 1]);
                        arr_34 [i_1] [i_8] [i_1] [i_10] = 0;
                        var_28 = (min(var_28, (arr_6 [i_1] [i_1] [i_1])));
                        arr_35 [i_1] [i_1] [4] [i_9] [i_10 - 3] = var_2;
                    }
                }
            }
        }
        arr_36 [14] = (((4533947000787511632 > 11885) - -13198));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            {
                arr_43 [i_11] = 141840826;
                arr_44 [i_11] [i_11] [i_11] |= (max((((min(-1812422148646499637, var_4)))), (~2024690562)));
                arr_45 [i_12] = (max((min(-4533947000787511632, 15255)), ((((arr_40 [1] [i_11]) ? var_14 : -1)))));
            }
        }
    }
    #pragma endscop
}
