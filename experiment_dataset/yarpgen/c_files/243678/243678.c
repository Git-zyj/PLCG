/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (((~var_10) | (min(((var_3 ? var_9 : var_7)), var_4))));
    var_13 = (min((((((var_9 ? var_6 : var_1))) ? var_1 : var_0)), (((-var_5 ? ((2097151 ? var_2 : -21146)) : var_10)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_14 = (arr_1 [i_0]);
            var_15 = (((63 || (arr_3 [i_0] [i_1] [11]))));
            var_16 += arr_1 [i_1];
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 = var_1;
                            arr_14 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_4] [i_1] = (((arr_4 [i_1]) != (((arr_4 [10]) ? (arr_2 [i_2] [i_3] [i_4]) : var_7))));
                            var_18 *= ((66 ? 511 : ((((arr_4 [i_1]) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_10 [i_0] [i_1] [9] [i_3] [i_3] [i_4]))))));
                            arr_15 [i_1] [7] [i_2] [i_0] [1] [i_0] [i_2] = (((arr_4 [8]) ? var_1 : 7846438121797463945));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_19 = arr_6 [i_0] [i_0 + 2] [i_0] [i_0];
            arr_19 [i_0] [i_5] = ((((arr_6 [i_5] [i_5] [i_0] [i_0]) ? var_6 : (arr_8 [i_0]))));
            arr_20 [i_0] [i_5] = 86;
        }
        var_20 = (min(var_20, ((~(arr_12 [12] [i_0 + 1])))));
        var_21 = (((arr_9 [i_0 - 1] [i_0]) ? (arr_9 [i_0] [i_0 + 2]) : (arr_9 [i_0 + 1] [i_0 - 1])));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_22 = (((arr_9 [i_0 - 1] [i_0 + 2]) * (arr_9 [i_0 + 2] [i_0 + 1])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        var_23 = (((((arr_27 [i_8] [i_6] [i_0 + 2]) && (arr_25 [i_0] [i_6] [i_7] [i_7]))) ? var_10 : 2198184901));
                        arr_30 [i_0] [1] [18] [6] = (((arr_24 [i_0]) ? (arr_24 [i_0]) : 131071));
                        arr_31 [i_0] [i_0 + 1] [i_0] = ((var_5 ? (arr_24 [i_8 + 2]) : (arr_24 [i_8 - 1])));
                        var_24 = (max(var_24, (~-25)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    {
                        var_25 = ((66 ? 58 : 2013622094));
                        var_26 = (((~4) != (((arr_21 [i_9] [i_10]) ^ var_6))));
                    }
                }
            }
            var_27 = (max(var_27, (((157 ? (arr_37 [i_0 - 1] [i_0 + 1] [i_0 - 1]) : 135)))));
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
        {
            var_28 = (((arr_39 [i_0 - 1] [i_0 + 2]) ? (arr_39 [i_0 - 1] [i_0 + 1]) : (arr_39 [i_0 - 1] [i_0 + 2])));
            var_29 = var_2;
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            var_30 = (arr_36 [i_0] [i_0 + 2] [15] [i_12] [i_12]);
            arr_43 [i_0 - 1] [17] = ((~(arr_28 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0] [1])));
            var_31 = (((arr_39 [i_0 + 1] [i_0 - 1]) ? 65520 : (arr_39 [i_0 + 1] [i_0 - 1])));
        }
        arr_44 [i_0] = var_7;
    }
    for (int i_13 = 3; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_32 = (max(var_32, (arr_39 [i_13 + 1] [i_13])));
        var_33 = (+-2198184932);
        arr_47 [i_13] = 131070;
    }
    for (int i_14 = 3; i_14 < 14;i_14 += 1) /* same iter space */
    {
        var_34 = (((((min((arr_10 [i_14] [i_14] [21] [i_14] [i_14] [i_14]), 4294836225)))) ? ((((arr_11 [i_14 - 1]) ? (arr_11 [i_14 - 1]) : var_0))) : (max((max(-7483723118980694985, (arr_18 [i_14] [4]))), ((min(56, var_9)))))));
        var_35 += (arr_39 [i_14] [i_14]);
        var_36 = ((~((((min((arr_5 [i_14] [1] [5]), (arr_11 [5])))) ? (3031694312065754604 && var_9) : ((131071 ? (arr_41 [i_14]) : (arr_13 [i_14 - 2] [i_14] [i_14 + 1] [i_14] [i_14])))))));
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 16;i_16 += 1)
            {
                {
                    var_37 = ((((-(arr_23 [i_14] [i_14 + 3] [i_15])))));
                    var_38 = ((min(131066, var_9)));
                    var_39 = (arr_23 [19] [12] [i_16]);
                }
            }
        }
        var_40 = (max((min(2281345195, 47)), (arr_46 [i_14 + 2] [i_14])));
    }
    #pragma endscop
}
