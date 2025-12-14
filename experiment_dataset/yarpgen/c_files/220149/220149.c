/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = (max(var_20, -9223372036854775785));
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((min(((-5134 ? var_0 : (arr_2 [i_0])), -28014))));
                var_22 = (-9223372036854775807 - 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_23 = (min(((-((min(var_15, var_16))))), 0));
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [10] |= ((1 ? ((-31169 ? 0 : 203)) : (((!1) ? ((31169 ? 1531783992674230469 : (arr_9 [i_3] [i_0] [i_0] [i_0]))) : var_3))));
                            arr_13 [i_0] [i_0 + 1] [i_0] [i_3] [i_0] = ((~(6 & 18446744073709551615)));
                        }
                    }
                }
                var_24 = (min(var_24, (((((255 ? (arr_6 [i_1] [i_1 + 2] [i_0 + 2]) : 18446744073709551615)) & var_16)))));
            }
        }
    }

    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_25 = (((var_12 * 6595489405431453453) ? (1 * 1) : ((-(arr_15 [i_4] [i_4 - 1])))));
        var_26 = (max(var_26, ((max(var_7, (!11851254668278098157))))));
        var_27 = var_0;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_28 -= (((var_16 >= 0) > var_2));
                        var_29 += -7832583877233056159;
                        arr_22 [i_4] [i_4] [i_4] [i_7] [i_5] [i_4] = ((((((~32704) ? var_7 : ((~(arr_19 [i_5])))))) ? (((8 ? 157 : 18446744073709551615))) : (((((5434171552980069618 ? var_18 : (-9223372036854775807 - 1)))) ? (arr_15 [i_4 - 1] [i_4 - 2]) : var_7))));
                        var_30 = ((((17854948774159796259 ? 9673393793379362010 : 236)) / (arr_17 [i_5] [i_4 - 1] [i_5])));
                    }
                }
            }
        }
        arr_23 [i_4] [i_4] = var_18;
    }
    #pragma endscop
}
