/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (min(((max(var_5, var_3))), ((-267118750 ? var_3 : var_8))));
    var_11 |= (max(((((0 ? 64245 : 7958110368347869560)) & var_9)), ((min(var_7, ((var_1 ? var_5 : var_7)))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 = 0;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_13 = (((((max(127, var_4)))) + -14369971524817800330));
                            var_14 = (max((arr_5 [i_0] [i_1] [i_2]), (((min((arr_8 [i_0] [i_1] [i_3]), (arr_7 [i_0] [i_1] [i_2] [i_4])))))));
                            var_15 = ((127 ? 7958110368347869560 : 118));
                            var_16 = ((((((((var_7 ? var_7 : var_6))) ? 127 : ((-1 ? (arr_8 [i_0 - 3] [i_2] [i_2]) : -17))))) ? 1 : var_3));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_17 = (max((arr_5 [i_3] [i_3 - 2] [i_3 + 1]), ((+(max((arr_13 [i_0]), (arr_10 [i_0] [i_1] [i_3])))))));
                            var_18 &= (arr_11 [i_0]);
                            var_19 = 16804;
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            var_20 = (min(var_20, (((((arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_6]) ? 4076772548891751286 : (arr_19 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3])))))));
                            var_21 = (min(var_21, ((min(var_7, ((64737 ? (((max((arr_1 [i_2]), (arr_8 [i_0 + 1] [i_1] [i_2]))))) : ((113 ? var_6 : (arr_8 [i_0 - 2] [i_0 - 2] [i_2]))))))))));
                            var_22 = ((max(((arr_15 [i_0] [i_1] [i_3] [i_3] [i_6] [i_1] [i_0 - 1]), (((arr_18 [i_0] [i_1] [i_1]) ? (arr_15 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2] [i_0]) : (arr_11 [i_6])))))));
                            var_23 = (((4076772548891751286 + 17) + (arr_8 [i_0] [i_0 - 2] [i_2])));
                        }
                    }
                }
            }
            var_24 -= ((var_1 - ((((max((arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0]), 1))) ? -var_3 : (arr_4 [i_0] [i_0] [i_0] [i_0])))));
            var_25 = (min(var_25, (((~((~((~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))))))));
            var_26 = ((!(((var_7 ? (arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [3] [i_0 - 1]) : (arr_14 [i_0] [i_0 + 1]))))));
        }
        var_27 = (max((max((arr_5 [i_0 - 1] [i_0] [i_0 - 1]), 1073741824)), (((!(arr_3 [i_0] [i_0]))))));
        var_28 = (arr_4 [i_0 - 1] [1] [i_0 - 3] [i_0 - 1]);
        var_29 = -17;
    }
    #pragma endscop
}
