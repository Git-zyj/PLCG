/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((((arr_0 [i_0]) ? (arr_1 [i_0 + 3]) : var_1))) ? var_5 : var_3))) ? (var_8 && -var_6) : var_6));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] = -var_1;
            var_10 = (((((-1 ? 1 : (arr_3 [i_1 - 2] [i_1 + 1])))) ? ((~(~var_0))) : ((-2251799809490944 ? (max(2251799809490933, 1)) : (arr_3 [i_0] [i_1 - 1])))));
            var_11 *= (((arr_3 [i_0] [i_1]) ? (((((((!(arr_0 [i_1]))))) > ((var_0 + (arr_0 [i_1])))))) : (((!(2251799809490931 | var_8))))));
        }
        arr_6 [i_0] = (--2251799809490948);
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    var_12 = var_4;

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_13 = (min(var_13, ((((max((arr_14 [i_5] [i_4 + 1] [i_3 - 3] [i_3] [i_3 - 1] [i_3]), (arr_10 [i_3 - 2] [i_3 - 4]))) + (arr_10 [i_3 - 4] [i_2]))))));
                        arr_15 [i_5] [i_5] [i_4] [i_3] [i_2] = (max((arr_3 [i_3 - 1] [i_2 + 2]), (arr_3 [i_3 - 1] [i_2 + 2])));
                        var_14 = (min(var_14, ((((~((var_6 & (arr_13 [i_5] [i_2] [i_2])))))))));
                        arr_16 [i_5] [i_4 + 2] [i_3 - 4] [i_2] = (((((+(((arr_3 [i_2] [i_2]) / 1))))) ? (arr_10 [i_2] [i_2 + 1]) : ((-(1 * var_7)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [10] [i_3] [i_6] [10] = (arr_17 [i_2] [i_3] [i_4 - 3] [i_4 - 3]);
                        arr_21 [i_6] [i_3] [i_3] = ((((var_3 ? 0 : (arr_8 [0] [0]))) + var_6));
                        arr_22 [i_6] [i_3] [i_6] [i_6] = ((arr_14 [i_2 - 1] [i_3] [i_4] [i_6] [i_6] [i_6]) ? (arr_14 [i_2] [i_2] [i_2] [1] [i_2] [i_2 + 1]) : (arr_4 [21] [i_3] [i_2]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
