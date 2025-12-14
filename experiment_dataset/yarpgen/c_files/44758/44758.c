/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_3, (((var_7 ? var_5 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0 + 4] [i_1] [i_0] = ((((min(-404791012, 46824))) ? ((7 ? (((arr_3 [i_1]) ? 16959 : 18711)) : (arr_0 [i_0 + 1] [i_0 + 1]))) : (arr_3 [i_0 + 2])));
                    arr_9 [13] [i_0] = ((-(((((min(var_1, var_1)))) / var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] &= ((((arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [2]) * 855381431525132891)));
                                arr_15 [i_3] [i_1] [i_1] [i_1] [i_1] = ((-21 ? ((-33913118 ? 3335150395 : (-2147483647 - 1))) : 0));
                                arr_16 [i_0 + 1] [i_3] [i_4] [i_3] [i_4] = (~13);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_19 [1] [i_1] [i_0] = (arr_7 [i_0 + 4] [i_1] [i_5]);
                    arr_20 [8] [i_5] = (arr_3 [i_0 + 3]);
                }
                arr_21 [i_0] = (-366112920278653481 > var_6);

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_26 [i_0] [i_1] [i_0] [i_0] = ((((arr_6 [i_0 + 3] [i_0]) ? 9 : (arr_0 [i_0 + 2] [i_0]))) * (((arr_6 [i_0 + 2] [i_0]) + (arr_6 [i_0 + 1] [i_0]))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((((((((855381431525132885 ? (arr_11 [i_0] [11] [i_0] [i_0]) : var_0))) ? (((min((arr_13 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0]), 51570)))) : ((~(arr_4 [i_0])))))) ? ((~(arr_25 [i_0 + 2] [i_0 + 2]))) : (((!(arr_24 [i_0]))))));
                        arr_30 [i_0] [i_6] [7] [i_0] = ((!((min(-4276291931629782901, (arr_11 [11] [i_1] [i_1] [i_0]))))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_33 [4] [4] [i_6] = (min(((20 ? 637137951 : 255)), (-12 && var_8)));
                        arr_34 [8] = (((((var_5 ? var_0 : (arr_28 [i_0] [i_0] [i_0 + 3])))) ? (((((min(var_8, 1))) < -20539))) : var_4));
                    }
                    arr_35 [1] [i_1] [1] = 5474581767597115721;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_39 [i_0] = (((arr_12 [5] [i_0] [i_0 + 4] [i_0] [i_0 - 1] [i_0 + 3] [4]) || ((!(arr_2 [i_0])))));
                    arr_40 [0] [i_0] = (min(((max((((arr_28 [i_0] [i_1] [2]) ? 255 : (arr_6 [i_1] [i_0]))), 65505))), ((141 ? (arr_28 [i_1] [i_1] [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
