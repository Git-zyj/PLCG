/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [6] = var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [7] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                    arr_10 [i_0] &= 4;
                    arr_11 [i_0] [i_0] [i_0] [i_2 + 1] = var_11;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((154 ? 1 : 7158610445576116605))) ? 83 : 123));
                        arr_15 [7] [i_1] [i_1] [i_3 - 2] [i_3] = var_9;
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        arr_19 [16] [i_4] [4] [16] [1] = (arr_16 [i_2] [i_2 - 2] [i_2 - 2] [i_4 + 1] [i_4]);
                        arr_20 [i_4] = (arr_4 [i_0] [i_0] [i_0]);
                        arr_21 [i_4] = ((2 ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : ((~(arr_5 [i_1] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_25 [1] [1] [i_2] [i_5] = ((min((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_2 [4] [4]))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_29 [i_6] [i_5] [i_2] [i_2] [i_2 + 1] [i_1] [i_0] = ((-(arr_18 [i_0] [i_1] [12] [i_1])));
                            arr_30 [i_0] [i_0] [i_0] = var_3;
                            arr_31 [i_0] [i_0] [8] [i_5] [i_6] = (((arr_16 [i_0] [i_0] [2] [i_0] [1]) ? ((((arr_1 [i_0]) < (arr_7 [i_0] [11] [i_2])))) : (((((-127 - 1) <= (-127 - 1))) ? (24 <= 127) : ((min(var_0, (-127 - 1))))))));
                        }
                    }
                }
            }
        }
        arr_32 [i_0] [i_0] = ((~((1 ? 106 : 127))));
        arr_33 [i_0] = (((arr_27 [i_0]) ? ((((var_2 ? 32256 : var_11)) * ((((arr_16 [10] [i_0] [16] [i_0] [10]) >= 76))))) : ((((arr_28 [i_0] [i_0]) || ((max((arr_24 [i_0]), 3131627404))))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_38 [i_7] = (((((-127 - 1) ? 123 : (((((-127 - 1) + 2147483647)) << (((((-127 - 1) + 159)) - 31)))))) << ((0 ? var_8 : (var_0 > var_12)))));
        arr_39 [i_7] [i_7] = ((((max((arr_1 [i_7]), (arr_1 [i_7])))) == (var_6 >= var_7)));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_50 [i_11] [4] [4] [i_9] [i_11] [i_8] = ((((((((-122 ? 105 : -122))) ? (((108 == (arr_27 [i_10])))) : -113))) ? (((((-127 - 1) ? -122 : 70)) ^ -122)) : (arr_6 [i_8] [i_9] [i_8] [i_11])));
                        arr_51 [i_9] [i_11] [i_8] [i_9] [i_9] [i_9] = ((+(((arr_23 [i_8] [i_8] [7] [i_11] [i_11] [i_11]) ? var_5 : (122 || 32580)))));
                        arr_52 [i_9] &= ((((123 ? (((min(var_5, var_4)))) : (min((arr_23 [i_8] [1] [7] [12] [7] [i_8]), var_2)))) << ((((arr_26 [i_8]) > ((var_7 ^ (arr_7 [i_9] [i_10] [i_10]))))))));
                    }
                }
            }
        }
        arr_53 [12] = ((-((((((-127 - 1) ? -121 : 122))) ? (arr_5 [i_8] [i_8]) : -122))));
    }
    var_14 = (((((-var_2 ? (var_1 || -95) : var_12))) ? (max(((min(var_12, var_10))), ((var_3 << (((var_1 + 29539) - 9)))))) : var_6));
    var_15 = (((~((min(var_6, var_2))))));
    #pragma endscop
}
