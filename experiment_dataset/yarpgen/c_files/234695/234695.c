/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_1, (~0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [1] [i_2] [i_0] = (((arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_0]) < var_3));
                                var_15 *= 1498821936;
                                var_16 = ((-(arr_2 [i_3 + 1])));
                                var_17 += (!var_0);
                                var_18 = 7;
                            }
                        }
                    }
                    var_19 = (((arr_11 [i_0] [i_1 + 1] [i_2] [i_2] [i_0]) ? (~36292) : ((((arr_5 [i_1]) > var_6)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 &= (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 2]);
                                var_21 = (max(var_21, var_5));
                                var_22 += var_10;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                {
                    var_23 = ((~(arr_18 [i_8 - 1] [4] [i_8] [i_8 + 1] [i_0] [i_0] [i_0])));
                    var_24 = ((!(arr_21 [i_8] [i_8] [i_8] [i_8 + 2] [i_0] [1])));
                    arr_29 [i_7] [i_7] [i_7] |= ((-(arr_20 [i_8] [i_7] [i_8 + 2] [i_8])));
                    arr_30 [i_0] = (-var_12 ? (arr_28 [i_8 + 1]) : ((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((arr_13 [i_0] [3] [i_7] [i_7] [i_8 - 1]) - 1376942848))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_25 = (arr_32 [i_9]);

        /* vectorizable */
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            arr_37 [i_9] [i_9] [i_10] = (((arr_33 [i_10 + 1]) ? (arr_33 [i_10 - 3]) : (arr_33 [i_10 - 1])));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_46 [6] [i_10] [i_10] [6] [i_12] [i_12 + 2] = (((((!(arr_42 [i_12] [i_11] [4] [9] [4])))) > (((!(arr_39 [8] [8] [i_9]))))));
                        var_26 |= var_12;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = -1498821936;
        var_27 = (min(var_27, (((-var_1 ? (arr_48 [i_13]) : 55155)))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
    {
        var_28 = 58;
        var_29 = (arr_47 [i_14]);
        var_30 = 1498821922;
        var_31 = ((-(var_3 - var_0)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        var_32 ^= -var_7;
                        var_33 = (arr_54 [i_16 + 1] [i_16 + 1] [i_16 + 1]);
                        var_34 = ((~(-127 - 1)));
                        var_35 = ((-(arr_57 [1] [i_16 + 1] [4])));
                        var_36 = 31;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            {
                arr_65 [i_18] [i_19] = var_7;
                var_37 = (-2147483647 - 1);
            }
        }
    }
    var_38 = (max(var_5, ((2147483647 ? -58 : var_3))));
    #pragma endscop
}
