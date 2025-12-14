/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((0 - var_11) >= var_12)))) | var_7));
    var_16 = ((((var_9 ? ((var_0 ? var_9 : -1)) : 48)) ^ ((max(var_7, var_1)))));
    var_17 = var_9;
    var_18 = ((49 ? 1 : (!65475)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((((-(arr_0 [7] [i_0])))) ? 1 : 1));
        arr_3 [i_0] = (((((var_2 ? (arr_2 [9] [9]) : (arr_1 [1])))) ? (!-1) : 4));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (~4294967295);
            arr_7 [16] [i_1] [i_1] = arr_1 [i_1];
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((!(~9223372036854775807))))));
                            var_21 -= (var_14 || 16775168);
                            var_22 = ((!(((arr_13 [i_4] [i_3] [4] [i_2] [i_1] [1] [13]) > (arr_14 [i_0] [5] [i_0])))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_18 [11] [18] = ((var_13 || (arr_8 [i_5 + 1] [i_5 - 1] [5])));

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                var_23 = ((+(((arr_15 [13]) ? 164 : 32768))));
                var_24 = (max(var_24, ((((arr_12 [15] [11]) + (arr_5 [9] [i_5] [i_6 - 1]))))));
            }
        }
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            var_25 |= (((arr_20 [4] [i_7 - 1] [i_7 + 1]) ? (arr_11 [0] [i_7 - 1] [i_7 - 1] [i_7]) : (arr_20 [i_7] [i_7 + 1] [i_7 + 1])));
            var_26 = (!var_14);
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_27 = (((arr_12 [17] [i_7 - 1]) ? (arr_14 [i_0] [i_0] [i_8]) : (arr_25 [i_0] [i_7] [3])));
                        var_28 = (~((var_5 ^ (arr_20 [i_9] [1] [11]))));

                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_29 = (((!var_14) | var_2));
                            var_30 = var_1;
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_31 = var_12;
                            var_32 = ((4294967281 << ((var_6 ? var_13 : 1))));
                            var_33 = (max(var_33, 0));
                        }
                    }
                }
            }
            var_34 ^= 0;
        }
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_39 [i_12] = (((6572870962306521593 ? 0 : 4400584839453939277)) * (1 ^ 1));

        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            arr_42 [i_12] [1] = ((~(max(((max((arr_41 [i_12] [i_13]), (arr_38 [i_13])))), (arr_40 [i_12])))));
            var_35 = 0;
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_46 [i_12] = ((((!((max(0, (arr_36 [i_12]))))))));
            arr_47 [13] [0] [i_12] = arr_44 [i_12] [14] [i_12];
            var_36 = (arr_40 [i_12]);
        }
        var_37 |= (((arr_45 [14] [i_12] [14]) ? 1 : (arr_43 [i_12] [i_12])));
    }
    #pragma endscop
}
