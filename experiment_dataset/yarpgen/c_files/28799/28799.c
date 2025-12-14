/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (1 < -220921958);
                    arr_7 [i_0] [i_0] [i_0] [i_2] = var_9;

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_13 = (arr_0 [i_0]);
                        var_14 = (min(var_14, ((((((-((-(arr_11 [i_0] [i_1] [i_1] [i_1])))))) ? 94 : (max((arr_9 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0]), (((arr_10 [i_1] [i_1]) ? var_2 : var_8)))))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((min(((var_2 ? (~var_8) : ((max(118, -220921958))))), 41551)))));
                        var_16 &= var_7;
                    }
                }
            }
        }
    }
    var_17 = var_11;
    var_18 = (max(var_8, (13191614506809531248 & var_6)));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_19 = (arr_22 [i_5 + 1] [i_6 + 1] [i_6 + 1] [i_9 - 2]);
                                arr_26 [i_7] [i_7] [i_7] [6] = (((var_11 ? (arr_20 [i_5 + 1] [i_6 + 2]) : (arr_20 [i_7 + 1] [i_8]))));
                            }
                        }
                    }
                    var_20 += (min(var_5, (((82 | 33409) / (max(var_5, (arr_20 [i_5 - 1] [i_5])))))));
                    var_21 = ((~(max(var_7, (arr_22 [i_7 + 1] [i_6 - 1] [i_6 + 2] [i_5 - 1])))));
                    arr_27 [6] [i_6] [i_6] [i_6] = var_2;
                    arr_28 [0] [i_6] = ((((~(~var_3)))) ? (~var_5) : ((~((var_6 ? var_5 : var_8)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_22 = (max(var_22, ((max((~var_10), (((((-(arr_35 [i_11])))) ? (var_9 + var_11) : ((var_9 & (arr_31 [i_11]))))))))));
                    var_23 = (min(var_23, ((max((((~(arr_33 [i_10] [i_12])))), (arr_31 [i_10]))))));
                }
            }
        }
    }
    #pragma endscop
}
