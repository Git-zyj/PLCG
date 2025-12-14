/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (max((max((max(201326592, var_4)), (((1 ? 1 : 1))))), var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((var_4 | (var_4 < 1))));
                arr_5 [i_1 + 1] [i_0] = ((((max((((var_9 ? 2147483623 : var_4))), 5830801294470636890))) ? (var_5 / var_4) : ((max(295370158, (arr_1 [i_0] [i_0]))))));
                var_19 = (max(((max((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 + 1] [13])))), (min(262144, (arr_1 [i_1 + 1] [i_1 + 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {

                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        arr_16 [i_2] [i_3] [i_4 - 2] [i_4 - 2] = var_11;
                        var_20 &= (((((var_16 + 250) && ((max(var_3, var_1))))) ? 339903795 : var_14));
                        arr_17 [13] [i_3] [i_4] [i_5] [i_5] = (((!32761) > ((6 ? var_13 : var_11))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_20 [i_2] [i_3] [i_4] [i_4] &= max(1, (((arr_12 [i_2]) ? var_5 : (arr_12 [i_3]))));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [i_2] [i_2] [2] [i_2] [i_2] = (max((max((arr_18 [i_2] [i_2] [i_2]), (arr_18 [21] [i_4 - 2] [i_2]))), (arr_18 [i_2] [i_3] [i_7])));
                            var_21 = max((max(((var_16 << (var_16 - 1831516105))), var_7)), (((((min((arr_15 [i_2] [i_3] [6]), (arr_12 [i_2])))) ? 1 : (arr_11 [i_6] [i_3] [i_2])))));
                        }
                        var_22 = (min(var_22, -15762598695796736));
                        var_23 -= max((arr_8 [17]), (arr_19 [i_4] [i_4 + 1] [i_4 - 1] [21] [i_4 - 1] [i_4]));
                    }
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        arr_27 [i_2] = (arr_22 [i_4]);
                        var_24 = (~((-(arr_25 [i_4 - 1] [i_3] [i_4 - 1]))));
                        var_25 = ((((max(((30 & (arr_6 [i_3]))), 1))) * ((0 * (min(var_14, 1392132717762405861))))));
                        arr_28 [i_2] [i_2] [0] [i_2] [i_2] [i_2] |= (min(((max(var_5, (max((arr_22 [i_3]), (arr_15 [19] [11] [i_8])))))), (arr_18 [i_2] [i_2] [i_3])));
                    }
                    arr_29 [i_3] = ((-(min((arr_15 [i_4 - 1] [i_3] [i_4 + 1]), var_1))));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_34 [i_2] [11] [10] = min((max((arr_31 [i_2] [6] [i_9]), 0)), (((var_0 < (arr_15 [i_2] [i_2] [i_3])))));
                    arr_35 [i_9] [19] [i_3] [i_2] = (arr_10 [i_3] [i_3]);
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_26 = (min(var_26, var_12));
                    var_27 = (((((arr_32 [i_2] [i_3] [i_10]) > 32266)) ? (arr_32 [i_2] [i_3] [i_10]) : (max(8924828598679351988, (arr_32 [i_2] [i_2] [i_2])))));
                    var_28 = var_4;
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_42 [11] [11] = var_3;
                    arr_43 [i_11] [i_11] [1] [20] |= ((177654698 ? var_0 : (max((arr_21 [i_2] [i_3] [i_11]), (arr_21 [i_2] [i_3] [i_11])))));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_29 = (min(var_29, ((~(arr_40 [i_2] [i_3] [i_12])))));
                        var_30 = ((((min(-8192, (max(1397155789, (arr_41 [i_2] [i_3] [i_11] [i_12])))))) ? 61 : var_4));
                        var_31 = ((!(((-(arr_7 [i_3] [i_11]))))));
                        arr_48 [i_2] [i_3] [i_11] [i_2] = (((-(arr_46 [i_2] [i_3] [i_3] [i_11] [17]))) >= (arr_38 [i_2] [6]));
                    }
                    arr_49 [i_2] [i_2] [i_11] [13] = (max(((max(0, var_14))), (((arr_40 [i_2] [i_11] [i_11]) & (arr_40 [i_11] [i_3] [i_2])))));
                }
                var_32 = ((17855 + (arr_26 [i_2] [i_2] [i_3])));
                var_33 |= ((-(arr_38 [i_2] [i_2])));
            }
        }
    }
    #pragma endscop
}
