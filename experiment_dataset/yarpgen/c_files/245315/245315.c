/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [1] = ((arr_0 [8]) | (max(-16, 10787663355542050077)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((~((18 ? 3639146048240284508 : 14809260158729580138))))));
                    var_15 = (max(var_15, ((((arr_5 [i_2] [i_0] [i_0]) == var_9)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (arr_10 [i_2] [i_2] [i_2] [i_2]);
                        var_17 *= 3637483914979971483;
                    }
                    var_18 ^= (((((-7015517376301729656 + 9223372036854775807) << (7015517376301729655 - 7015517376301729655))) == (((255 ? 36 : ((8530319978993245845 ? 107 : 37)))))));
                    var_19 |= (arr_9 [i_0] [i_1] [i_0] [i_0]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            var_20 = (max(var_20, 5870229020907326687));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] = var_1;
                        var_21 = (min(var_21, (arr_16 [i_4] [i_4] [i_4])));
                    }
                }
            }
            arr_23 [i_4] [i_4] = (((arr_10 [i_5] [i_5 + 1] [i_5 - 2] [15]) ? -6656378478748698395 : 192));
            var_22 = (((arr_16 [i_4] [i_4] [i_5]) || (!var_2)));
        }
        var_23 += ((((var_7 ? var_12 : (arr_11 [11]))) / (((arr_10 [i_4] [i_4] [i_4] [i_4]) ? 13 : (arr_3 [i_4] [i_4] [i_4])))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_24 *= min(((var_4 ? (max((arr_4 [i_8] [i_8] [i_8]), var_10)) : ((var_5 ? (arr_16 [i_8] [i_8] [i_8]) : 0)))), (max((arr_6 [i_8] [i_8]), (((1026052689767857706 || (arr_26 [i_8])))))));
        arr_28 [i_8] = ((((min(-93, (max((arr_24 [i_8] [i_8]), (arr_26 [i_8])))))) & (max((arr_20 [i_8] [i_8]), (arr_18 [i_8])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_25 += ((!(((14809260158729580141 ? 247 : 13466894199867669786)))));
                        var_26 = ((((max((arr_4 [i_8] [i_9] [i_9]), (arr_4 [i_8] [i_8] [i_8])))) && (((arr_4 [i_8] [i_8] [i_8]) <= (arr_4 [i_8] [i_8] [i_8])))));
                        arr_36 [i_8] [i_8] [i_9] [i_10] [i_9] = (((12812176399465557389 >= (var_1 - var_3))));
                        var_27 = (min(var_27, ((197 ? (((~181) ^ (max(var_6, (arr_27 [i_8]))))) : var_0))));
                    }
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        var_28 = (max(11828284838271531414, 196));
                        var_29 = (min(var_4, ((((201 ? -4154322051506859775 : -5797585138042611858))))));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        arr_42 [i_8] [1] [i_8] [i_8] = (((arr_38 [i_8] [i_8]) ? var_5 : (((-(arr_38 [i_10] [i_13]))))));
                        var_30 = arr_6 [i_10] [i_9];
                        var_31 = (max(var_31, (-4154322051506859775 + 93)));
                    }
                    var_32 = ((18 ? ((((!((max((arr_31 [i_8] [i_10]), var_7))))))) : ((((arr_41 [i_8] [i_8] [i_9] [i_10]) ? (arr_3 [i_8] [i_9] [i_10]) : (arr_12 [i_9]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        var_33 += (((((arr_30 [i_14] [i_14] [10]) - 8902050188541848650)) ^ -4154322051506859780));
        arr_46 [i_14] |= (-(10816699383056615539 ^ 202));
    }
    var_34 = max(((((max(54, var_7)) != -var_5))), var_0);
    var_35 = var_0;
    var_36 |= ((var_6 ? (((!((max(163, 18000999623767697544)))))) : ((~(var_4 == var_10)))));
    #pragma endscop
}
