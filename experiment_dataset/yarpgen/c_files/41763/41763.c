/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((58416 ? 1 : var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = -248;

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_22 = (min(((min((arr_3 [7] [i_1]), 58431))), (min(58421, 9131314427058798318))));
                    var_23 += (72 ? (~58405) : (((arr_2 [i_2 - 3] [i_2 + 1] [i_2 - 3]) ? (arr_2 [i_0] [i_2] [i_2]) : (((188 ? 1 : 228))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_9 [i_3] [i_3] = 0;
                    var_24 += ((!(((1 ? (arr_7 [i_0] [4] [i_3]) : 1)))));
                    var_25 = (arr_7 [i_0] [0] [i_3]);
                    arr_10 [i_0] [i_3] [i_3] = (-1 ? ((((min((arr_0 [1] [i_3]), (arr_8 [i_3])))) ? 200 : (arr_2 [i_0] [i_1] [i_3]))) : ((min(21, 6155294817485656994))));
                }
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_26 = (-(((arr_15 [i_5] [i_5] [i_5 - 1] [i_5 - 2]) ? 2123170410016158702 : 3922711912)));
                                var_27 = ((!(((1 ? 12534097301912558729 : 1)))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_28 += ((~(arr_6 [i_0])));
                        var_29 &= (((((65524 ? (arr_14 [i_0] [i_0] [6] [i_0] [8]) : ((((arr_13 [i_1] [i_7]) ? 54237 : 11298)))))) ? ((min(-6, 7120))) : (min((arr_11 [i_0] [i_1]), (arr_6 [i_1])))));
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        var_30 = (min(1104693263, -180));
                        arr_23 [i_0] [5] [i_4] [i_0] = (min(-21742, ((min((arr_21 [i_8] [i_8 - 1] [i_8 - 1] [i_4]), (arr_5 [3] [4] [i_8 - 1] [0]))))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_27 [i_4] [i_4] [i_4] [i_9] = (((((-(((!(arr_1 [i_4]))))))) ? (((!1) ? (arr_7 [i_0] [i_0] [1]) : 1)) : (((((88 ? (arr_8 [i_4]) : 60282))) ? (arr_16 [1] [1] [i_4 - 1] [10] [i_4 - 3] [i_9]) : (((arr_18 [i_0] [i_1]) ? 28 : 60272))))));
                        var_31 = ((188 ? ((-(arr_20 [i_4 - 2] [1]))) : (((((1 ? (arr_13 [i_0] [i_0]) : 248157875693004523))) ? ((min(22305, 22970))) : (arr_17 [i_0] [i_1] [i_1] [i_9] [i_4 - 2])))));
                        var_32 *= 7733509818547914301;
                    }
                    arr_28 [i_4] [i_1] [i_4] = 1085;
                }
            }
        }
    }
    var_33 = 2498129325;
    var_34 ^= (min(((~((var_13 ? var_19 : var_7)))), var_16));
    #pragma endscop
}
