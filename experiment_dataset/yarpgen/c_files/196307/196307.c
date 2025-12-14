/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_0] = (((min(2654468393, var_2))));
                                arr_15 [i_1] [i_1] [i_3] [i_2] [i_1] [i_0] [i_1] = (max((6157243239435009873 && 26), -14990));
                            }
                        }
                    }
                    var_17 = min(23137, (max(2147481600, var_2)));
                    var_18 *= 215;
                    var_19 = var_10;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_20 = (max(var_20, ((min(17304097259235719020, 7023972086444527359)))));
                    arr_21 [i_0] [i_0] [i_6] = ((2654468393 * (var_4 * 208)));
                    arr_22 [i_6] [i_6] [i_6] = -15471;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_25 [i_7] [12] = 1;
        arr_26 [i_7] = var_0;
    }
    for (int i_8 = 3; i_8 < 20;i_8 += 1)
    {
        var_21 += 814802118523008019;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_22 = (max(var_22, var_11));
                        arr_37 [i_8] [i_9] [i_9 - 1] [i_8] [i_9 - 1] [i_10] = 221;
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_23 = (max((-1 - var_11), (var_6 ^ 220)));
                        var_24 = (max(var_24, (6421692 / var_13)));
                        arr_41 [i_8 - 3] [i_9] [i_10] [i_12] = var_2;
                        var_25 = (17631941955186543604 / var_6);
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        arr_44 [i_13] [i_10] [i_8] = var_7;
                        var_26 = (min(var_26, (min(10674966423341798267, var_10))));
                    }
                    var_27 = 0;
                    var_28 = var_1;
                    var_29 = var_7;
                }
            }
        }
    }
    var_30 = 57253;
    #pragma endscop
}
