/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((((max(var_0, var_10))) ? var_0 : var_2)), var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [9] [14] = ((((((((var_15 ? var_8 : var_17))) ? (((arr_3 [i_0]) / var_12)) : (var_10 || var_15)))) ? (max((var_9 / var_0), (arr_5 [i_1 + 2]))) : (arr_4 [i_0] [i_1 + 2])));
                arr_7 [i_0] [1] = 3951714315;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = var_12;
                            var_20 = ((((min((arr_13 [i_3 + 1] [i_1 - 2] [i_3 + 1] [i_3]), (arr_13 [i_3 - 1] [i_1 - 2] [i_2] [1])))) ? -var_5 : (((var_15 ? (arr_5 [i_1 - 1]) : (arr_11 [i_1 + 2]))))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_21 = (max(var_21, ((((~var_15) ? (~var_4) : var_15)))));
        arr_16 [i_4] [9] |= ((((((arr_14 [i_4]) | var_8))) ? (((arr_15 [i_4] [i_4]) ? (arr_14 [i_4]) : (arr_14 [i_4]))) : var_12));
        arr_17 [0] = (arr_15 [i_4] [14]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_4] = ((var_0 ? (arr_22 [i_7] [i_7] [i_7]) : ((var_8 ? var_6 : var_16))));
                        var_22 += ((var_14 || (((var_13 ? -2199023255552 : var_12)))));
                    }
                }
            }
        }
    }
    var_23 = ((((((var_4 ? var_6 : var_5)) | var_12)) >= (((9045575786604820928 ? 718942015 : 6126)))));
    #pragma endscop
}
