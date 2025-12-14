/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
            arr_6 [i_0] [i_0] = ((+(((arr_2 [i_0] [i_0]) ^ (max((arr_2 [i_1] [i_0]), (arr_2 [10] [10])))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_19 &= (min((arr_13 [5] [i_1] [i_2]), (((var_8 && (arr_8 [i_0] [i_0] [i_2] [i_3]))))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = 20183;
                            var_20 = (+(((arr_4 [i_0] [i_0]) ? (((!(arr_3 [i_3])))) : ((var_6 ? (arr_0 [i_4]) : (arr_3 [i_2]))))));
                            arr_15 [i_0] [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_0] = (((var_2 | var_17) ? (!45361) : var_3));
                        }
                    }
                }
            }

            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                var_21 = ((255 ? 45348 : 247));
                arr_18 [i_0] = ((((((var_5 ? var_5 : var_14))) || var_2)));
                var_22 = (max(var_22, var_6));
            }
            var_23 = (((max(-15062279199034383965, (45348 - 4))) == (((((((arr_1 [i_0]) ? 52536 : var_7))) * (max((-9223372036854775807 - 1), 21)))))));
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_22 [0] [i_0] = ((!(((+((((arr_8 [i_0] [i_0] [i_0] [i_6 - 1]) == var_4))))))));
            var_24 = -20183;
            arr_23 [i_0] [i_0] = ((((var_16 + 14) - 0)));
            var_25 = (min(var_25, var_3));
        }
        var_26 -= -25218;
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {
        arr_27 [i_7] = (~20668);
        var_27 = ((~(arr_12 [i_7 + 1])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                {
                    var_28 = (((arr_9 [i_8] [i_9] [i_10 + 1] [i_10] [i_9]) >> ((((((-64 ? (-9223372036854775807 - 1) : (arr_30 [i_8] [i_9] [i_9]))) - -9223372036854775777)) + 86))));
                    arr_36 [i_8] [i_8] [i_8] = ((3384464874675167673 ? (4792901381858425765 != 45353) : ((var_8 / (arr_17 [i_9] [i_9] [i_9] [i_9])))));
                }
            }
        }
        arr_37 [i_8] = (((((arr_21 [i_8] [4] [i_8]) ? var_6 : 32759)) / (arr_21 [i_8] [i_8] [i_8])));
        var_29 = ((var_8 ? (arr_33 [i_8] [i_8] [i_8] [0]) : (arr_33 [i_8] [i_8] [i_8] [i_8])));
        var_30 = ((((4215275995 ? 35 : 237)) << (((arr_26 [1]) - 31366))));
    }
    var_31 = ((((min(var_11, var_11))) - var_3));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    var_32 = ((min((arr_43 [2] [i_12] [i_13] [i_12]), 562949953404928)));
                    var_33 -= (~0);
                    arr_45 [i_13] [i_12] [i_11] = ((~((3594279482839213831 ? (((34334 >> (225 - 217)))) : ((-18109 ? var_1 : var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
