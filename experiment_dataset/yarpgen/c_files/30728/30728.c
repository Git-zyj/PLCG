/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 |= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (max(var_13, (arr_3 [i_1])));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_6 [i_0] = (((((((((arr_5 [i_2] [i_0] [6] [i_0]) ? var_7 : var_15))) ? (((arr_3 [i_1]) ? (arr_0 [2]) : (-2147483647 - 1))) : (arr_0 [i_0])))) ? (var_13 | -32) : (arr_2 [i_0] [i_0])));
                    arr_7 [i_1] |= (((arr_4 [i_2] [i_1] [i_0]) ? (arr_2 [5] [i_2]) : ((-(32640 + 239)))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((((arr_9 [i_0] [i_5 - 2] [i_3]) / (arr_9 [i_4] [i_5 + 2] [i_3])))) ? (arr_9 [i_4] [i_5 - 2] [i_3]) : (((min((arr_9 [i_3] [i_5 - 2] [2]), (arr_9 [i_0] [i_5 + 1] [i_3]))))))))));
                                var_24 = (arr_14 [i_5 - 2] [i_5 - 2]);
                            }
                        }
                    }
                    var_25 = (arr_2 [i_0] [9]);
                    arr_17 [i_0] [i_0] [i_3] = var_8;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [5] [i_0] [i_0] = ((-(((arr_10 [i_0] [i_1] [i_7] [i_6]) ? var_15 : 2))));
                                var_26 = var_10;
                                var_27 *= (((arr_0 [i_0]) ? ((((arr_5 [i_0] [9] [i_0] [i_7]) & (arr_16 [i_7] [i_6] [4] [4] [i_1] [4])))) : (max((min((arr_5 [i_0] [4] [i_6] [i_6]), (arr_15 [i_3] [i_1] [i_0]))), ((16384 ? (arr_20 [3]) : (arr_15 [i_0] [5] [i_3])))))));
                                var_28 *= ((min(var_5, 9)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
