/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (~(((var_5 ? (arr_2 [i_0]) : var_10))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 &= (arr_1 [i_1]);
                            arr_14 [i_0] [i_2] [i_1] [2] [i_3] = ((((max((arr_0 [i_1]), (arr_2 [i_2 + 2])))) ? var_1 : (arr_3 [i_3] [i_0])));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_18 = var_2;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 = (arr_8 [i_0] [i_5] [i_6 - 1] [i_0]);
                                arr_24 [i_0] [i_1] [i_4] [i_4] [i_6] = (((min((((arr_7 [i_6]) ? var_15 : (arr_6 [i_0] [i_0] [i_0]))), (((~(arr_3 [i_0] [i_6 - 2]))))))) ? (((!(arr_12 [i_6 - 2] [i_6 - 2])))) : ((((max((arr_8 [i_0] [i_5] [i_5] [12]), (arr_10 [i_0] [8] [11] [i_5] [9])))) ? var_0 : (((!(arr_16 [3] [i_4] [i_5])))))));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    var_20 = (((arr_22 [i_7 - 1] [i_1] [i_7 - 1] [i_0] [i_1] [i_1] [i_7 + 1]) || (arr_26 [i_7 - 2] [i_7] [i_7 - 1])));
                    var_21 &= ((~(((arr_12 [i_0] [i_1]) ? (arr_6 [i_0] [i_1] [i_7 - 2]) : (arr_2 [i_7 - 2])))));
                    arr_28 [i_7 + 1] [i_7 - 1] [12] = var_2;
                    var_22 &= (arr_11 [i_0] [i_0] [i_1] [i_1]);
                }
                var_23 = (max((arr_25 [i_1] [i_0] [i_1] [i_0]), (((!(arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            var_24 -= (min((((arr_21 [i_9 + 1] [i_8] [i_0] [i_0]) ? var_8 : var_0)), ((((min(1933496412, 0))) ? (max((arr_19 [i_0]), (arr_12 [i_1] [i_1]))) : (arr_25 [i_8] [i_9 + 1] [i_9 + 1] [16])))));
                            arr_34 [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] = ((min(((-(arr_9 [i_0]))), (max((arr_8 [i_9] [i_0] [i_9 + 1] [i_9 + 1]), (arr_13 [i_1] [i_8]))))));
                            arr_35 [i_9] [i_1] = var_15;
                            var_25 &= (((max((min(var_0, (arr_16 [i_9] [i_9 + 1] [i_9 + 1]))), (((-(arr_30 [1]))))))) && (((var_1 ? var_3 : (max(var_11, (arr_3 [i_1] [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_16;
    #pragma endscop
}
