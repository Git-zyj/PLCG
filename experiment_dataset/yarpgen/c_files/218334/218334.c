/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_10 * ((((max(18446744073709551612, var_10))) ? var_13 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (arr_6 [i_0] [i_1])));
                            arr_10 [i_0] [10] [i_0] = (((((~(arr_5 [1] [3] [3] [0])))) ? (((((arr_6 [i_0] [i_1]) == (arr_4 [i_0] [i_1] [i_0]))))) : (max(18446744073709551596, -1))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_4 [i_0] [i_1] [i_1]) ? ((((-var_5 || ((((arr_3 [i_1] [3] [i_1]) ^ (arr_3 [1] [i_1] [i_2])))))))) : (((1 && 1) ? ((var_11 ? 6200312532417105987 : (arr_9 [i_0] [i_0] [i_2]))) : var_9)));
                        }
                    }
                }
                var_16 = (-(arr_2 [i_0] [i_0] [i_0]));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_17 = (((-9223372036854775807 - 1) ? (arr_17 [i_4 + 1] [i_4 + 1]) : (arr_17 [i_4 - 1] [i_4])));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_18 = (max(var_18, (((!(arr_14 [i_4 - 1]))))));
                            arr_26 [i_4] [i_5] = ((((((arr_25 [i_7]) - (arr_25 [11])))) ? (((var_0 ? var_8 : 15094))) : (~281337537757184)));
                            arr_27 [i_5] = (((arr_20 [i_5] [i_5] [i_5] [i_7 + 1]) != var_10));
                        }
                        arr_28 [4] [i_5] = var_2;
                        arr_29 [i_4] [i_5] [i_7] [6] |= -var_12;
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_33 [i_5] [i_5] = 0;
                        var_19 = ((!(((-(min(var_13, (arr_30 [i_9] [13] [10] [1] [10] [i_4]))))))));
                        arr_34 [i_5] = 0;
                        var_20 *= ((!(arr_32 [i_4])));
                    }
                    arr_35 [i_5] [i_6] [i_5] = ((arr_18 [15] [i_5] [i_6] [15]) ? (arr_18 [i_4 + 1] [i_5] [i_5] [i_6]) : (arr_18 [i_6] [i_5] [i_4 - 1] [i_4 - 1]));
                    arr_36 [0] [i_5] [i_5] [i_4] = (arr_14 [i_6]);
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
