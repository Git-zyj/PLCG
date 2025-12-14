/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (((((arr_0 [i_0]) > 2242856791366372248)) ? ((-var_1 ^ (arr_1 [i_0] [i_0]))) : 1929460396));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_1] &= 6110431691221796173;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_17 = (min(var_17, (arr_3 [4] [11])));
                var_18 = (((arr_8 [i_1 + 2] [i_1 + 2]) ? (arr_2 [i_0] [i_1 - 4] [i_2]) : (arr_8 [i_1] [i_1])));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_19 += ((-(var_11 + var_8)));
                    var_20 = ((var_1 ? (arr_11 [i_1 + 1] [i_1 + 2]) : (arr_0 [i_1 - 3])));

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_21 = (!-2242856791366372243);
                        var_22 = (4077620371 && var_12);
                    }
                }
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    var_23 = var_10;
                    arr_20 [i_6] = (arr_16 [i_1 - 3] [i_1 + 2] [i_6 + 1] [8] [i_6 + 1]);

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_24 [i_6] [i_3] [i_3] = ((-2242856791366372248 ? var_12 : -var_10));
                        var_24 = (min(var_24, ((((arr_16 [i_1 + 2] [i_6 - 3] [i_6] [i_6 - 2] [10]) || (arr_16 [i_1 - 3] [i_6 - 1] [i_6 - 1] [i_6 + 3] [i_7]))))));
                        var_25 = (arr_22 [i_0] [i_1] [i_6] [8] [i_1]);
                        arr_25 [i_0] [5] [i_6] [3] [i_0] [1] = (~255);
                    }
                    var_26 += 254;
                }
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    var_27 ^= (18446744073709551615 * var_5);
                    var_28 = (max(var_28, -2082478726));
                    var_29 *= (arr_2 [i_1 - 2] [i_8 - 1] [i_8 - 2]);
                    arr_29 [i_0] [i_3] = (((arr_2 [i_1 - 2] [i_8 - 1] [i_8 - 2]) ? var_1 : var_1));
                }
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    arr_33 [1] [1] [2] [i_9] = (((arr_28 [i_0] [i_0] [i_3] [i_9 + 1]) ? (((arr_13 [i_0] [0] [i_3] [i_3] [i_9]) ? (arr_15 [i_9 - 1] [i_9 + 2] [i_3] [i_3] [i_3] [0] [4]) : var_0)) : 11));
                    var_30 = (max(var_30, ((((arr_32 [i_1 - 2] [i_1 + 1] [i_9] [i_9 + 2] [i_9 + 2]) + (arr_32 [i_1 + 2] [i_1 - 2] [10] [i_1 + 2] [i_9 + 1]))))));
                }

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_31 = -65525;

                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        var_32 = (var_11 & var_10);
                        var_33 ^= (((arr_23 [i_1] [i_11 - 1]) ? (arr_23 [i_10] [i_11 - 1]) : 10551));
                        arr_38 [i_11] [i_1] [i_11] [7] [4] = ((((var_12 ? var_1 : (arr_27 [i_11] [i_10] [i_3] [i_0] [i_0])))) ? (arr_28 [11] [i_1] [i_1 + 2] [i_1 - 1]) : (arr_26 [i_0] [i_10] [10] [i_10]));
                    }
                    arr_39 [i_0] [0] [0] [1] = ((!(arr_15 [i_1 - 3] [i_1] [i_1 + 2] [4] [i_1 - 1] [i_1] [i_1 - 1])));
                }
            }
            var_34 = (arr_2 [8] [i_1] [i_1 - 1]);
            arr_40 [i_1] [i_0] = ((((var_8 ? var_7 : var_3)) & (((!(arr_2 [i_0] [0] [i_0]))))));
        }
        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            var_35 *= (((((759099442 ? (arr_19 [i_12] [i_0] [i_12 - 2] [4] [i_0] [8]) : 1828961650417363237))) / -9733723359476661319));
            arr_44 [i_12] [i_12] = (((~var_7) ^ ((max(8191, (arr_11 [i_0] [1]))))));
            var_36 = (max(var_36, 194));
            var_37 = (((!4080) / (var_6 && -var_8)));
        }
    }
    var_38 = ((((var_2 ? var_3 : 24))));
    #pragma endscop
}
