/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((var_7 ? var_9 : (var_3 >= var_8))))));
    var_12 = ((!(((((min(var_3, var_3))) ? var_9 : (~40263))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (((((((((arr_2 [i_1] [i_0] [i_0]) ? (arr_0 [i_0]) : -562154714))) ? ((-30868 ? 121 : (-127 - 1))) : var_0))) ? (max(((max(25273, 1))), (min((arr_0 [10]), (arr_0 [i_1]))))) : ((max(((~(arr_3 [i_1]))), ((-(arr_3 [i_1]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = var_0;
                                arr_15 [i_1] [6] [i_1] [i_3] [5] = ((var_4 ? (arr_8 [i_1] [i_1] [i_2] [i_3]) : (arr_13 [i_1])));
                            }
                        }
                    }
                    var_14 = (max(var_14, (((-(((arr_12 [i_0] [i_1] [i_2] [i_2] [10] [i_2]) ? 8145 : var_6)))))));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        arr_20 [i_6 - 1] [i_1] [i_5] [i_1] [i_0] = (((arr_18 [i_1] [i_5]) ? (arr_9 [i_1]) : (((arr_9 [i_1]) | 2044))));
                        arr_21 [i_6] [8] [i_1] [i_1] [i_1] [i_0] = (((arr_3 [i_1]) <= ((var_9 ? (arr_10 [i_6] [i_1] [i_5] [i_1] [i_1] [i_0] [i_0]) : var_9))));
                        var_15 -= ((var_4 ? (arr_7 [i_6] [i_6] [i_6 + 1] [i_5 + 2] [i_0 + 1] [i_0]) : (arr_13 [i_6])));
                    }
                    var_16 -= ((-75 ? (arr_13 [14]) : (arr_8 [i_5 - 3] [12] [12] [i_0 + 1])));
                }

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_25 [i_1] [i_1] [i_1] = (max(((min((arr_22 [i_1] [i_1] [i_0 + 1] [i_7]), (min(var_4, 6384))))), ((var_4 ? ((((arr_13 [i_1]) ? 15260 : (arr_9 [i_1])))) : (min(var_5, (arr_8 [i_7] [i_1] [i_1] [i_0])))))));
                    arr_26 [i_1] = (((((-(arr_3 [i_1])))) ? var_2 : (arr_24 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    arr_29 [i_0 - 1] [i_1] = (((((var_8 ? 2543768221030200097 : (arr_3 [i_1])))) ? var_1 : -14231));
                    arr_30 [i_1] = -var_6;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_17 = ((~(min(((min(135, (arr_3 [i_1])))), ((var_3 | (arr_12 [i_0] [i_0] [i_1] [i_9] [i_1] [i_1])))))));
                    var_18 = (min(var_18, ((min(8406041840110213464, 27275)))));
                    var_19 = (min(var_19, (((-((var_9 ? (arr_13 [6]) : (arr_23 [i_1] [i_1] [i_0] [i_0]))))))));
                }
                var_20 = ((((min(((var_3 ? var_4 : (arr_31 [i_1] [i_0] [i_1]))), (arr_22 [i_0 + 1] [i_0] [i_0] [i_1])))) ? ((max((var_8 + var_10), ((14342 + (arr_23 [i_0] [i_1] [i_0] [i_0])))))) : ((var_10 ? (min(var_6, var_1)) : (((152 ? (arr_6 [i_1] [i_0] [2] [i_1]) : (arr_24 [i_0 + 1] [i_0 + 1] [i_1] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
