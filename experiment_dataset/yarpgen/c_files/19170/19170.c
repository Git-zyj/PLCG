/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_17, (min(((max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 - 2])))), (arr_1 [i_0] [i_0 - 2])))));
        var_18 -= arr_0 [i_0 - 1];

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_19 = (-18145923287771046151 + -var_16);
            var_20 = (4080831234378017923 % 3164992149161088656);
        }
    }
    var_21 = var_2;
    var_22 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_23 = ((~(arr_5 [i_3] [i_2])));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_15 [i_2] [i_3] [14] [i_4] = ((!((((arr_1 [i_2] [i_2]) ^ (arr_1 [i_4] [i_2]))))));
                    arr_16 [i_2] [i_2] [i_4] [i_4] = (((((~((min((arr_5 [i_2] [i_2]), (arr_5 [i_4] [11]))))))) && ((max(64, (arr_11 [i_2]))))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = 3164992149161088682;
                    var_24 = (min(var_24, (arr_12 [i_2] [i_3])));
                }
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    var_25 = arr_1 [15] [16];
                    arr_21 [i_2] [i_2] = var_2;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_27 [i_2] [6] [i_2] [i_2] = (((arr_23 [i_6]) % ((24 ^ (arr_13 [i_7] [i_2] [i_2])))));
                        arr_28 [i_7] = arr_8 [i_2];
                        var_26 = 145;
                        arr_29 [i_2] [11] [i_6] [i_7] [i_7] = 15281751924548462945;
                    }
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        var_27 = 4035225266123964416;
                        var_28 *= (33 * 203);
                        arr_33 [3] [i_3] [3] [2] = (((-(arr_5 [i_2] [i_3]))));
                        arr_34 [i_2] [i_3] [i_6] = ((-(arr_20 [i_8 + 1] [i_8] [i_8] [i_8 - 1])));
                        arr_35 [9] [i_3] [10] [9] [i_2] = ((var_6 ? (arr_18 [7]) : (((!(arr_30 [i_2] [i_3] [i_3] [i_8 + 1] [i_8 + 1] [i_3]))))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_29 = (min(var_29, ((((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_9]) : (arr_1 [i_2] [i_3]))))));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_30 = (arr_12 [i_6] [i_10]);
                            var_31 = ((64 * (arr_31 [i_3] [i_6] [i_6] [i_3])));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_45 [i_2] [11] [i_2] [i_2] [i_2] = (((((arr_14 [i_2] [i_2] [i_2]) + 2147483647)) >> (((arr_30 [i_2] [i_9] [i_6] [i_9] [i_11] [i_6]) - 3180933243685231872))));
                            var_32 = ((arr_30 [i_2] [7] [i_6] [i_9] [i_11] [7]) ? (arr_30 [i_2] [14] [14] [14] [14] [i_11]) : (arr_30 [i_2] [6] [8] [i_9] [8] [i_2]));
                        }
                    }
                    arr_46 [i_2] [i_2] = ((3164992149161088680 * (((~(arr_19 [2] [2] [i_6]))))));
                }

                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    arr_50 [i_12] [i_12] [i_12] = (!6074082521472993532);
                    var_33 = (((((!(arr_32 [i_12 + 1])))) >> (((!(arr_40 [15] [i_3] [i_12 - 1]))))));
                }
                var_34 = max((arr_20 [i_2] [7] [i_2] [15]), (arr_20 [i_2] [i_2] [i_2] [i_2]));
            }
        }
    }
    #pragma endscop
}
