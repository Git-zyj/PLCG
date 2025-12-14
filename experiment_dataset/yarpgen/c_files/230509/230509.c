/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = (max(var_15, (-var_8 && var_6)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [12] = (max(0, ((((min((arr_0 [i_0] [1]), (arr_1 [i_0])))) & (var_17 ^ var_7)))));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_20 = ((~((((arr_1 [i_1]) != ((var_5 ? var_6 : var_15)))))));
            arr_5 [11] [11] [11] = ((var_16 ? (832736293 / var_12) : (((min(var_4, var_13)) * (832736293 * 9007199254740960)))));
            var_21 = (min((((((((arr_4 [i_0] [1]) ? (arr_3 [i_0] [15] [i_0]) : var_10))) && (arr_4 [8] [i_1])))), (min(var_17, (arr_3 [i_0] [i_1 - 1] [i_1])))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_22 = ((9918928036350948745 ? 9007199254740960 : 832736287));
                var_23 = ((((((97 + var_15) ? var_6 : ((var_3 - (arr_6 [i_0] [i_1] [i_2])))))) && (((-(((arr_0 [i_0] [i_0]) - 0)))))));
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_24 -= ((((var_11 ? var_0 : var_3)) >> (((arr_8 [i_1 + 1] [i_0]) - 21882))));
                var_25 *= ((~(arr_1 [i_3])));
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                arr_13 [i_0] [i_0] [15] &= (((((arr_10 [i_1 - 1] [i_4 + 2] [i_4 + 2]) != (arr_11 [i_1 + 1] [i_4 - 1] [0]))) ? (((!(arr_10 [i_1 - 1] [i_4 + 2] [i_4])))) : (min(-268435456, 832736275))));
                arr_14 [1] [7] [7] = ((min((arr_6 [i_1 + 1] [10] [i_4 + 2]), (arr_6 [i_1 + 1] [11] [i_4 + 1]))));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_26 -= 1;
                var_27 = (((arr_6 [i_0] [i_0] [i_5]) && (((var_10 + ((max(var_10, var_16))))))));
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_28 ^= (arr_16 [i_6]);
            var_29 = (min((((((var_12 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_12 [8] [8] [i_6])))) ? (var_1 - var_5) : var_13)), (((-(arr_16 [i_0]))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            var_30 = -var_5;
            var_31 = (var_1 ^ var_11);
            arr_27 [4] [4] = var_9;
        }
        for (int i_9 = 4; i_9 < 17;i_9 += 1)
        {
            arr_30 [5] = (arr_24 [i_7] [i_7] [13]);
            arr_31 [i_7] [i_7] = (((var_14 == (arr_24 [i_7] [i_7] [i_9]))));
            arr_32 [i_7 - 2] = (arr_25 [i_9 + 1] [i_9 + 1]);
            arr_33 [i_7] [i_7] [i_9 + 2] = (((arr_24 [i_9 - 3] [2] [i_9]) ? (~var_2) : 65535));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_37 [2] [0] = ((var_3 + (arr_24 [i_7 - 2] [i_7 - 1] [i_7 + 1])));

            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                arr_40 [i_7] = (arr_25 [i_7 - 2] [i_7]);
                var_32 = -255508562;
                var_33 = (arr_23 [i_10] [3]);
                var_34 = (arr_22 [i_7] [0]);
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_35 = (arr_25 [11] [i_12]);
            var_36 = (var_4 / var_5);
            arr_43 [i_7 + 1] [i_7 + 1] = arr_26 [i_7] [i_12] [i_12];
        }
        arr_44 [i_7] [i_7] = var_0;
        arr_45 [14] [i_7 + 1] = 268435452;
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        var_37 = (max(((+(((arr_22 [i_13] [i_13]) / 11764837137239546923)))), (((-3212363446580984792 <= ((15234380627128566830 ? 832736287 : 3130751731900419185)))))));

        for (int i_14 = 2; i_14 < 7;i_14 += 1)
        {
            arr_50 [i_14] [i_14] [4] = (arr_39 [i_13] [i_13] [i_14] [i_13]);
            arr_51 [i_13] = arr_23 [i_14 + 1] [i_14 - 2];
            arr_52 [i_13] [i_13] [0] = -32762;
            var_38 = ((((~(arr_10 [i_13] [i_14 + 2] [i_14 - 2]))) != (((((~(arr_28 [i_14] [i_13])))) ? (arr_21 [i_14 - 1] [16]) : (((var_11 <= (arr_8 [i_13] [i_14 + 1]))))))));
        }
        for (int i_15 = 2; i_15 < 6;i_15 += 1)
        {
            var_39 = ((~(((arr_48 [i_15 + 1] [i_15 + 1] [i_15 + 2]) ? (~var_5) : var_3))));
            var_40 *= (((-32747 ? -48 : 7357519174837409579)));
        }
        var_41 = (min(var_41, ((min(var_14, 18)))));
    }
    #pragma endscop
}
