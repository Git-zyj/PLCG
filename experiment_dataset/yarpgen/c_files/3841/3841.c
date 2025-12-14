/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [15] [i_1] [i_2] [i_1] [i_0] = ((!(((var_1 << (562949953421280 - 562949953421249))))));
                                var_15 = (min(var_15, ((((((-32767 - 1) + 2147483647)) << (65408 - 65408))))));
                            }
                        }
                    }
                }
                var_16 = var_6;
                var_17 = ((!(((arr_11 [i_0] [i_0] [i_1] [i_0] [i_0]) && (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_18 += (max((((arr_18 [i_7]) ? (((arr_14 [i_5 - 2]) ? (arr_13 [i_5]) : 138)) : (arr_13 [i_7]))), (arr_18 [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_17 [i_7] [i_7] [i_7])));
                                var_20 = (((max((arr_14 [i_5]), ((8343351890134254834 - (arr_17 [i_5] [19] [i_5]))))) ^ (((((arr_23 [i_5 - 2] [i_6] [i_5 - 2] [i_8] [i_9]) <= ((128 ? -8343351890134254858 : -8343351890134254858))))))));
                                var_21 += (max(((max((!var_7), (((arr_22 [16] [7] [i_6] [i_5 + 1]) && (arr_19 [i_9] [i_8 - 3] [19] [i_6])))))), (arr_20 [i_7] [i_9] [i_7] [i_8 - 2] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            {

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    arr_33 [i_11] [i_11] [i_11] [i_11] = (arr_25 [i_11 - 1]);
                    arr_34 [i_12] [i_12] [i_12] = (arr_11 [i_10] [i_10] [i_12] [i_12] [i_12]);
                    var_22 = (min(var_22, (arr_31 [i_10] [i_11] [16] [i_10])));
                }
                var_23 += (((arr_8 [i_10] [10] [10] [i_10]) ? (~12472366003424466029) : var_5));
            }
        }
    }
    #pragma endscop
}
