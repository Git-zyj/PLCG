/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    var_20 |= -9643;
                    var_21 = ((arr_1 [i_1] [i_0 + 1]) < var_8);
                    var_22 = 47;
                    arr_6 [i_0] [i_0] [i_0] = (arr_0 [1] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_17 [i_0 + 2] [i_3] = (((~var_18) ? (arr_14 [i_5] [i_1] [i_1]) : (arr_4 [i_5 - 2] [i_3] [i_1] [i_0 + 3])));
                                var_23 = ((1 * (!127)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_3] [i_3] [i_3] = (-48 && -1073741824);
                    var_24 = (max(var_24, ((((arr_14 [i_0 + 3] [5] [i_3]) ? (arr_12 [i_0] [i_1] [i_3] [i_3] [i_1] [i_3]) : (arr_1 [7] [i_1]))))));
                    arr_19 [i_3] = ((((((arr_3 [i_1] [i_1] [i_1]) ? (arr_7 [i_0] [5] [i_3] [i_1]) : var_19))) ? (arr_16 [i_3] [i_1] [i_1] [i_3] [i_0 + 2] [i_0 + 2] [i_0]) : var_2));
                }
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    arr_24 [i_0] [i_6] [i_6] = ((((max((((arr_8 [i_6] [i_6 - 3] [i_1] [i_6]) ? (arr_12 [i_0] [i_1] [i_6] [i_6 + 1] [i_6 - 1] [i_6]) : (arr_2 [i_0]))), (((11 ? 245 : -51)))))) ? (max((arr_13 [i_0] [i_1] [i_6] [i_6] [i_6 - 1]), -12)) : (arr_4 [i_0 + 2] [10] [10] [10])));
                    var_25 = ((6880293585098557811 ? (arr_7 [i_1] [i_6] [i_0] [i_6]) : (arr_10 [i_0] [i_0] [i_1] [i_0] [i_6] [i_6 - 2])));
                    var_26 = ((!(arr_11 [i_0 + 2] [i_6 - 1] [i_6 - 2] [i_6 + 1])));
                    var_27 = (min(var_27, (arr_11 [i_0] [i_1] [i_6] [i_6 - 3])));
                    var_28 -= (arr_15 [i_6 - 1] [i_6 + 1] [i_1] [i_1] [i_0 + 2] [i_0 + 2]);
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    arr_28 [i_0] [i_1] [3] = (((arr_4 [4] [i_1] [i_7 - 2] [10]) ? (arr_13 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 1]) : (arr_27 [i_0] [i_1] [1] [i_7 - 2])));
                    arr_29 [i_0] = (arr_7 [i_7] [i_7] [i_1] [i_0]);
                }
                arr_30 [i_0 + 1] [10] = ((-((((((arr_15 [0] [i_1] [i_1] [i_1] [i_0] [i_0]) ? (arr_13 [i_1] [0] [2] [8] [2]) : (arr_7 [i_1] [i_1] [i_0 + 3] [i_0 + 3])))) % (arr_3 [i_0 + 2] [7] [i_1])))));
                arr_31 [i_1] = (min((((arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0]) - (arr_16 [9] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0 - 1]))), (arr_11 [i_0] [i_0] [1] [1])));
            }
        }
    }
    var_29 = (((((-var_14 ? (var_12 ^ 200) : -5026388416217613466))) ? var_11 : var_2));
    var_30 = var_7;
    #pragma endscop
}
