/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((((((((65535 ? 65516 : 12649223179914390818))) ? var_10 : var_17))) ? var_5 : ((var_11 ? ((var_16 ? var_16 : var_0)) : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((var_3 ? var_7 : (arr_4 [i_0] [i_1] [i_0 - 1])))) ? ((var_13 ? 5797520893795160805 : var_14)) : ((var_19 ? (arr_2 [i_0 + 1] [i_0 - 2]) : var_2))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] = ((((((arr_4 [i_0] [i_1] [i_2]) ? (arr_1 [i_0]) : 12649223179914390818))) ? (arr_2 [i_0] [i_1]) : var_0));
                    arr_9 [i_0] [i_1] [i_1] = (((arr_3 [i_0] [i_0 - 2] [i_2]) ? 5797520893795160799 : var_3));
                    var_21 = (((arr_2 [i_0 + 1] [0]) ? -1353163759 : var_19));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_22 = (((arr_2 [i_0 - 1] [i_1]) ? (((arr_0 [9]) ? (arr_1 [i_0]) : (arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0]))) : ((19 ? -3 : (arr_1 [i_3])))));
                    var_23 = ((156 ? 1 : 65522));
                }
                arr_13 [i_1] [i_1] [i_0] = (((((var_4 ? 1 : var_1))) ? (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : 110)) : ((var_13 ? var_12 : var_1))));
                arr_14 [i_1] = (((((3887111171981884046 ? var_15 : (((12 ? 2189204695 : 0)))))) ? ((var_16 ? var_1 : var_14)) : ((var_16 ? (arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0]) : 0))));
                arr_15 [i_0] [i_0] [i_1] = ((((((arr_11 [i_0 - 1] [i_1] [i_1] [15]) ? 32844 : var_18))) ? (((arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_1]) ? var_15 : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))) : (((60635 ? (arr_11 [i_0 + 2] [9] [i_1] [i_0]) : (arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
