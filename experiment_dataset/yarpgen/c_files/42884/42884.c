/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_0);

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_18 -= (max((((!(!var_12)))), -31772));
        arr_2 [i_0] = ((22467 && ((min(((((arr_0 [i_0]) ^ (arr_1 [i_0])))), (((arr_0 [7]) ? var_4 : -1462065735)))))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((-31772 ? (min(43068, (arr_3 [i_1] [i_1]))) : (((-(arr_4 [i_1 - 1]))))));

        for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    {
                        var_19 *= (-31772 >> ((((!(arr_13 [21] [i_3] [i_3] [i_3]))))));
                        arr_14 [i_1] [i_2] [i_2] [i_4] [i_3 + 1] = (min((((arr_4 [i_1 + 1]) ? (max(var_3, (arr_13 [i_1] [i_2] [3] [i_4]))) : (arr_10 [i_4] [i_4 - 2] [i_4] [i_4]))), ((min(1902268905, 1)))));
                        arr_15 [i_1] [i_2 - 2] [i_2] [i_4] = var_8;
                        var_20 = var_5;
                        var_21 = ((-(((((1902268905 ? -1902268905 : (arr_8 [16] [i_2] [i_3] [i_3])))) ? 0 : (((((arr_8 [i_1] [i_1] [1] [i_4]) >= var_16))))))));
                    }
                }
            }
            var_22 = (min(var_22, (arr_7 [i_1] [12] [i_1])));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    arr_24 [i_5] [i_6] [i_5] [i_5] = (3688785347 | 24576);
                    var_23 &= 0;
                    arr_25 [i_1 + 1] [i_1 + 1] [i_6] [i_1] = 31752;
                }
                var_24 = -211;
            }
            arr_26 [18] [i_5] = (((arr_13 [18] [18] [18] [i_1]) >> (((arr_11 [i_1] [i_1] [i_1] [i_5]) - 29384))));
            var_25 = (min(var_25, (((~(arr_10 [8] [8] [i_5] [i_1]))))));
        }
        for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_37 [19] [i_8 - 3] [i_8] [i_10] [i_8] [i_8] [3] = (((((min(45, 43074))) ? var_12 : (arr_21 [i_11 + 1] [i_11]))));
                            var_26 = ((((1902268886 ? var_5 : (var_14 != 28672))) ^ (arr_31 [i_1] [i_9] [i_10] [i_11])));
                        }
                    }
                }
            }
            arr_38 [i_1 - 2] = (((arr_33 [i_1 - 1] [i_1 - 1]) ? (((((22473 ? 4503599627369984 : 1790008679)) != (arr_28 [i_1 - 1])))) : var_1));
            var_27 = ((~(((arr_16 [i_8 - 2]) ? (arr_16 [i_8]) : var_2))));
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_41 [i_12] = 2797753841;
        arr_42 [i_12] |= (arr_11 [i_12] [i_12] [i_12] [i_12]);
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 11;i_15 += 1)
                {
                    {
                        var_28 = (arr_45 [0] [i_14] [i_15 + 1]);
                        arr_49 [i_14] [i_13] [i_14] [1] = (((((-((((arr_12 [i_12] [i_13 + 2] [i_14] [5]) <= -4693168409839116789)))))) ? ((24576 ? 4294967232 : (((3871 ? 11 : 57806))))) : var_11));
                    }
                }
            }
        }
        var_29 = (max(var_29, (((-((var_4 ^ (arr_32 [2] [i_12]))))))));
    }
    var_30 = (((((30303 ? 153 : -21428))) ? ((var_2 ? 170 : ((var_16 ? var_16 : var_10)))) : (((var_9 ? var_9 : ((var_3 ? var_13 : 21)))))));
    var_31 = (var_0 || 53924827);
    #pragma endscop
}
