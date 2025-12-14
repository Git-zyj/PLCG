/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (4095 >> ((((var_10 ? var_4 : var_1)) - 51500)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_15 |= (arr_6 [i_2] [i_1] [5]);
                        var_16 = (max(var_16, 0));
                    }
                    arr_9 [i_0] = ((var_3 == (arr_8 [i_0] [i_1] [i_1] [i_2])));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((5217685206972871051 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_2] [i_1] [i_0])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_17 [i_0] [i_5] [i_6] = (((arr_14 [i_0] [0]) ? var_1 : ((1318694900758464557 ? -10902 : 5217685206972871063))));
                        var_17 = ((((2481627242 ? 1650270777 : 33880))) ? (arr_15 [i_5 - 1] [i_0] [i_0] [i_0]) : (((!(arr_3 [i_4])))));
                        arr_18 [i_0] = (1 ? ((3787523391 ? 29 : var_9)) : (arr_11 [i_5 - 2]));
                        var_18 = (((!-1650270778) ? (((122 ? var_4 : (arr_7 [1] [i_5 + 2] [i_4] [i_0])))) : var_5));
                    }
                }
            }
        }
        arr_19 [i_0] [i_0] = var_10;
        var_19 = ((((-32767 - 1) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_8)));
    }
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_20 = ((14872263558939317331 + ((~((9106 ? 3574480514770234285 : 137425907))))));
        var_21 ^= var_7;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            {
                var_22 = (min((127 > 22332), (min((-9107 & var_1), var_1))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_23 = var_8;
                    var_24 -= var_10;
                    var_25 = (((var_12 ? 3574480514770234285 : (arr_6 [i_8] [i_9] [i_8]))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_35 [i_8] [i_8] [2] [i_8] = (((arr_6 [i_9 + 4] [i_9 + 1] [i_9 + 1]) ? (var_8 > -1076761117) : (arr_26 [i_8] [i_9 + 2] [i_10])));
                                var_26 = -1;
                                var_27 = -17122;
                                arr_36 [i_8] [1] [i_12] &= 3574480514770234284;
                                arr_37 [i_8] = (arr_24 [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (((((var_6 ? 3574480514770234293 : (((var_8 ? 876044027 : var_6)))))) ? var_2 : (!var_1)));
    #pragma endscop
}
