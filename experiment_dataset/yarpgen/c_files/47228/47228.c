/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((2147483647 % 268435440) ? ((((7107 / 7107) ? var_15 : var_1))) : 11451625043595512984)))));
                var_21 |= var_6;
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_22 = var_1;
        var_23 = (min(var_23, 26053));
        arr_9 [i_2] = var_14;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_24 |= ((~((0 | (arr_7 [i_3])))));
        var_25 = var_2;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_26 = (arr_13 [i_4] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_27 = ((~((((~(arr_12 [i_3] [i_4]))) | ((max(var_5, var_4)))))));
                                var_28 = ((26053 | (((min(7107, -26053))))));
                                var_29 = (max(var_29, ((max((max(7107, 7)), ((max(var_1, var_0))))))));
                                arr_22 [i_3] [i_7] [i_6] [i_5] [i_4 + 2] [i_3] [i_3] |= ((((((-22887 ? var_7 : (arr_13 [i_5] [i_7 - 1]))))) ? (((arr_12 [i_3] [i_3]) & var_0)) : 255));
                            }
                        }
                    }
                    arr_23 [i_4] [i_4 + 2] [i_5] = ((((((arr_17 [i_3] [i_4 + 3] [i_4]) | var_3))) ? ((((!((((arr_16 [i_5] [i_4] [i_3]) | (arr_12 [i_4] [i_4])))))))) : (((arr_21 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 1]) ? (arr_11 [i_4 + 2]) : var_9))));
                }
            }
        }
        var_30 = (max((((!((max(var_4, var_13)))))), ((var_1 ? var_4 : var_9))));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_31 = ((7107 && (((~(arr_8 [i_8]))))));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_32 = (arr_26 [i_9] [i_11]);
                        var_33 = 58428;
                        var_34 = (!var_8);
                        arr_33 [i_9] [i_9] = var_5;
                        var_35 = (((((arr_19 [i_9] [i_9]) >= (arr_28 [i_9 + 3])))) < (arr_11 [i_8]));
                    }
                }
            }
        }
        var_36 = (min(var_36, var_3));
        var_37 = ((22887 & (((arr_12 [i_8] [i_8]) + var_6))));
        arr_34 [i_8] = (((min(((var_15 ? var_4 : (arr_32 [i_8] [1] [2] [i_8]))), (arr_7 [i_8]))) > (arr_24 [i_8] [15])));
    }
    #pragma endscop
}
