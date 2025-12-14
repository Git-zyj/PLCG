/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = var_9;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = 4038538238;
                    var_15 = 4398046510080;
                    var_16 = (1081098062 || 1);
                }
            }
        }

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_12 [i_3] [i_3] = (arr_8 [i_0 - 2] [2] [i_0] [i_0]);
            arr_13 [i_3] [i_0] [i_3] = (((((((((arr_2 [i_0] [2] [i_0]) ? (arr_3 [i_0] [i_0 + 1] [i_3]) : var_6))) / (arr_6 [11] [1] [i_0] [i_0 + 2])))) * ((((arr_3 [i_0 + 2] [7] [i_3]) * (arr_1 [i_3]))))));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_17 = (max((arr_3 [i_0] [i_0] [i_4]), ((1 ? (((arr_14 [i_0] [i_0] [i_0]) / (arr_7 [i_0]))) : (arr_0 [i_0 + 1] [i_4])))));
            arr_16 [i_0] [i_4] [i_0] = ((((((!(arr_15 [i_0 + 2] [i_0 + 3] [i_0])))) % var_4)));
            var_18 = var_9;
            arr_17 [9] [i_4] = ((((-7347421566782932820 ? (((arr_8 [i_0] [i_0] [i_0] [i_0]) % var_10)) : (max(19977, 18446744073709551615)))) <= -928088799987607538));
            var_19 |= ((-((min((arr_1 [i_0 - 1]), (max(var_1, var_6)))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_20 = (arr_2 [i_5] [i_5] [i_0 - 2]);
            var_21 += var_8;
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_22 += 1;
        arr_23 [i_6 + 1] = (arr_21 [i_6 - 2] [i_6 + 1]);
    }
    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_23 = 14;
        arr_27 [i_7] = (arr_21 [i_7 - 1] [i_7 - 2]);
        var_24 = (max(var_24, (arr_25 [i_7 - 2])));
    }
    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_31 [i_8] [i_8] = ((!(((5 ? (arr_22 [i_8 + 1]) : (arr_22 [i_8 - 2]))))));
        arr_32 [i_8] = arr_22 [11];
    }
    #pragma endscop
}
