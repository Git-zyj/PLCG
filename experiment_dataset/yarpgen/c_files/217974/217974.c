/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(-127 - 1)));
    var_14 = ((min(1, ((-46 ? 128 : 2026250290)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 ^= (arr_0 [i_0] [i_1]);
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_3] = (((arr_12 [i_0] [i_1 + 2] [i_0] [i_3]) ? (((((-9223372036854775807 - 1) ? var_7 : var_2)) / var_8)) : (((((arr_13 [i_0 - 1] [i_3] [i_4] [i_1 + 2] [i_1 + 2]) < var_2))))));
                                arr_18 [i_3] = var_5;
                                arr_19 [i_3] = 2959740677;
                                var_16 = ((-(((((var_5 ? (arr_5 [i_0 - 1] [i_3]) : 1335226619))) ? (6 & var_11) : (arr_5 [i_1] [i_1])))));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        var_17 = (max(var_17, ((min((((-var_3 ? (arr_7 [i_2] [i_2 - 4] [i_2 - 1] [i_2 - 1]) : ((-(arr_11 [i_0] [i_1] [i_2 - 4] [i_5])))))), ((2321162813022385713 ? 45 : (((arr_13 [i_0] [i_2] [i_2] [i_5] [i_5]) | (arr_3 [i_0]))))))))));
                        arr_23 [i_0 - 1] [i_2] [i_0 - 1] = (((((((arr_7 [i_0] [i_1] [i_0] [i_5 + 2]) << (((arr_1 [i_1] [i_2]) - 1989572823))))) == (min(10010459709467928221, -122)))));

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_18 = (min(var_18, (((!(((-32767 - 1) || 73)))))));
                            var_19 = (max((arr_3 [i_6 - 3]), ((((((var_12 ? -215359254 : var_9))) ? (arr_24 [i_6] [i_1] [i_6] [i_5] [i_6] [i_1 - 1] [i_1]) : (arr_9 [i_5]))))));
                            var_20 = var_4;
                        }
                    }
                    var_21 = (((min(0, ((((arr_24 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] [i_2]) > (arr_2 [i_2])))))) == (((min((arr_11 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1]), (arr_11 [i_0] [i_0 - 1] [i_0] [i_0])))))));
                    arr_28 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_0 - 3] = ((((((var_0 >> (9775 - 9737))))) ? ((var_4 ? (((var_9 ? (arr_11 [i_0] [i_1] [i_2] [i_2 + 1]) : var_4))) : 12692315603808227651)) : (((((arr_15 [i_1 + 2] [i_0] [i_2]) != (arr_14 [i_1 + 1] [i_1] [i_2] [i_1] [i_0 - 3])))))));

                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_22 = -58;
                        var_23 = (arr_15 [i_0 - 2] [i_1] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_24 = var_10;
                        arr_36 [i_0] [i_0 - 1] [i_0] = arr_22 [i_0 + 1] [i_1 + 1] [i_1 + 2] [i_2 - 4] [i_2 - 1];
                        arr_37 [i_0 - 2] [i_1] [i_2 + 1] [i_8] [i_0] = (((((arr_34 [i_1 + 1] [i_8] [i_8] [i_8]) != var_9)) ? ((var_7 ? (~-4101282851803601233) : (arr_12 [i_0] [i_0] [i_2 - 2] [i_2]))) : ((((arr_1 [i_2 - 1] [i_1 - 1]) ? var_2 : var_5)))));
                        var_25 += var_4;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    arr_46 [i_9] [i_9] [i_11] [i_11] |= arr_12 [i_9] [i_9] [i_10] [i_11];
                    var_26 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
