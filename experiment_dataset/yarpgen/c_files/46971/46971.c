/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-((((min(var_12, var_3))) * (var_0 / var_10))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((!(~50574))) ? var_10 : (((arr_0 [9] [i_0]) ? ((1799445148 ? (arr_0 [i_0] [i_0]) : var_8)) : var_6))));
        var_16 = (max(((!((max(var_13, (arr_1 [15])))))), (!var_13)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((!((max(var_11, var_4))))) ? ((-(arr_0 [i_1] [i_1]))) : ((-17025 ? ((1421105611 ? (arr_6 [i_0] [i_0] [i_0]) : 0)) : (arr_4 [i_0] [i_1]))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 &= (arr_0 [i_0] [i_1]);
                        var_18 = (max(var_18, (23096 && 1755753613)));
                        var_19 = arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 2];
                        var_20 &= ((!(arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_12 [i_4] [8] &= (arr_9 [i_4] [16] [i_4] [i_4] [i_4]);
        arr_13 [i_4] [i_4] = ((4294967295 < 17050) / 8);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    arr_20 [i_4] = (max((~var_5), (max(((60811 ? 4739 : 576460752303423456)), ((max((arr_6 [i_4] [i_4] [i_4]), (arr_1 [i_4]))))))));
                    var_21 ^= (~4754);
                    var_22 ^= (((-(arr_9 [i_4] [i_4] [i_4] [i_4] [13]))));
                    var_23 ^= (!var_13);
                }
            }
        }
    }
    var_24 = 597729803493508904;
    #pragma endscop
}
