/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_1] = arr_4 [i_0] [i_1] [i_0 - 2];
            var_14 = (((((arr_4 [i_0] [i_1] [i_0]) >> (((arr_1 [i_1]) - 83)))) & (((arr_0 [i_1]) >> (-1580092332 + 1580092335)))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_12 [i_2] [i_0] [i_0] = ((((arr_3 [i_0]) > 0)));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [i_3] [i_4 + 2] [i_3] [i_3] = (((arr_4 [i_2] [i_3 + 2] [i_4]) ^ (arr_4 [i_3 + 3] [i_3 + 3] [i_3])));
                            var_15 = var_2;
                            var_16 = (arr_19 [i_3]);
                            var_17 = ((-(arr_5 [i_3 + 2] [i_0 - 1])));
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            arr_25 [i_3] [i_2] [i_3 - 2] [i_2] [i_3] = ((-4294967295 >= ((((0 && (arr_9 [i_2] [i_3 + 3] [i_6])))))));
                            var_18 = ((((((arr_3 [i_6 + 1]) ? (arr_4 [i_0 - 1] [i_2] [i_3 + 3]) : (arr_23 [i_0] [i_3] [i_2] [i_3] [i_4 + 3] [i_6])))) ? -29832 : (arr_2 [i_6 + 1])));
                        }
                        arr_26 [i_4] [i_3] [i_3] [i_3] [i_0] = -var_1;
                    }
                }
            }
            arr_27 [i_0] [i_2] = (3 ? (arr_17 [i_0]) : (arr_21 [i_0] [i_0 - 1] [i_0 + 1]));
        }
        var_19 = ((1 ? (((arr_16 [2] [i_0] [i_0] [i_0 + 1] [2] [2]) ? var_0 : (arr_3 [i_0]))) : -1047662627));
        arr_28 [i_0] = (((4294967295 < (arr_5 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_36 [i_7] [i_7] [i_7] [i_7] = (((375159648 != 24) | (31959 | 11)));
                    var_20 = (arr_14 [i_0 + 2]);
                    arr_37 [i_7] [i_7] [i_7] [i_7] = (((arr_3 [i_0 - 1]) ? (arr_34 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]) : 52701));
                }
            }
        }
        var_21 = (((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2]) > ((-(arr_0 [i_0])))));
    }
    for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_22 = (((((~(arr_29 [0] [i_9 + 1])))) ? (max((((arr_14 [i_9]) ? 0 : var_11)), ((((arr_19 [4]) | (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9])))))) : (((~(~-126))))));
        arr_42 [i_9 - 2] = ((((max((arr_5 [i_9 + 2] [i_9 + 1]), (arr_5 [i_9 + 2] [i_9 + 1])))) >= var_7));
    }
    for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_23 = (((((arr_24 [i_10] [i_10] [4] [i_10] [i_10 + 2] [4]) != (max((-2147483647 - 1), (arr_3 [i_10 - 2]))))) ? ((~(arr_34 [i_10] [i_10] [i_10 - 2] [i_10 + 2]))) : (arr_30 [i_10] [i_10] [i_10])));
        var_24 = (((((!(((arr_29 [4] [i_10 + 1]) || (arr_3 [i_10])))))) ^ ((((arr_17 [i_10 - 1]) < (arr_17 [i_10 - 1]))))));
        arr_45 [i_10] = (arr_8 [i_10] [i_10] [i_10]);
    }
    var_25 = (max(var_5, ((var_3 ? ((var_0 ? var_5 : var_3)) : var_0))));
    #pragma endscop
}
