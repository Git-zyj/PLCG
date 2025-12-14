/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -995851260;
    var_20 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((0 + ((~(arr_3 [i_0]))))))));
                    var_22 &= (((arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : -17));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_23 -= var_13;
                        arr_11 [13] [i_2] [i_1] [i_0] = var_13;
                        var_24 = var_1;
                        arr_12 [i_0 + 1] [i_1] [3] [i_1] = (((arr_7 [i_0 + 1] [i_1] [1] [i_3]) / (arr_7 [11] [11] [i_2] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_17 [0] [i_1] [i_2] [i_4] = -var_6;
                        var_25 = var_1;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_21 [7] [5] [19] [i_4] [i_4] [i_4] [5] = ((!((((-9223372036854775807 - 1) ? 0 : var_1)))));
                            arr_22 [20] [i_2] [i_1] = ((((((arr_20 [12] [i_0 + 1] [i_0] [i_0 - 1] [i_0]) ? (arr_4 [i_4]) : 97))) ? 1762937315 : ((var_3 ? 9223372036854775807 : var_5))));
                            var_26 = (min(var_26, (((0 ? var_17 : (arr_4 [i_0 - 1]))))));
                            var_27 = (((arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]) ? 2704935530 : (arr_14 [i_0 + 1])));
                        }
                    }
                    arr_23 [i_0] [i_0] [i_1] [i_1] = -20388;
                }
            }
        }
        var_28 = ((-9223372036854775807 - 1) ? (arr_5 [i_0] [i_0] [19]) : 28672);
    }
    #pragma endscop
}
