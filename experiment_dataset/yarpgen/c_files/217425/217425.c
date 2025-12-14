/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_5, var_1);
    var_12 = ((!((max(((var_7 ? 45 : 3)), (!var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 2] = ((-23125 ? 1 : (max(3, ((-(arr_4 [i_0] [i_1])))))));
                    var_13 = (max((min(21, (arr_3 [i_0] [i_2] [i_2 - 2]))), (((((((arr_4 [i_0] [i_0]) ? (arr_3 [i_2 + 2] [i_1] [i_0]) : 0))) ? (max((arr_2 [i_0] [i_0]), (arr_4 [i_0] [i_0]))) : (max((arr_4 [i_0] [i_1]), 23125)))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [0] [i_0] [i_0] |= var_2;
                            var_14 = (min(var_14, (~var_6)));
                            var_15 = (-23125 & -23135);
                            var_16 *= (arr_4 [2] [2]);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 61;
                            arr_20 [i_1] [i_1] [i_0] [2] [i_0] [i_1] [2] = (arr_18 [i_1] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_1 <= (arr_21 [1] [1] [1] [i_0] [i_0]));
                            var_17 = ((((!(arr_10 [i_0] [i_6] [i_6] [i_3] [i_6])))));
                            arr_26 [i_0] [i_1] [2] [i_6] = ((((var_4 ? (arr_23 [i_0] [i_1] [i_2] [i_0] [i_3 - 1] [i_2] [i_6]) : 0)) & -35));
                            var_18 += ((~(arr_5 [i_6] [i_2 - 1])));
                            arr_27 [i_0] [i_2] = (18446744073709551602 | 3);
                        }
                        arr_28 [i_0] [1] [i_3] = (((((arr_24 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0]) / (arr_17 [i_0] [i_0] [i_0] [i_3] [i_2] [i_0] [i_2]))) / ((1779 ? (arr_9 [i_0]) : var_8))));
                        arr_29 [i_0] [i_0] [i_0] [i_3] = (((arr_24 [i_2 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_24 [i_2 + 1] [i_2 - 2] [i_3] [i_3 - 1] [i_3 - 1] [i_3]) : (arr_24 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_3 - 1] [i_3])));
                        arr_30 [i_0] = arr_11 [i_0] [i_0] [i_0] [i_0] [15];
                    }
                }
            }
        }
    }
    var_19 -= (!(((-((var_10 ? var_1 : 127))))));
    var_20 -= var_1;
    #pragma endscop
}
