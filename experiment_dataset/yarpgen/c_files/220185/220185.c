/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = (3 + 3932160);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (!var_0)));
                                var_17 -= (12 / var_4);
                                var_18 = 1;
                                var_19 = (max(var_19, (((var_3 - (-3932161 - var_14))))));
                            }
                        }
                    }
                    var_20 = (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 24 : (arr_0 [i_0])));
                    var_21 = (((((18446744073709551615 ? (arr_5 [3] [i_1] [1] [i_0]) : 1))) ? (((arr_2 [11] [i_0]) + 1)) : 0));
                    var_22 = ((0 | ((var_5 ? 10 : 0))));
                }
                var_23 &= (max((((~(min(var_4, 1))))), (((arr_6 [i_0] [17] [17]) & (((-1 ? 6 : (-2147483647 - 1))))))));
                var_24 = (((!0) ? (max(var_3, ((0 ? var_6 : var_7)))) : (!var_8)));
                arr_11 [10] |= var_14;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_21 [i_5] [i_5] [17] [i_6] = 1;
                    arr_22 [i_6] [i_6] &= (((-1 || (arr_15 [i_6]))) || ((max(var_13, 7))));
                }
            }
        }
    }
    var_25 += ((var_12 ? (((((12 ? (-9223372036854775807 - 1) : 4503582447501312))) ? ((var_11 ? var_9 : var_14)) : ((1 ? (-127 - 1) : 127)))) : ((var_14 ? var_5 : var_6))));
    #pragma endscop
}
