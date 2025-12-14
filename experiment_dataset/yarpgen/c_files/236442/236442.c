/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = var_7;
                                var_13 = (min((min((arr_9 [i_4 + 2] [i_4 + 3] [i_4 + 3] [i_1]), (min((arr_13 [i_1] [i_1] [i_3] [i_0 - 1]), -10)))), var_7));
                                arr_14 [i_2] [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = ((-(((((181 ? -38 : 0))) ? -26449 : 5582808117367565433))));
                            }
                        }
                    }
                    var_14 = ((!(arr_12 [i_0 + 1] [i_1] [i_2] [i_1] [i_0])));
                    arr_15 [i_1] [i_1] = (((~var_7) - ((((((arr_10 [i_1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1]) + 2147483647)) >> (-39 + 70))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [12] [i_0] [i_1] = (!var_6);
                        arr_19 [10] [i_0] [i_1] [0] [i_2] [i_5] = (arr_2 [i_0] [i_0 + 1] [i_2 - 1]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [6] [6] [i_1] [i_0] [i_1] = (min(58, 118));
                        var_15 = ((((((!var_0) ? 16031642695037037220 : ((10865988108581885786 >> (var_3 - 4227652350)))))) ? (max(var_5, (min((arr_11 [i_0] [i_0] [i_1]), var_7)))) : (((-(!205857907))))));
                        arr_23 [i_6] [i_0] [i_1] [i_1] [i_0 + 1] [i_0] = ((~(((((-3 ? var_5 : (-127 - 1))) != 242368433)))));
                        var_16 = (~var_11);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_17 = max((((0 ? var_10 : var_5))), ((min((arr_11 [i_1] [i_0 - 1] [i_1]), (arr_11 [i_1] [i_0 - 1] [i_1])))));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_1] [12] = (~(((~var_5) ? (max(var_4, var_3)) : (max((arr_13 [i_1] [i_2] [i_7] [i_8]), var_8)))));
                            arr_31 [i_0] [i_0] [i_1] = (((-var_1 >> ((((var_9 >> (-31743 + 31754))) - 790469)))) >> ((max((arr_24 [i_0] [i_0 - 1] [i_2] [i_0] [i_2 + 1]), (arr_24 [i_8] [i_1] [i_2] [i_7] [i_2 + 1])))));
                            arr_32 [i_1] [i_7] [i_1] [i_1] [i_1] = (((((7146 * (-3 / 514557185)))) ? (min((-28900 / var_1), (((arr_29 [i_1] [i_8]) / var_3)))) : ((var_2 ? var_8 : (arr_0 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = 26451;

    /* vectorizable */
    for (int i_9 = 1; i_9 < 23;i_9 += 1)
    {
        arr_37 [i_9] = (arr_33 [i_9]);
        arr_38 [i_9] = (+-9938998110588339589);
        arr_39 [i_9] [i_9] = (((((arr_36 [i_9] [i_9]) + 2147483647)) >> (var_9 - 1618918926)));
    }
    #pragma endscop
}
