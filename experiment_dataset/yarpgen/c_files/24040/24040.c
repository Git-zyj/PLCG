/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_11 = (((((535822336 >> (((121 + var_3) + 294932926))))) ? (!121) : 30947));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((!((116 || (121 && var_2))))))));
                                arr_14 [16] [16] [14] [16] [1] [i_3] = (arr_5 [i_1] [i_1]);
                                var_13 = (min(var_13, (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                    arr_15 [i_1] = (((max(var_2, var_7)) + (((114 ? (arr_13 [i_2] [i_0 + 1] [2] [i_2] [10]) : (arr_13 [i_2] [i_0 - 1] [2] [1] [1]))))));
                    var_14 = (max((((((arr_12 [i_2] [i_2] [i_2] [i_2] [8]) ? 121 : 0)) >> ((1 >> (121 - 94))))), (min(var_0, -7))));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [12] = (arr_5 [i_0] [i_0]);
                    var_15 = var_9;
                    arr_20 [i_0] [3] [i_0] [1] = (arr_8 [i_1] [i_1]);
                    var_16 = ((min(var_2, -1913651050)));
                    var_17 ^= var_7;
                }
                arr_21 [i_0] = (((-115 + 2147483647) >> (-102 + 113)));
            }
        }
    }
    var_18 = var_9;
    var_19 = ((((var_0 * 101) ? var_5 : (18446744073709551615 - 0))));
    var_20 = (max(var_20, var_9));

    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_21 = (min(var_21, var_2));
        arr_25 [1] [1] = (arr_0 [i_6]);
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_22 += (((((arr_26 [i_7]) >> (((arr_27 [i_7]) - 790803972)))) * ((1 ? ((max((arr_10 [i_7] [2] [0] [8]), (arr_23 [17])))) : (arr_29 [5] [5])))));
        arr_30 [1] = (((!var_2) ? ((((var_1 >> (var_10 - 1049004385))))) : (((arr_6 [4]) * 1228508376))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = var_7;
                        arr_41 [9] [0] [1] [6] [i_8] [1] = var_8;
                        var_23 = (((!(!4))));
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_24 = var_5;
            var_25 ^= 4;
        }
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_26 = (((((~(arr_32 [i_13] [i_13])))) ? -1 : (((((arr_10 [4] [18] [1] [18]) ? var_5 : var_0)) >> (((var_10 / var_8) - 36019))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                {
                    var_27 = var_7;
                    var_28 *= (((((arr_11 [2] [16] [24] [2] [2] [2]) ? (((arr_51 [8] [8]) ? (arr_5 [i_13] [2]) : (arr_47 [4]))) : (arr_26 [9]))) >> (((((((3066458921 ? var_2 : var_4))) ? var_5 : (131071 || 3066458919))) - 4165829238))));
                }
            }
        }
        var_29 += (min((!var_3), (~-357859131103063944)));
    }
    #pragma endscop
}
