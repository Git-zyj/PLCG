/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_15;
        arr_5 [i_0] = (((arr_1 [i_0]) / var_2));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_17 *= (arr_7 [12] [12]);

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_12 [i_1] [i_1 + 3] [i_1] = (arr_8 [i_1 - 2] [i_2 - 1]);
                arr_13 [i_0] [9] [i_1] = var_14;
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_4] [i_3] [i_4] &= -601413722189503920;
                        arr_19 [5] [i_1] [i_3] [i_1] = -601413722189503920;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_18 = (((var_10 ? var_12 : (arr_6 [i_5] [i_0]))) | ((-(arr_17 [i_5] [i_5] [i_5] [i_0]))));
            var_19 = (~(arr_8 [i_0] [i_5]));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_20 = ((!(((arr_20 [i_0] [i_5] [i_6]) <= var_13))));
                        var_21 = ((-(arr_15 [0] [i_5] [i_6])));
                        var_22 = (i_6 % 2 == 0) ? ((((arr_26 [i_6]) << (((arr_23 [i_6] [i_6] [i_5] [i_6]) - 14259705598086586199))))) : ((((arr_26 [i_6]) << (((((arr_23 [i_6] [i_6] [i_5] [i_6]) - 14259705598086586199)) - 1383029670843613494)))));
                        var_23 = (max(var_23, ((((arr_2 [i_6]) ? (arr_22 [i_5]) : (arr_2 [i_0]))))));
                        var_24 = (((((arr_15 [i_0] [i_6] [i_7]) < 601413722189503933)) ? (arr_6 [i_0] [i_7]) : -601413722189503930));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_25 = (arr_2 [i_8]);
            var_26 = (arr_14 [i_0] [i_8] [i_8]);
            arr_30 [i_8] [i_8] [i_8] = (-(arr_15 [i_8] [i_0] [i_0]));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_27 = -601413722189503953;
                        var_28 = (!var_10);
                        arr_36 [i_0] [i_8] [i_8] = var_14;
                        arr_37 [i_9] [4] |= -601413722189503934;
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
    {
        var_29 = min(((~(arr_39 [i_11] [i_11]))), var_11);
        var_30 += ((8887500334004464379 ? 601413722189503933 : 601413722189503915));
        var_31 ^= (max(((((((arr_8 [i_11] [i_11]) | var_5)) ^ var_8))), (((arr_2 [i_11]) ? (arr_39 [i_11] [i_11]) : ((-601413722189503938 ? var_15 : (arr_28 [i_11] [12] [i_11])))))));
        var_32 = (((!((max(var_15, -3))))));
        var_33 = (max(var_33, -601413722189503938));
    }
    #pragma endscop
}
