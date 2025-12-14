/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        {
                            var_18 -= ((max((arr_8 [i_0] [1] [i_4 + 4]), (arr_8 [i_0] [i_0] [i_4 - 2]))) * ((max(((var_6 ? var_13 : (arr_12 [i_0] [i_1] [i_1 + 2] [i_2] [i_3 + 1] [i_4 - 1] [i_4 + 4]))), (((arr_4 [i_3] [i_1] [i_0]) / var_10))))));
                            var_19 = (min(134213632, (arr_5 [i_0] [2] [i_2])));
                            arr_16 [i_4] [i_1 - 1] [i_2] [i_3] [i_4] = var_13;
                        }
                    }
                }
            }
            var_20 ^= (min(((~(arr_8 [i_1] [i_1] [i_1 - 1]))), (((arr_8 [i_1] [i_1] [i_1 - 1]) ^ (arr_8 [i_1] [i_1 + 2] [i_1 - 1])))));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_5] = (max((arr_17 [i_0] [i_5]), (arr_18 [i_0] [i_0])));
            var_21 ^= var_0;
        }

        /* vectorizable */
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            arr_24 [i_0] [i_6] [i_0] = (arr_2 [i_6 - 1] [i_0]);

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                arr_27 [i_0] [i_6 - 2] [i_7 + 2] [i_6 - 2] = var_3;
                var_22 = (((arr_4 [i_7 - 1] [i_7] [i_7 + 2]) ? (arr_4 [i_7 - 1] [i_7] [i_7 + 1]) : (arr_4 [i_7 + 2] [i_7 + 1] [i_7 - 1])));
            }
        }
        arr_28 [i_0] = (((((~(arr_23 [i_0] [i_0])))) ? ((((max(0, var_4))) ? (arr_21 [i_0]) : var_7)) : (max((((arr_25 [i_0] [i_0] [i_0]) ? (arr_18 [i_0] [i_0]) : (arr_11 [i_0]))), ((max(var_14, (arr_21 [i_0]))))))));
    }
    for (int i_8 = 1; i_8 < 6;i_8 += 1)
    {
        arr_31 [i_8] = ((max((((var_11 ? (arr_17 [i_8] [2]) : var_9))), ((var_6 ? var_4 : var_10)))));
        arr_32 [i_8] [0] = (max(var_9, (((arr_23 [i_8] [i_8 + 3]) && (arr_23 [i_8] [i_8 + 2])))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_23 = (min((arr_34 [i_9]), ((((((!(arr_33 [i_9])))) * (arr_35 [i_9]))))));
        arr_36 [i_9] = (arr_33 [i_9]);
        var_24 = (((!var_1) & (arr_35 [i_9])));
        arr_37 [i_9] = (arr_34 [i_9]);
    }
    #pragma endscop
}
