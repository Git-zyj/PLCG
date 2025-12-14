/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [8] = ((((((arr_0 [i_0 - 4] [i_0 - 4]) <= (arr_0 [i_0 - 4] [i_0 - 1])))) | (((arr_0 [i_0 - 1] [i_0 - 2]) - var_9))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        var_12 = (max(3, 3787372972));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = (((((arr_6 [1]) & var_0)) | (((arr_5 [i_1 - 2] [i_1 - 3]) - ((-(arr_1 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_14 = var_7;

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_15 = (((((max(var_10, var_7)))) ? (((0 ? 52 : 1723815132137435225))) : var_4));
                            arr_17 [i_4] [i_2] [1] [i_3] [i_4] [i_4] [i_3] = ((var_2 ? ((((arr_15 [i_1] [i_3] [i_4] [i_5]) || ((min(515964315, var_8)))))) : ((98 ? var_2 : var_11))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_16 = (((arr_7 [i_1 + 1] [i_3 + 3]) ? (arr_7 [i_1 - 4] [i_3 + 1]) : (arr_7 [i_1 - 3] [i_3 + 3])));
                            var_17 = (((arr_14 [i_3 - 4] [i_2 + 1] [i_1] [i_1 - 1]) ? (var_0 | 32) : ((var_4 ? (arr_14 [i_1] [i_2 + 1] [1] [10]) : (arr_1 [i_1] [i_2])))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_18 *= (((arr_10 [i_1 - 3] [i_1 - 3] [i_3 - 1]) * (((min((arr_19 [i_1 - 4] [i_2 + 1] [i_3 - 4]), (arr_12 [i_1 - 1] [i_2 + 1] [i_2 + 1])))))));
                            var_19 = (((((max(var_5, var_1))) + 2147483647)) << (((((var_10 / (arr_18 [i_1 + 1] [i_2] [i_3 + 3] [i_4] [i_7])))) - 7805417001)));
                            var_20 = ((min((max((arr_15 [i_2] [i_3] [i_4] [i_7]), var_3)), ((max(var_1, var_7))))));
                            var_21 = ((-(min((arr_22 [i_1 + 1] [8] [i_1] [i_1] [i_1]), (((arr_14 [i_2] [i_2] [10] [i_2 + 1]) ? (arr_22 [i_7] [i_7] [i_3 + 1] [i_4] [i_7]) : var_7))))));
                        }
                        var_22 = (min((-32767 - 1), (arr_18 [i_1 + 1] [i_1] [i_2 + 1] [i_2] [i_3 + 3])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_31 [i_8] = ((~(arr_30 [i_8] [i_8] [i_8])));
            var_23 = ((((arr_28 [i_9]) ? var_0 : var_4)));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        var_24 = (arr_36 [i_10 - 3] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1]);
                        arr_37 [i_8] [i_10] [i_10] [i_10] [i_11] = (((var_7 >= var_7) || (-32767 - 1)));
                        var_25 = (arr_36 [i_10 - 3] [0] [i_10 - 1] [i_11] [i_11]);
                        var_26 = (arr_30 [i_10 - 2] [i_10 - 2] [i_10 - 1]);
                    }
                }
            }
            var_27 = var_7;
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_40 [i_8] [16] [i_12] = ((-(arr_25 [i_12])));
            arr_41 [i_12] [i_12] [i_12] = var_4;
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_46 [i_8] [i_13] = var_10;
            var_28 = var_3;
        }
        var_29 = var_0;
        arr_47 [i_8] [i_8] = (arr_42 [i_8]);
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 14;i_14 += 1)
    {
        var_30 = (((arr_35 [i_14] [i_14 - 1] [i_14] [i_14 + 1]) ? var_8 : (arr_35 [i_14] [i_14 - 1] [13] [i_14 + 1])));

        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_31 = (((arr_45 [i_14 + 1]) ? (arr_25 [i_14 - 1]) : (arr_33 [4] [i_14] [4])));
            var_32 ^= (((((-66 ? (arr_29 [i_14] [i_14]) : 274844352512))) ? (((arr_29 [1] [1]) ? (arr_26 [6]) : (arr_33 [i_14] [i_15] [8]))) : ((0 ? var_10 : -2087652513))));
        }
        for (int i_16 = 1; i_16 < 12;i_16 += 1)
        {
            arr_54 [i_14] [i_14] [i_14] = (((!(-2147483647 - 1))) ? 1994681622 : (arr_42 [i_14 + 1]));
            arr_55 [i_14] [i_16] = var_2;
            var_33 = var_7;
        }
    }
    var_34 = (min((min((var_2 + var_5), var_9)), var_2));
    var_35 = ((((max(19, -23241))) || -30219));
    var_36 = var_1;
    #pragma endscop
}
