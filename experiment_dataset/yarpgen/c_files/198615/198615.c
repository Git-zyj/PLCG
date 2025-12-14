/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((((arr_1 [i_2]) - (arr_1 [i_2]))));
                    var_14 = ((((32256 ? var_7 : (arr_4 [i_2] [i_2])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 -= ((-(var_11 ^ 0)));
                        var_16 = (((((1 - (arr_2 [i_0] [15])))) ? ((var_0 ? var_7 : (arr_6 [i_1]))) : (arr_0 [i_0] [i_2])));
                    }
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((((-(((arr_0 [i_0] [i_0]) * var_6)))) / (((((-(arr_3 [i_0] [i_1])))) ? ((var_11 ? (arr_7 [i_2] [i_1] [i_0]) : var_3)) : ((16383 ? (arr_2 [i_0] [i_0]) : (arr_8 [i_2] [i_1] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_17 = ((-((((max(var_2, var_7))) ? (min(var_0, var_8)) : (var_2 <= var_6)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_18 = (((((((arr_12 [i_4]) ? (arr_4 [i_5] [i_5]) : (arr_7 [i_5] [12] [13]))))) ? (max(-32241, ((-(arr_3 [i_5] [i_5]))))) : (arr_4 [i_5] [6])));
                var_19 += arr_14 [i_5];
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                var_20 = (arr_0 [i_4] [i_4]);
                                arr_25 [i_4] [i_4] [i_6] [i_6] [i_8] = (((((((((arr_5 [i_7] [i_6] [i_6] [i_4]) ? (arr_22 [i_4] [i_4] [i_4] [i_6] [i_6] [i_4] [i_8]) : (arr_22 [i_4] [1] [i_6] [i_6] [1] [i_4] [i_8])))) ? var_3 : (arr_13 [i_8])))) ? (arr_20 [i_5] [i_6] [i_7] [i_8]) : (((!(arr_23 [i_4] [i_4] [i_4] [i_4] [1]))))));
                            }
                            var_21 += (arr_3 [i_4] [i_5]);
                            arr_26 [i_4] [i_6] = ((~(((arr_18 [i_7]) ? (((arr_0 [i_4] [i_4]) ? var_3 : (arr_16 [i_4] [i_5] [i_4] [i_4]))) : ((((arr_8 [i_4] [i_4] [i_6] [i_7]) >= var_0)))))));
                        }
                    }
                }
                arr_27 [i_4] |= (((1 || 62) % (max(((1 ? (arr_20 [i_4] [i_5] [i_5] [i_5]) : (arr_22 [1] [i_4] [1] [i_5] [i_5] [i_4] [i_5]))), (arr_13 [i_4])))));
            }
        }
    }
    #pragma endscop
}
