/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [16] [1]) && (((-(arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((var_1 / (min((((~(arr_1 [i_0] [i_0])))), (((arr_0 [i_0]) & (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((arr_7 [i_1]) ? var_0 : (arr_7 [5]))))));
        arr_8 [i_1] = ((~(((arr_0 [i_1]) & (arr_0 [i_1])))));
        arr_9 [5] [5] = (((~var_2) ^ var_13));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 -= ((-var_11 / (arr_10 [18])));
        arr_12 [4] [0] = (arr_11 [i_2] [i_2]);
    }
    var_18 |= (min(var_2, var_5));

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_19 = (max(var_19, (((((!(arr_1 [i_3 + 2] [i_3 + 2]))) && (arr_14 [i_3 - 1]))))));
            arr_19 [i_3] = (((((arr_4 [i_3 - 1] [i_3 - 1]) && var_5)) && (arr_13 [i_3] [i_3])));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_26 [i_3] [i_3] [i_6] = ((((arr_6 [i_3 + 1]) ? (arr_6 [i_3 + 2]) : (arr_6 [i_3 + 1]))));

                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_20 = (arr_5 [i_3 + 3]);
                        var_21 = (arr_17 [i_3]);
                        arr_33 [i_3] [i_3] [i_5] [i_6] [i_3] [1] [i_8] = (arr_11 [i_3] [i_3]);
                        arr_34 [i_3] [i_3] [i_3] [i_7] = ((var_13 && (arr_11 [i_5] [i_7 - 1])));
                    }
                    var_22 = ((!(!var_7)));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_23 = ((~(arr_21 [i_3] [i_6])));
                    arr_37 [i_3] = ((min(((-(arr_13 [i_5] [i_3]))), (arr_13 [i_3 - 1] [i_3]))));
                }
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    var_24 *= (arr_38 [i_10 + 2] [i_5] [i_6] [i_10] [i_5] [i_5]);
                    arr_40 [i_3] [i_5] [i_3] [i_3] = ((+((((arr_32 [i_3] [10]) > (max(var_15, (arr_29 [10] [10] [10]))))))));
                    var_25 = (arr_4 [i_3] [i_3]);
                    arr_41 [i_3] [12] [i_5] [1] [i_10] [i_3] = (arr_24 [i_10 + 2] [i_3 + 2]);
                    arr_42 [i_3] [i_3] [i_3] [i_3] [i_6] [i_3] = ((!(arr_36 [i_5] [i_5] [i_3] [i_10])));
                }
            }
            var_26 = (((min(var_0, ((((arr_4 [i_3] [i_5]) && (arr_24 [i_3 + 1] [3])))))) / (((arr_22 [i_3] [4]) ? ((var_0 ? var_2 : (arr_0 [i_3]))) : ((min(var_9, (arr_24 [i_3 - 1] [i_5]))))))));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_27 = var_0;
            arr_45 [i_3] [i_3] [i_3] = (arr_27 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_11]);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_28 = ((((max((arr_10 [i_13 - 3]), (arr_5 [i_3])))) / var_6));
                            arr_53 [i_11] [i_3] [i_12] = ((~((~((~(arr_30 [i_13] [i_13] [i_3] [i_3] [i_14])))))));
                            var_29 = (max(var_29, ((max(12520790530564413259, ((((12520790530564413260 > var_14) - (max(var_0, var_2))))))))));
                        }
                    }
                }
            }
            var_30 = (((arr_4 [i_11] [4]) ? (arr_5 [21]) : var_3));
        }
        var_31 -= (min((arr_24 [12] [i_3 - 1]), 1352072652));
        arr_54 [i_3] = ((var_6 > ((~(arr_48 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 3])))));
    }
    for (int i_15 = 3; i_15 < 11;i_15 += 1)
    {
        arr_57 [i_15] |= ((var_8 / (((((-(arr_39 [i_15])))) ? var_12 : (arr_13 [0] [10])))));
        arr_58 [11] = ((~(min((arr_32 [i_15] [i_15 - 1]), (arr_32 [15] [i_15 + 3])))));
        var_32 = (arr_17 [2]);
        arr_59 [i_15] = ((arr_50 [i_15 - 1] [i_15] [0]) / (arr_50 [i_15 - 3] [i_15] [4]));
    }
    for (int i_16 = 2; i_16 < 9;i_16 += 1)
    {
        var_33 = 5925953543145138338;
        var_34 = ((+((((arr_15 [i_16 + 1]) && (arr_15 [i_16 + 2]))))));
    }
    #pragma endscop
}
