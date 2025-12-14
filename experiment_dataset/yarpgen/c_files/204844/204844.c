/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((((((((17685 | (arr_6 [i_0])))) ? 5 : var_5))) ? (arr_7 [i_0] [0]) : (((((((-32767 - 1) ? 8 : var_6))) ? (arr_1 [i_0]) : (arr_8 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = ((((((min((arr_0 [i_0]), 92))) ? ((3155024856 ? (arr_7 [i_0 - 1] [i_0]) : (arr_4 [i_0]))) : (((var_17 ? var_1 : (arr_0 [i_4]))))))) ? var_13 : ((((((max((arr_14 [i_0] [i_0]), -9637))) == var_0)))));
                                arr_16 [11] [i_1] [i_1] [1] [11] = (((((arr_4 [i_0 + 2]) * (arr_4 [i_0 + 2]))) * (((arr_4 [i_0 - 2]) * (arr_4 [i_0 - 2])))));
                                var_20 = var_12;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [7] [7] = (min(-2, 150));
                        var_21 = ((((-(max(var_10, (arr_9 [i_0] [i_1] [i_1] [i_2])))))) ? 103 : (((~125) ? (arr_10 [i_0 - 2] [i_0] [i_0 - 2] [i_0]) : (arr_11 [i_0] [i_0] [12] [i_5] [i_5]))));
                        arr_20 [i_5] [i_2] [i_1] [i_0] [i_0] = (215 ? 10 : -10954);
                        var_22 = ((!(arr_2 [i_0 + 1])));
                        var_23 = (((((((127 ? (arr_8 [i_2]) : var_5)) * var_6))) ? (-9223372036854775807 - 1) : (arr_5 [i_0] [i_0 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
