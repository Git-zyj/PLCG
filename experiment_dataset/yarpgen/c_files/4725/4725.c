/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_1 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_21 = (min(var_21, ((((arr_2 [i_1 + 1]) ? ((var_5 >> (var_6 - 52124))) : (var_0 | var_5))))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_22 = (((((var_18 ? (arr_7 [i_3] [i_3]) : (arr_3 [i_0] [i_1 + 1])))) ? var_6 : (arr_13 [i_0] [2] [i_2] [i_4 - 2] [0])));
                        var_23 = (((arr_3 [i_0] [i_0]) > (arr_3 [i_3] [i_3])));
                    }
                    var_24 &= (((arr_6 [i_1 - 1]) | var_0));
                    arr_14 [i_0] [5] [1] [16] |= (arr_13 [4] [i_2] [i_1 - 1] [i_3] [i_2]);
                    var_25 = var_15;
                    var_26 = (-32767 - 1);
                }

                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    var_27 = (((arr_16 [i_1 + 1] [i_1 - 1] [i_5 + 2]) ? (arr_16 [i_1 + 1] [i_1 - 1] [i_5 - 2]) : (arr_16 [i_1 - 1] [i_1 - 1] [i_5 - 2])));
                    arr_19 [i_0] [i_1] [i_2] [i_2] = ((((var_12 != (arr_0 [12]))) ? 1 : var_16));
                    arr_20 [17] [17] [9] = var_11;
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_28 += var_12;
                    var_29 = var_18;
                    var_30 *= (263882790666240 && 32766);
                }
                var_31 = (((((-32757 || (-32767 - 1)))) ^ (((arr_13 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_2]) | -32748))));
            }
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_32 ^= (var_9 > var_15);
            var_33 = (arr_11 [i_0] [i_7] [i_0] [i_0]);
            var_34 = var_1;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_35 = (arr_6 [i_7 + 3]);
                        arr_34 [i_0] [i_7 - 1] [i_8] [i_9] = ((1 % -15088) == 50);
                        var_36 *= ((var_2 & (arr_16 [i_7] [i_7 - 2] [i_7 + 1])));
                    }
                }
            }
        }
        var_37 = (max(var_37, 0));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    {
                        var_38 = (min(var_38, (arr_30 [i_0] [5] [i_11])));
                        arr_44 [i_0] [16] [16] [i_10] [16] [i_0] = (((((((arr_11 [13] [0] [13] [i_0]) ? -5873 : var_1)) <= 1)) || ((((arr_29 [13] [i_10] [i_11] [i_11]) / (arr_4 [3]))))));
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = var_17;
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_39 = ((((((arr_26 [i_13]) ? (~var_12) : (var_12 / 50)))) ? (min(((-(arr_47 [i_13]))), (arr_15 [9] [i_13] [i_13] [i_13] [4] [i_13]))) : (14730 && var_18)));
        arr_49 [13] [i_13] = (((((arr_5 [1] [i_13] [15]) ? (arr_5 [i_13] [i_13] [i_13]) : (arr_5 [i_13] [i_13] [i_13]))) != ((((arr_38 [i_13] [i_13] [i_13]) && 0)))));
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 8;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                {
                    var_40 ^= ((32742 ? 2402120036 : var_0));
                    var_41 = ((var_2 ? var_17 : (((((~(arr_42 [i_15] [i_15] [i_16] [i_14]))) * ((var_8 ? var_8 : (arr_47 [i_14]))))))));
                }
            }
        }
    }
    var_42 ^= (((((-(var_11 && -27842)))) ? ((((((var_11 ? var_1 : var_1))) < var_10))) : var_8));
    #pragma endscop
}
