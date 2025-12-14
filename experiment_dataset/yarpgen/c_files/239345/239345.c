/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~var_14) == (max(4294967295, var_3)))) ? (((var_3 ? (!7930479394094364210) : 88))) : (((var_9 || var_3) ? ((7 ? var_7 : -7930479394094364219)) : (var_3 != 16777200)))));
    var_16 = var_2;
    var_17 = 9;
    var_18 = (min(var_1, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [6] [i_1] [i_0] [i_0] = ((var_6 ? (((arr_4 [i_2] [i_1] [i_0]) ? (arr_2 [i_0]) : var_5)) : ((((arr_7 [i_0]) > var_12)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = (arr_3 [i_0] [12]);
                                var_19 = ((~(arr_1 [i_4])));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_20 *= ((118 << (((arr_8 [i_0] [i_1] [i_0] [i_0]) - 224))));
                    var_21 = (max(var_21, ((((((16777200 ? (arr_11 [i_1]) : (arr_2 [i_0])))) ? (((arr_4 [i_0] [i_1] [i_5]) ? (max(7930479394094364210, 5048)) : (((-(arr_6 [17] [i_0])))))) : (((max((arr_18 [i_5]), (arr_18 [i_0]))))))))));
                }
                for (int i_6 = 4; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_6] [2] [i_6] = ((((-(arr_2 [i_6 - 2]))) == (arr_12 [i_0] [i_0] [i_0])));
                    var_22 = (max(var_22, (((-5048 ? (((max(var_4, (arr_6 [i_0] [i_1]))))) : 255)))));
                    arr_22 [i_6] = (min((((arr_14 [i_6 + 1] [15] [i_6 + 1] [i_6 - 3] [i_6]) % 1)), (((arr_14 [i_6 - 4] [i_6 - 4] [i_6 + 1] [i_6 - 2] [i_6]) ? 1 : (arr_14 [i_6 - 2] [8] [i_6 - 4] [i_6 - 2] [i_6 - 4])))));
                    arr_23 [i_0] [i_1] [i_6] [11] = (min((arr_16 [i_0] [i_1] [i_6 + 1] [i_1]), ((((31 | (arr_18 [i_0]))) ^ var_13))));
                }
                for (int i_7 = 4; i_7 < 18;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_28 [i_0] [1] [2] [1] [i_8] [1] = (arr_3 [i_1] [i_8]);
                        arr_29 [i_8] [i_0] [i_8] [i_8] [i_0] [i_0] = ((((!(arr_16 [i_7] [i_7] [i_7] [i_7 - 4]))) ? ((min((((87 / (arr_1 [i_7])))), (((arr_24 [i_0] [i_0] [i_7] [i_8]) ? (arr_14 [i_0] [18] [18] [i_0] [10]) : -7930479394094364212))))) : 4278190096));
                    }
                    arr_30 [i_0] [i_0] [13] = ((((arr_11 [i_7 - 1]) | (arr_11 [i_7 - 3]))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_35 [i_1] [i_1] [i_10] = var_6;
                            arr_36 [13] [i_1] [i_9] [i_1] [i_9] = ((((((max(1, (-127 - 1))))) | (arr_33 [i_0] [i_1] [i_9] [i_9] [i_1]))));
                            arr_37 [14] [i_10] = ((max((max(7930479394094364212, (arr_5 [i_0]))), (arr_12 [3] [i_1] [i_1]))));
                        }
                    }
                }
                var_23 = (((arr_11 [i_1]) + 5048));
            }
        }
    }
    #pragma endscop
}
