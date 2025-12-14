/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, ((+((var_11 ? (arr_2 [i_0 - 1] [i_0 + 1]) : (8641 - 9223372036854775807)))))));
        var_16 = (min(var_16, var_9));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 -= ((44 ? (arr_4 [i_1]) : ((var_3 ? 56895 : 8641))));
        var_18 = ((13977 ? ((((arr_4 [i_1]) <= 562949953421311))) : 58));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = (min(var_19, (((-3254265909788351529 ? (arr_4 [i_2]) : (arr_4 [i_2]))))));
            var_20 += ((1 ? 58 : 18));
            arr_9 [i_1] [0] [i_1] = (((9 * 8631) >= (arr_4 [i_1])));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_4] = ((0 ? 1 : 3152895318));

                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_21 = (max(var_21, -44));
                        arr_21 [i_1] [14] [i_3] [i_3] [i_4] [i_6] = ((~(arr_6 [i_3] [i_4 - 1])));
                        var_22 = (max(var_22, ((((arr_8 [i_6 - 1] [i_5] [i_4 - 1]) ? (arr_8 [i_6 - 1] [i_5] [i_4 - 1]) : (arr_5 [i_4 - 1]))))));
                        arr_22 [i_4] = 55372390;
                    }
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        var_23 = (arr_13 [i_4] [i_4 - 1] [i_4]);
                        arr_25 [i_7 - 2] [i_7 - 2] [i_4] [i_7 - 2] = (arr_24 [i_7] [i_4] [i_7 + 3] [i_4] [i_7 + 3]);
                    }
                    arr_26 [i_4] [i_3] [i_3] [i_5] = ((55372393 ? 13977 : (arr_15 [i_4 - 1] [i_4 - 1] [5] [i_4 - 1])));
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    arr_29 [i_1] [i_1] [i_4] [i_1] = ((255 * (arr_13 [i_4 - 1] [i_4 - 1] [i_4])));
                    arr_30 [i_1] [i_1] [13] [i_4] [13] [8] = ((+(((-32767 - 1) ? 24522 : -24522))));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        arr_37 [i_1] [i_3] [i_1] [i_9] [i_4] = ((22970 ? 1 : 15175572524942038164));
                        arr_38 [2] [i_4] = -5590681074574960980;
                        var_24 = (min(var_24, 385156681));
                        var_25 = (max(var_25, 6));
                    }

                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_26 = ((arr_34 [i_11 - 1] [i_11] [i_11] [i_11] [11] [i_4]) ? (arr_34 [i_11 - 1] [6] [i_11 + 2] [i_11 - 2] [i_11] [i_4]) : (arr_24 [i_11] [i_4] [i_11 - 2] [i_4] [i_4 - 1]));
                        var_27 -= ((arr_15 [i_1] [i_11 - 2] [i_1] [i_4 - 1]) ? (arr_19 [i_4 - 1] [i_4 - 1] [i_9] [i_11 + 2] [i_11]) : (arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_11 + 3] [i_3]));
                        var_28 = (min(var_28, ((((arr_17 [4]) ? (arr_17 [i_1]) : (arr_17 [i_3]))))));
                    }
                }
                var_29 *= arr_17 [i_4 - 1];
                var_30 = (min(var_30, (arr_11 [i_1] [12])));
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                var_31 = (((arr_41 [i_12] [i_3] [17]) ? (arr_41 [i_12] [i_3] [i_1]) : (arr_41 [i_1] [i_3] [i_12])));
                var_32 ^= ((-86 ? (arr_28 [i_1]) : (arr_28 [i_3])));
            }
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_47 [8] [8] [i_13] [i_13] [i_13] = 0;
                        var_33 = (((arr_24 [1] [i_3] [i_13] [i_13] [i_13 - 2]) || (((65535 ? 1 : 24)))));
                    }
                }
            }
        }
    }
    var_34 = (min(var_34, (1 > 0)));
    #pragma endscop
}
