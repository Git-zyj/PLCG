/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 -= var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = ((var_8 ? var_13 : ((-(arr_0 [i_0 - 1])))));
                                var_17 = ((0 << (-1882 + 1906)));
                                var_18 = (min(var_18, (((var_1 ? (max((arr_15 [i_2 + 2] [i_0 - 1]), (arr_15 [i_2 - 1] [i_0 + 1]))) : var_3)))));
                                var_19 = var_2;
                            }
                        }
                    }
                    var_20 = (max(var_20, (arr_4 [i_2 + 2] [7] [i_0 - 1])));
                    var_21 = var_13;
                    arr_16 [1] [1] [1] [11] = (((arr_3 [i_1]) ? ((min((arr_3 [i_0 - 1]), (arr_3 [3])))) : (((arr_3 [12]) ? (arr_3 [i_0 + 1]) : (arr_13 [1] [10] [12] [14] [4])))));
                }
            }
        }
    }
    var_22 = (((max(var_6, var_13)) ? var_1 : var_6));

    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_23 = (((((arr_18 [i_5] [20]) ? (((arr_20 [13]) ? (arr_18 [i_5] [9]) : (arr_19 [2]))) : var_11))) ? (max((((arr_20 [20]) ? (arr_20 [8]) : (arr_18 [i_5] [17]))), (((var_9 > (arr_17 [i_5])))))) : (~var_8));
        var_24 ^= var_11;
        var_25 -= ((-(((!(((var_13 ? (arr_19 [8]) : var_9))))))));
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_26 ^= (((((((min(0, 4294967295))) ? 2147483647 : ((1267543538702652543 ? 642750415 : 2147483647))))) || ((max((arr_22 [11]), var_13)))));
        var_27 = (min((((((arr_22 [15]) >> (var_9 - 49))) << (((arr_21 [i_6 - 1] [i_6 - 1]) - 1703897412)))), ((~(arr_21 [i_6 + 3] [10])))));
        var_28 = min((((var_1 || (!var_11)))), ((((var_13 && (arr_22 [19]))) ? (arr_23 [i_6 - 1]) : (arr_23 [i_6 - 2]))));
        var_29 = arr_23 [7];
    }
    for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_30 = (((((var_11 ? var_7 : var_1))) ? ((min((arr_23 [i_7 - 2]), (arr_23 [i_7 - 2])))) : ((min((max((arr_25 [19]), (arr_25 [5]))), (arr_23 [1]))))));
        var_31 = (max(var_31, (((4294967295 ? (((!var_0) ? (arr_25 [i_7 - 2]) : ((var_12 ? (arr_23 [14]) : (arr_23 [16]))))) : ((var_4 ? (arr_24 [11]) : (arr_22 [i_7 + 1]))))))));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    {
                        var_32 = (min((arr_33 [18] [i_9 - 1] [14] [i_11 - 1] [11] [13]), (((arr_29 [i_9 - 4]) & (arr_29 [i_9 - 4])))));
                        var_33 = (arr_28 [i_9 + 3]);
                        arr_35 [9] [15] [5] [9] [0] = ((-((((var_11 ? var_2 : var_7)) * (arr_33 [8] [18] [14] [i_11 + 1] [9] [21])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_34 = var_9;
                    arr_43 [i_12] = (max(var_10, (max((arr_31 [11] [9] [1]), (arr_31 [22] [17] [19])))));
                    var_35 = (arr_39 [i_12]);
                }
            }
        }
    }
    #pragma endscop
}
