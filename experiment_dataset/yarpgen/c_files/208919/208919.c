/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 3681875767;
    var_19 = (min(((max(var_2, var_11))), ((((var_14 ? var_16 : var_8)) | var_16))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (max(var_16, ((min(((var_8 ? (arr_3 [i_0] [7]) : (arr_3 [1] [19]))), ((var_12 ? (arr_0 [i_0] [19]) : -134217728)))))));
                var_21 = (((min(1, (((1 ? 1 : (arr_0 [1] [1]))))))) ? ((((var_5 ? 140737488224256 : (arr_3 [23] [2]))) + var_1)) : (((var_12 > (arr_2 [19] [i_1 + 1])))));
                var_22 ^= (arr_2 [i_0] [i_1 - 1]);
                var_23 = (((arr_0 [1] [10]) | var_16));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [14] [i_0] [10] = (min(((((max(var_10, 0)) >> ((min(var_9, 0)))))), (((arr_4 [14] [i_1 - 1] [1] [i_2]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_5 [i_0] [i_0] [i_0])))));
                    var_24 = (arr_3 [i_1 + 1] [i_1 - 1]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_25 = (min(((min((arr_9 [i_3]), (arr_7 [i_3] [i_3])))), ((1 ? 250 : (arr_0 [i_3] [i_3])))));
        var_26 = 3092499249;
        var_27 = (arr_0 [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_28 = (((arr_8 [i_4]) < (arr_8 [13])));
        var_29 -= (arr_2 [i_4] [15]);
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_16 [0] = 30905;
        var_30 = (min(var_30, (arr_7 [7] [18])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_21 [i_5] [i_7] [i_5] = (min((min(var_17, 1)), (arr_4 [1] [1] [19] [i_5])));
                    var_31 = ((~(max(6871438820796738939, (arr_5 [i_5] [i_5] [21])))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_32 = (((arr_2 [21] [20]) ? (((((arr_2 [12] [23]) && (arr_13 [i_8]))))) : var_12));
        arr_24 [1] = var_8;
    }
    #pragma endscop
}
