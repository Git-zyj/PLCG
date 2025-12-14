/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_10 = ((-((((var_7 ? 12210986841576978512 : var_4)) / 121))));
                    var_11 = (max(((12210986841576978512 ? (6235757232132573103 == 6235757232132573103) : var_1)), ((((arr_7 [i_0] [6]) <= (arr_3 [i_0 + 1] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_12 = (max((arr_13 [i_0] [3] [i_3] [i_1] [1]), (min((min(12210986841576978512, -32)), var_4))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = (((arr_11 [i_0] [i_0 - 1] [6] [i_1 - 3] [i_0 - 1]) * (max(4817, (var_6 / var_5)))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_13 = 5140183272313136621;
                        var_14 = ((((min(29995, (~var_5)))) ? (((((29170 ? (arr_2 [i_5] [5] [i_0]) : (arr_13 [i_0] [i_1 - 2] [i_3] [1] [i_5])))))) : ((~(arr_13 [i_0] [i_1] [3] [3] [i_0])))));
                    }
                    var_15 = (max(var_15, (((-(((!(((var_5 ? 6235757232132573103 : var_2)))))))))));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_16 = (((var_8 ? 0 : (arr_15 [i_0] [i_6] [i_7 + 4] [i_7 + 4]))));
                                var_17 = (!2641707184640735491);
                                var_18 = (arr_25 [i_0] [i_1] [i_0] [i_7] [4]);
                                arr_26 [i_0] [i_8 + 2] [0] [i_0] [i_8] [i_0 - 1] [i_0 - 1] = (-((((((arr_2 [i_8 + 2] [i_7] [i_0]) * (arr_9 [i_0] [i_1] [i_0] [i_8]))) > 15805036889068816149))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_19 = (((((~(arr_28 [i_0] [i_1] [i_0] [i_9])))) / var_0));
                                var_20 = (~14335783799016742658);
                                var_21 = (max(var_21, ((((((12210986841576978516 ? 15805036889068816149 : (arr_11 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))) ? (!6235757232132573103) : (var_0 & -var_6))))));
                            }
                        }
                    }
                    var_22 = (max((arr_9 [i_0] [i_1 + 2] [i_1 + 1] [i_6]), (arr_24 [i_6] [2] [i_1] [9] [7])));
                }
                var_23 = (((!((max(-1, var_6))))) ? (((((var_1 ? (arr_28 [i_0] [i_1 + 2] [i_0] [i_0]) : (arr_19 [6] [i_1] [i_1])))) ? (arr_13 [i_0] [i_0 - 1] [i_1 + 2] [i_1] [i_1]) : var_8)) : (((~(var_7 || 1)))));
                var_24 = ((((max((arr_28 [i_1] [i_1 + 1] [i_0] [i_1]), 508349183474878226))) ? ((((var_7 != (arr_28 [i_1 - 1] [i_1 - 2] [i_0] [i_1]))))) : ((7245484632587460256 ? -445449881 : var_9))));
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
