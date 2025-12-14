/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (arr_4 [i_0 + 1]);
                    arr_7 [i_0] [i_0] [14] [i_1] = (((arr_6 [i_0 + 2] [i_1]) ? (((arr_1 [i_0 + 1] [i_2 - 1]) & var_2)) : (((arr_1 [i_0 - 3] [i_0 - 3]) & (var_15 & -90)))));
                    var_18 += -90;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [i_3] [i_1] [i_1] [9] = ((86 >= (((-90 || (((var_5 ? (arr_4 [i_1]) : var_2))))))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_1] = ((((((((arr_1 [i_0] [i_2 + 1]) ? 2 : var_11))) ? (((min(1, -86)))) : 722993096)) & (((3852931382 ? (var_4 + var_4) : (arr_5 [i_3] [i_4 + 1] [i_1]))))));
                            var_19 = (min(4, 134));
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((arr_8 [i_0] [i_2] [i_3] [i_5]) ? (((arr_8 [i_5 + 3] [i_5] [i_5] [i_5]) ? (arr_14 [i_0 + 2] [i_0 - 2]) : ((min(var_7, -86))))) : ((var_7 ? ((2285243701 ? 824 : (arr_14 [i_2] [i_2]))) : var_7)));
                            var_21 += ((1460719939355842984 ? -6848314399650971101 : (((238 ^ ((-54 ? 3852931382 : 2285243701)))))));
                            arr_20 [11] [i_1] [i_1] [i_3] [i_5] = (max(((var_7 ? (arr_14 [i_1] [i_5 + 2]) : (arr_14 [i_0 + 1] [i_1]))), ((2510549842 ? (arr_0 [i_1] [i_1]) : var_6))));
                            var_22 = (min((arr_16 [i_0] [i_1] [i_5] [i_1] [i_5 - 1]), (((~(arr_4 [i_3]))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_23 = (max((((65534 ? 0 : 0))), -6306335458404901847));
                        var_24 = ((((!(((var_14 ? 3195237688 : var_4))))) ? (((((~var_7) >= ((var_2 ? 1 : 86)))))) : (min((((!(arr_16 [i_0] [i_0] [i_2] [i_1] [i_1])))), (arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_6] [i_2])))));
                        var_25 = (min(((~(arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_2 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_26 = ((((((!(arr_21 [i_0] [i_7]))))) < ((var_9 ? (arr_21 [i_2] [i_1]) : 14102630854999400257))));
                        var_27 = ((var_16 ? (min((arr_8 [i_2 - 2] [i_1] [i_0 + 2] [i_0]), var_3)) : ((-(arr_3 [i_1] [i_1])))));
                        arr_26 [i_1] [i_1] [i_2] [i_7] = ((((max((arr_14 [i_2] [4]), (arr_24 [i_1])))) ? (((~(max((arr_17 [i_0] [8] [i_2] [14] [i_7] [i_7]), 1784417438))))) : (max((arr_4 [i_0]), (arr_12 [12] [7] [i_0 - 1] [i_0] [7] [i_2 + 1] [i_1])))));
                    }
                }
            }
        }
    }
    var_28 = var_14;
    var_29 = (~var_6);
    #pragma endscop
}
