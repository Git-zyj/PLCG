/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((32738 ? -1 : -1))) || (var_2 || 1))) && ((min(2048, 4838977322985312671)))));
    var_13 = ((((min((min(0, -10653)), 32767))) ? 3 : 0));
    var_14 = var_10;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-(((-2147483647 - 1) ? var_11 : var_7)))));
        var_15 -= 32767;
        arr_3 [i_0 - 3] |= (min(((min(((max((arr_0 [i_0] [i_0]), 30350))), ((1 ? 65535 : 32755))))), (((arr_0 [i_0 - 4] [i_0]) ? (arr_0 [i_0 + 1] [i_0 - 4]) : (~var_6)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = 0;
        var_17 = (min(var_17, (arr_4 [i_1])));
        arr_6 [i_1] [4] = (((min(-30350, -4294967295)) != var_0));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = (arr_10 [i_2]);
        arr_12 [i_2] = (!3);
        arr_13 [i_2] [i_2] = (((arr_0 [i_2] [i_2]) << 0));
        arr_14 [i_2] [i_2] = (((arr_9 [i_2]) / 1));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_28 [i_3] [i_3] [i_5] [i_6] = ((min(1, (((-2147483647 - 1) ? 20 : 1)))));
                                arr_29 [i_7] [i_7] [i_7] [i_3] [i_7] [i_7] = ((min(((-1 ? var_1 : var_5), 4095))));
                                arr_30 [i_3] [i_3] [i_3] = -4096;
                            }
                        }
                    }
                    arr_31 [i_3] [i_4] [6] |= ((0 ? ((1 % ((4584940106163588487 ? 165861560065802675 : -9223372036854775797)))) : (((min(1, (arr_19 [i_4 - 1] [i_4 - 1] [8])))))));
                    arr_32 [i_3] [i_3] [i_4] [i_3] = (1 ? (max(var_8, ((var_4 ? (arr_26 [18] [i_4] [i_3] [i_4] [i_5]) : (arr_15 [i_3]))))) : (min(1073741824, (arr_24 [i_4 - 1] [i_5 - 1] [i_3] [i_5]))));
                }
            }
        }
        var_18 = (max(var_18, (35870 < 1)));
        var_19 = (min(var_19, (((63 ? 0 : ((((((1 || (arr_27 [16]))))) * (0 << 1))))))));
    }
    #pragma endscop
}
