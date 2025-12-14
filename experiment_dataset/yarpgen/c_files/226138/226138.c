/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((var_11 > ((max(var_6, var_2))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) * (((((arr_0 [i_0]) && (arr_0 [i_0])))))));
        var_21 = (((((min(var_4, var_18))))) ^ (min(((((arr_0 [13]) | var_5))), (max(var_8, (arr_1 [i_0]))))));
        var_22 = (32747 > 32751);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] = ((!(arr_2 [i_1])));
        arr_5 [i_1] = ((-((((arr_3 [i_1]) != (arr_0 [i_1]))))));
    }

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_23 = ((-(arr_3 [i_2 - 1])));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_24 = ((min(((max((arr_9 [i_3]), var_6))), (max((arr_11 [i_3] [i_3] [i_4 - 1]), (arr_13 [i_3] [i_4] [i_5]))))) - var_1);
                        arr_17 [i_2 - 1] [i_2] [i_2] [i_3] = var_4;
                        arr_18 [i_3] [i_3 - 2] [i_3] [i_3] = (((arr_15 [i_2 - 1] [i_2] [i_3] [i_3 - 3] [i_4 - 2] [i_4]) != (arr_15 [i_2 + 1] [i_2 + 1] [i_2] [i_3 - 2] [i_4 + 1] [i_5])));
                    }
                }
            }
        }
        var_25 = var_2;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_26 = (arr_1 [i_6]);
        var_27 = (max((((max((arr_15 [i_6] [2] [i_6] [i_6] [i_6] [i_6]), (arr_0 [i_6]))) ^ var_8)), (((((max((arr_10 [i_6] [i_6]), (arr_12 [i_6] [2])))) | (((arr_14 [i_6]) >> (((arr_1 [i_6]) - 17862188973644828907)))))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_26 [i_6] = var_1;
            arr_27 [i_6] [i_6] [i_6] = (arr_11 [10] [10] [i_7]);
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_28 = (arr_28 [i_8]);
        var_29 = ((!(arr_11 [i_8] [i_8] [i_8])));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_30 = ((-(((((arr_32 [2] [i_10]) * (arr_33 [i_9] [i_10]))) >> (((((arr_33 [i_9] [i_10]) + (arr_30 [i_9 - 1] [i_10]))) - 274))))));
                var_31 = (~((+((((arr_32 [i_9] [i_9]) == (arr_33 [i_9] [i_9 - 1])))))));
                arr_34 [i_9 - 1] [i_9] [i_10] = (!-32748);
            }
        }
    }
    #pragma endscop
}
