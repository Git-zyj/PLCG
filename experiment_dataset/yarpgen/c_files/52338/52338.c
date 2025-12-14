/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [13] = var_9;

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((!(((var_1 ? (((max((arr_7 [i_4]), (arr_10 [i_4] [i_4] [i_2 - 2] [i_4]))))) : var_6))))))));
                                arr_13 [i_0] [i_1] [9] = max((max((arr_9 [1] [1] [i_1]), -1752326856409349172)), ((max(15, 4294967273))));
                            }
                        }
                    }
                    var_13 = var_4;
                }
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    arr_16 [i_1] [i_1] &= ((((min(var_4, var_6))) ? ((((max(62, 1481222500))) ? (arr_7 [i_1]) : (~var_7))) : ((+((max((arr_8 [i_1] [i_1] [i_1]), (arr_10 [i_5] [i_1] [i_1] [i_0]))))))));
                    var_14 = ((((3726681851839681711 < (arr_8 [i_5 - 3] [i_1] [i_0])))));

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_19 [19] [19] [19] [2] [i_0] = ((((((var_7 < (var_6 & var_2))))) > (min((arr_10 [i_5 - 1] [i_0] [i_0] [10]), var_2))));
                        var_15 *= (((max((arr_0 [i_1]), var_0)) > (arr_7 [i_1])));
                    }
                    arr_20 [i_0] [i_0] [i_0] [i_5] = (min((min(20233, 1190378847)), ((-(arr_15 [i_5 - 3] [i_1] [i_0])))));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_16 = var_7;
                                arr_30 [i_8] [i_0] [i_7] [i_0] [i_0] = ((1397962485 ? 3073 : 9223372036854775807));
                            }
                        }
                    }
                    arr_31 [12] [i_0] [i_7] [i_7] = (max((min((arr_11 [i_0 - 1] [i_1]), (arr_4 [i_1] [i_0]))), (min(9223372036854775807, (-9223372036854775807 - 1)))));
                    var_17 = (max(var_17, ((min(1710930305, 32704)))));
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_18 = (arr_4 [i_0] [i_0]);
                    var_19 = ((32704 ? 15012 : 6939));
                    var_20 = (((arr_26 [i_0] [19] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) | (arr_26 [i_0] [i_0 - 1] [i_0 - 1] [14] [i_0] [14])));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_21 = (((((arr_17 [7] [i_0 - 1] [i_0] [i_0]) ? 6933 : (arr_15 [i_0] [i_0 - 1] [i_0]))) | (min(65514, 4294967290))));
                            var_22 = (((var_9 ? var_1 : (arr_1 [i_0 - 1]))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (var_8 <= var_6);
    #pragma endscop
}
