/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_18 = (max(var_18, var_14));
                            arr_12 [i_0] = (arr_2 [i_4] [i_0] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_19 ^= var_13;
                            var_20 = (((((var_8 ? var_8 : (arr_10 [i_0] [i_1 + 1] [i_3] [i_1 + 1] [i_5] [i_3])))) ? (arr_14 [i_5] [i_3] [i_3] [i_2] [i_2] [3] [i_0]) : var_0));
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_21 *= ((((var_10 ? var_1 : (arr_17 [1] [1] [i_2] [1] [i_2])))) ? (((arr_1 [i_0] [i_1]) ? var_3 : var_13)) : (var_12 * var_0));
                            var_22 &= -209731874;
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_0] = (((!var_11) ? (arr_18 [i_0]) : (arr_1 [i_3 + 2] [i_2 + 3])));
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_23 [i_0] [i_0] = ((var_15 ? (((104 >> (((arr_19 [i_0] [2] [i_0] [i_7] [13] [i_7] [i_7]) - 628537626))))) : ((var_12 ? var_12 : var_5))));
                        var_23 = (min(var_23, (arr_11 [i_0] [15] [i_2] [5] [i_0] [i_2] [i_7])));
                    }
                    arr_24 [i_0] [i_0] [i_2 + 3] = ((((max((((var_8 ? (arr_22 [11] [i_1] [i_2 + 3]) : var_6))), (((arr_14 [i_0] [4] [i_1] [i_1] [i_1 - 1] [11] [14]) ? var_3 : (arr_4 [i_0] [i_1 - 1] [i_1 - 1])))))) ? (arr_4 [i_2 + 1] [i_1 + 2] [i_0]) : (((min(var_13, var_10))))));

                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        var_24 *= var_16;
                        arr_27 [i_0] [i_1] [i_0] [i_0] [i_1] = (max((((!var_11) << (var_16 < var_6))), (((arr_1 [i_1] [i_8]) ? (((arr_22 [11] [14] [11]) ? var_2 : var_4)) : ((((arr_18 [16]) < var_10)))))));
                        var_25 = ((((min((((arr_7 [i_0] [i_0] [14] [i_8 - 1] [11] [7]) ? var_12 : var_5)), var_9))) ? (((!(arr_4 [i_0] [i_1 - 1] [i_8 - 2])))) : ((~((var_14 ? var_16 : var_12))))));
                    }
                }
            }
        }
    }
    var_26 = var_8;
    #pragma endscop
}
