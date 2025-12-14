/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((!(arr_1 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_1] [i_0] = (((19685 ? -1926233441 : -1926233441)));
                arr_10 [i_1] = (((((~var_1) + 2147483647)) >> (((arr_2 [i_0]) - 2280934285))));
            }
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_4 - 2] [i_5] [i_5] = (arr_0 [i_5] [i_5]);
                            arr_19 [i_5] [i_5] [i_5] [i_5] [6] = (arr_6 [i_1] [i_4 + 2]);
                        }
                    }
                }
            }
            arr_20 [i_1] [i_0] [i_0] = var_8;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {
                        arr_33 [i_8] [10] [4] [i_6] [i_0] = ((-1 ? var_3 : ((1926233444 ? (arr_24 [i_0]) : (arr_23 [2])))));
                        arr_34 [i_0] [i_0] [i_0] = ((arr_12 [i_8] [1] [i_6] [1]) % (arr_12 [i_0] [i_0] [i_0] [i_0]));
                        arr_35 [i_0] [i_0] [8] = (!var_0);
                        arr_36 [i_6] [i_6] = ((var_4 && (arr_29 [i_0] [i_8 + 2] [i_7] [i_0] [i_0])));
                    }
                }
            }
            arr_37 [i_0] [i_6] = ((-1926233441 != 1926233437) ? var_4 : (arr_25 [i_0] [i_6] [i_6] [i_6]));
        }
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            arr_41 [12] = 229;
            arr_42 [i_0] = min((((!(((arr_1 [i_0] [i_9]) && (arr_40 [i_0] [i_0] [i_9 + 2])))))), (((arr_22 [i_9 + 4] [i_9]) ? var_8 : (arr_38 [i_9 + 3] [i_9 + 4] [i_9 + 4]))));
            arr_43 [i_0] [i_9 + 2] = var_13;
            arr_44 [i_0] [i_9] [i_9 - 2] = (arr_22 [i_0] [i_9]);
            arr_45 [i_0] = 17763;
        }
        arr_46 [i_0] [i_0] = (((((max(228, (arr_1 [i_0] [6]))) ? (arr_25 [i_0] [i_0] [i_0] [i_0]) : (((var_0 ? 8937 : (arr_1 [i_0] [i_0]))))))));
        arr_47 [i_0] [i_0] = 4291;
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            arr_55 [i_11] [i_10] = var_13;
            arr_56 [i_10] [i_11 - 1] [i_10] = ((var_5 ? (arr_1 [i_10] [i_10]) : (arr_1 [i_10] [10])));
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 8;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {
                    arr_62 [9] [i_10] = (max((((((min(var_6, -759600876))) ? ((28114 ? var_10 : (arr_2 [i_10 + 1]))) : (((var_1 % (arr_54 [i_10]))))))), ((+((-14840 ? (arr_60 [i_10] [1] [i_12] [i_13]) : var_6))))));
                    arr_63 [i_10] = ((!(((var_13 ? (arr_54 [i_10]) : ((-(arr_23 [i_10]))))))));
                    arr_64 [i_10] [i_10] [i_13] [i_10] = (max((((!(~var_10)))), var_7));
                }
            }
        }
    }
    var_15 = ((((((((-75 ? 1926233458 : var_5))) ? ((759600857 ? var_0 : var_8)) : var_11))) ? (min((!var_0), ((var_10 ? var_0 : var_8)))) : ((min(var_7, (var_3 + 225))))));
    #pragma endscop
}
