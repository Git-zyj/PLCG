/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((arr_0 [i_0]) ? (arr_2 [i_0] [i_1]) : ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_1])))) ? (arr_1 [4] [i_1]) : (((arr_3 [i_1] [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : var_0)))))))));
                arr_5 [23] [i_0] = (((arr_0 [i_0]) ? ((var_3 ? (((arr_4 [i_0]) ? (arr_3 [i_0] [i_0] [1]) : (arr_2 [i_0] [i_0]))) : var_1)) : (arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 |= var_15;
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = (arr_3 [i_0] [i_0] [i_2]);
                            var_18 -= ((((((arr_7 [i_0] [i_1] [i_1] [i_3]) ? ((-5712991728358078014 ? 15756450914417320731 : 2147483647)) : var_9))) ? (arr_1 [i_3] [i_1]) : (arr_6 [i_0] [i_1] [i_2] [i_3])));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4 + 1] [i_4 + 1] = (var_5 ? (arr_9 [i_4 + 1] [i_4 + 2] [i_4] [i_4]) : (arr_9 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4]));

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_19 = (max(var_19, ((((arr_2 [i_4 - 2] [i_4 + 2]) ? (arr_2 [i_4] [i_4 - 2]) : (arr_19 [i_4 + 2]))))));
            var_20 = ((arr_16 [i_5] [i_4 + 2] [9]) ? (((arr_9 [i_4 - 2] [16] [i_4] [i_4]) ? (arr_6 [i_5] [i_4] [i_4] [i_4]) : var_15)) : ((var_13 ? var_15 : var_1)));
            arr_20 [i_5] = (arr_4 [i_5]);
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                var_21 = (max(var_21, var_10));
                arr_28 [i_7 + 2] [i_6] [i_4] = arr_3 [i_4] [i_7] [i_7];
                arr_29 [i_4] = (((arr_6 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 - 1]) ? (arr_7 [i_4 + 2] [i_4 - 2] [i_4] [i_4 - 1]) : var_11));
            }
            arr_30 [i_4] [i_4] = (((arr_27 [i_4]) ? (((arr_22 [i_4 + 2] [i_6]) ? var_6 : (arr_17 [i_6] [11] [i_4]))) : (arr_8 [i_4] [i_4 - 1] [i_6])));
            var_22 = (arr_21 [i_4]);
            arr_31 [i_4] = (arr_23 [i_4]);
        }
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8 - 2] [12] = arr_1 [1] [i_8 + 2];
        var_23 = (((((var_4 ? 1 : 7624))) ? (arr_25 [i_8 - 1] [i_8 - 2]) : (arr_25 [i_8] [i_8 - 2])));
        var_24 = (719024349272003257 ? -5342618298491127937 : 16317064006155303221);
        var_25 = (min(var_25, (arr_17 [15] [i_8] [i_8])));
    }
    #pragma endscop
}
