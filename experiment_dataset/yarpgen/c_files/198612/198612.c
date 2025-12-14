/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = var_7;
        var_12 = var_7;
        var_13 += (var_7 > -1790833589);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 ^= var_5;
        arr_5 [i_1] = var_0;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 = ((~(~0)));
                        var_16 = var_10;
                        var_17 -= (~-1790833590);
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_18 [6] [i_5] = var_6;
        var_18 -= (max(var_4, ((~(arr_11 [i_5] [i_5] [i_5] [0] [1] [i_5])))));
        var_19 = 1790833583;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_20 = var_6;
        arr_23 [1] = -var_5;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_7] [i_8] [i_8] = var_9;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_10] [i_9] [i_8] [i_9] [i_6] = var_0;
                                var_21 -= ((~(arr_34 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_10 - 1])));
                            }
                        }
                    }
                    arr_37 [i_8] [i_8] [i_8] = var_1;
                }
            }
        }
    }
    var_22 = var_8;
    var_23 = ((((~-5) | (~2860957715))) & (((~(~27392)))));
    var_24 = (((((min(14960379397535984579, 17)))) ? var_2 : var_4));
    var_25 ^= var_2;
    #pragma endscop
}
