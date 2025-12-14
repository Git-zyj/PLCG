/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = ((((max((min(40500, var_15)), (arr_2 [i_2 + 2])))) ? 1977847403 : (max((min((arr_6 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_2] [i_0]))), 18446744073709551615))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (-(((((35474 ? (arr_5 [i_0] [6] [i_0] [i_3]) : 33813))) ? (max((arr_5 [i_0] [i_0] [i_0] [i_0]), -380906623)) : (((arr_2 [16]) ? 5358684594138005365 : -1475243977)))));
                                var_19 |= 9216413730847274985;
                            }
                        }
                    }
                    arr_13 [i_0] [i_2 + 1] = var_7;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 = ((-22086 ? ((((min((arr_16 [i_5]), var_9))) ? (arr_15 [i_5] [i_5]) : 23507)) : var_4));
        var_21 = (arr_4 [i_5] [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_22 += (~((var_0 & (min((arr_17 [i_6]), var_5)))));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_23 = 13899798703062796864;
            arr_23 [i_7] = arr_15 [i_6] [i_7];
        }
        var_24 += (min((max((arr_14 [i_6]), 36427)), var_6));
        var_25 = arr_19 [i_6] [0] [i_6];
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {
        arr_26 [i_8] = ((~(arr_25 [i_8 + 3])));
        var_26 = var_8;
        var_27 = (min(var_27, 10233));
    }
    var_28 = var_11;

    /* vectorizable */
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {
                        arr_40 [i_9] [i_12] = (arr_39 [i_9 - 1] [i_9 + 2] [i_9 - 3] [i_9 - 1] [i_9 - 2] [i_9 + 2]);
                        arr_41 [6] [6] [i_11] [i_11] [i_11] = (~3438925867629396394);
                    }
                }
            }
        }
        arr_42 [i_9] = (arr_32 [i_9]);
    }
    for (int i_13 = 2; i_13 < 15;i_13 += 1)
    {
        arr_46 [i_13] [i_13] = var_2;
        arr_47 [i_13] = var_2;
        var_29 &= (var_15 / 24730);
    }
    var_30 = var_12;
    #pragma endscop
}
