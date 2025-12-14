/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (max(var_21, var_15));
                        arr_12 [i_0] [i_2] = (max(((((((4218827526 ? var_6 : 123))) >= var_13))), var_18));
                        var_22 = var_2;
                        var_23 = (((-874845328 <= (arr_9 [i_2]))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_2] [i_0] [i_4] = 133;
                        var_24 = (!var_14);
                        arr_16 [i_2] = var_5;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_25 = (~var_3);
                        arr_21 [3] [i_2] [3] [13] = (((arr_18 [i_2 + 2] [i_2 + 1] [i_5] [i_5]) ? (arr_18 [i_2 + 2] [i_2 + 2] [i_2] [i_2]) : (arr_18 [i_2 - 1] [i_2 - 3] [i_5] [i_5])));
                        var_26 = (max(var_26, (((!(((arr_3 [16]) != var_1)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_27 = (min(var_27, (arr_11 [10])));
                                arr_27 [i_2] [i_1] [i_2] [i_2] [i_7] [i_7] = ((((arr_18 [8] [i_1] [4] [i_1]) ? (((arr_19 [i_1] [i_2]) * var_16)) : var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
