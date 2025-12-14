/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_21 = var_14;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [1] [i_0] [i_2] = (((arr_7 [i_0]) >= (max((((arr_9 [i_0 - 3] [i_1] [i_1] [i_1]) << (((var_13 + 94) - 24)))), var_12))));
                    var_22 = var_18;
                    var_23 = ((((arr_4 [i_0] [i_0]) ? ((var_5 | (arr_0 [i_0 - 1]))) : (((min((arr_6 [i_0] [i_0] [i_0]), (arr_9 [i_0 - 3] [i_1] [i_1] [i_2]))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] = (((arr_11 [i_3]) && var_5));

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_16 [i_3] [i_3] [0] |= ((208 ? (arr_14 [i_4 - 1] [i_4] [i_3]) : (max((((~(arr_14 [i_3] [i_3] [i_3])))), (arr_15 [14])))));
            arr_17 [i_4] [i_4] [i_4] = (arr_15 [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            arr_21 [i_5] = (((arr_14 [i_5] [i_5 + 1] [i_5 - 1]) || 23744));
            var_24 -= (((arr_11 [i_5 + 2]) % (arr_12 [i_3])));
            arr_22 [i_5] = 78;
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_25 = (((26610 ? -1448460721739878685 : (arr_23 [i_6 + 1]))));
            var_26 = -var_7;
            var_27 = (min(var_27, (arr_15 [18])));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_28 = (max((arr_26 [i_3] [i_7] [19]), 4244428695));
            var_29 += (~(arr_27 [i_7]));
            arr_28 [i_7] [i_7] [i_7] = (min((max(var_2, (var_0 + var_3))), (arr_15 [2])));
            var_30 = 26710;
            var_31 = (min(var_31, var_0));
        }
        arr_29 [i_3] [10] = max(var_17, var_2);
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = -108;
        var_32 -= var_15;
        var_33 = (min(13379, 11493));
        arr_33 [i_8] [i_8] = (((arr_31 [i_8] [4]) - 107));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {

        for (int i_10 = 4; i_10 < 12;i_10 += 1)
        {
            var_34 = (arr_39 [i_10 + 1] [i_10] [i_10 - 1]);
            var_35 -= var_1;
        }
        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                var_36 &= ((var_10 ? (arr_42 [i_9] [i_9] [i_9 - 1]) : (arr_42 [i_9 - 2] [i_11] [i_12])));
                var_37 = (arr_15 [i_12]);
            }
            var_38 = (((arr_41 [i_9] [i_11]) && -65535));
            var_39 = (arr_38 [i_9]);
            var_40 = (arr_23 [i_9 - 1]);
            var_41 = (((arr_23 [i_9 - 1]) ? (arr_23 [i_9 + 1]) : (arr_23 [i_9 - 2])));
        }
        var_42 ^= (!1);
        var_43 = ((-(arr_40 [i_9 + 1] [i_9 - 2])));
    }
    #pragma endscop
}
