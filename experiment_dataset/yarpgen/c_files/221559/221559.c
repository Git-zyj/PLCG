/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(1, ((+((var_5 ? (arr_1 [i_0]) : var_2))))));
        arr_5 [i_0] [11] = ((7557 ? (((!((((arr_2 [i_0]) ? 262143 : var_0)))))) : (((arr_0 [i_0]) & (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = ((((((((arr_6 [i_1]) ? var_9 : 8160)) - (((arr_7 [i_1]) >> (218 - 211)))))) ? ((min(48035, (arr_7 [i_1])))) : (((120 || var_8) % 127))));
        arr_9 [i_1] = (((((!(arr_6 [i_1])))) / var_7));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = ((((max((var_10 - 1), ((var_8 ? 1 : (arr_0 [i_2])))))) * (((arr_6 [i_2]) & (arr_6 [i_2])))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_12 = ((arr_11 [i_2]) ? -8161 : (arr_11 [i_3 + 1]));

            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                var_13 = ((-(arr_19 [i_4] [i_4 - 1] [i_4] [i_4 - 1])));
                var_14 = (((arr_12 [i_2]) ? (arr_11 [i_4]) : ((64 - (arr_3 [i_2] [i_2])))));
            }
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                var_15 = ((-(arr_1 [i_3])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_29 [i_2] [i_2] = ((!(43 & 1)));
                            arr_30 [i_2] [i_6] [i_7] = ((~(arr_22 [i_2] [i_3 + 1] [i_3 + 1] [i_5 - 1])));
                            arr_31 [i_2] [i_2] [0] [i_2] [i_2] = 10;
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_2] = (((arr_26 [i_7] [i_2] [i_2] [i_2]) & (((arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2]) ? (arr_15 [i_2] [i_5] [i_2]) : var_10))));
                        }
                    }
                }
            }
            var_16 = var_2;
            var_17 = ((-1 - ((var_11 ? (arr_21 [i_2] [i_2] [i_2]) : (arr_3 [i_2] [i_3])))));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_35 [4] |= ((((((!(((211 ? 6507 : (arr_23 [i_8] [i_2])))))))) <= (((arr_2 [i_2]) ? 4031567691 : (arr_21 [i_2] [i_2] [0])))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 18;i_10 += 1)
                {
                    {
                        var_18 = (((var_1 || -1) || ((max(((((arr_37 [i_10 - 4] [i_10]) && var_10))), (arr_27 [i_2]))))));
                        var_19 = ((+(((1 / 1633929480) & var_7))));
                        arr_40 [i_2] [i_8] [i_9] [i_10 - 4] = (max((max((max((arr_37 [i_2] [i_8]), (arr_22 [i_2] [i_2] [i_2] [i_2]))), ((~(arr_3 [i_2] [i_2]))))), (!-120)));
                        var_20 ^= (((((var_2 & (arr_26 [i_8 + 1] [1] [0] [i_10 - 2])))) ? ((~(((!(arr_36 [i_2] [i_8] [14] [i_10])))))) : ((((min(var_1, var_1))) ? (!114) : (((arr_0 [i_2]) ? 127 : -8160))))));
                        arr_41 [i_2] [i_8] [16] [16] = (((((var_8 != 8159) ? (arr_22 [i_10] [i_10 - 3] [i_10 - 3] [i_8 + 1]) : (min(4294967295, 1)))) - ((((arr_23 [i_10 - 1] [i_9]) ? -var_7 : 16769024)))));
                    }
                }
            }
            var_21 = (arr_24 [i_2] [i_8] [i_2]);
        }
        arr_42 [i_2] = ((~((166 ? 1 : 8191))));
        var_22 = ((-(((-64 < (((arr_6 [i_2]) ? (arr_16 [i_2] [i_2] [i_2]) : 0)))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        arr_46 [i_11] = ((((((arr_44 [i_11]) + 2147483647)) << (64 - 64))) << (((16 + var_0) - 16)));
        var_23 = (min(var_23, var_11));
        var_24 += (((arr_45 [i_11] [i_11]) != 27908));
    }
    var_25 = (95 && 1465326039);
    #pragma endscop
}
