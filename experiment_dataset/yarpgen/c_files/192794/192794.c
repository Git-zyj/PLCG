/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((var_7 % (arr_5 [i_0]))))));
                arr_8 [i_1] [i_1] = (min(((((((arr_0 [i_0]) / (arr_5 [i_1])))) ? (((arr_3 [i_1]) ? (arr_5 [i_0]) : (arr_5 [i_1]))) : ((min((arr_4 [i_1]), (arr_3 [i_0])))))), (((arr_6 [i_0]) / var_8))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_13 [i_1] [10] [i_2 + 1] = ((-((~(arr_1 [i_0])))));
                    arr_14 [i_1] [i_1] [0] [i_1] = (arr_11 [i_0] [i_0] [i_1] [i_2]);
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_18 [i_1] [i_0] [i_0] = (((min((min((arr_6 [i_0]), (arr_17 [i_0] [i_0] [i_1] [i_0]))), (((arr_2 [i_3]) ? (arr_16 [i_1] [i_1] [i_1] [i_0]) : (arr_6 [i_0]))))) < ((min(((max((arr_15 [i_0] [i_1] [i_0]), (arr_1 [i_0])))), (((arr_4 [i_1]) ? (arr_10 [i_0] [2] [i_0] [2]) : var_8)))))));
                    arr_19 [i_0] [i_1] = (((((((arr_17 [i_0] [i_1] [i_1] [i_3]) ? var_12 : (arr_0 [i_0]))))) ? (min((arr_10 [i_0] [i_1] [i_3] [i_1]), (arr_10 [i_0] [i_0] [i_0] [i_0]))) : (arr_9 [i_1])));
                    arr_20 [i_1] [i_1] [i_1] = ((!(((((var_10 || (arr_4 [i_1]))) ? (arr_6 [7]) : 12249)))));
                    var_14 = ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_0])))) ? (((arr_6 [i_1]) >> (((-32767 - 1) + 32801)))) : (arr_6 [i_0])));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_15 |= (max(var_10, (arr_11 [i_4] [i_4] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, 6964163054396134367));
                                var_17 &= (max(var_5, 72));
                                arr_32 [i_0] [i_0] [i_4] [i_4] [i_1] [i_6] = ((((min((!-15), var_2))) ? ((max((arr_31 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_31 [i_5] [i_1] [i_4] [i_4] [i_0])))) : ((((arr_10 [5] [5] [i_5] [10]) <= (arr_22 [i_0] [i_1] [i_4] [i_0]))))));
                            }
                        }
                    }
                    var_18 = ((-(arr_1 [i_0])));
                    arr_33 [i_0] [i_1] [i_4] = (arr_27 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4]);
                    var_19 = (((arr_16 [i_0] [i_0] [i_1] [i_0]) ? (max((arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]), (max((arr_27 [i_4] [i_1] [i_4] [i_1] [i_1] [i_0]), var_12)))) : 10));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_20 |= (max(-9866455576171007491, (((arr_34 [i_0] [i_0]) ? (arr_34 [i_0] [i_0]) : var_0))));
                        var_21 = min((((7 == -25507) > var_2)), ((!((-23530 >= (arr_15 [i_1] [i_1] [i_8]))))));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_22 = max(((max(((max((arr_12 [9] [i_1] [i_7]), (arr_23 [i_0] [i_0] [i_0])))), (arr_0 [12])))), (min((arr_35 [i_0] [i_1] [i_7]), (arr_25 [i_7] [i_1] [i_7] [i_9]))));
                        var_23 = (arr_12 [i_0] [i_7] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_46 [i_1] [i_0] [i_1] [2] [i_7] [i_10] = (min((((~(arr_40 [i_0] [i_0] [i_1] [i_7] [i_10])))), (((arr_40 [i_0] [i_1] [i_7] [i_7] [i_10]) ? var_8 : 3580231644959904437))));
                        var_24 += (min(((~((10 ? (arr_3 [i_1]) : 17)))), ((~(arr_43 [i_0] [i_0] [4])))));
                        arr_47 [i_10] [i_1] [i_0] = (((arr_12 [i_1] [i_7] [i_10]) & ((min(0, -22)))));
                    }
                    var_25 -= max(((-(((arr_35 [i_0] [i_0] [i_7]) ? 3389224610690367866 : (arr_31 [i_0] [i_0] [i_0] [i_1] [i_7]))))), (((((min(-22790, 444))) | (((arr_6 [i_0]) ? (arr_15 [i_0] [i_1] [i_7]) : var_5))))));
                    var_26 = (((max(52, -31))));
                }
                arr_48 [i_0] [i_1] [i_1] = (min((~-19620), ((max(0, -2263)))));
            }
        }
    }
    #pragma endscop
}
