/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [3] = 255;
        arr_5 [i_0] [i_0] = (((((((!(arr_1 [i_0 - 1] [8]))) && (!var_1)))) ^ ((((var_3 * (arr_0 [i_0 - 1] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = ((3 ? ((((((arr_12 [i_0]) & var_1)) > (~var_13)))) : ((var_4 ? (((!(arr_0 [i_0] [i_1])))) : ((min(65535, (arr_8 [i_2 + 1]))))))));
                    var_18 = (((255 ^ (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))));
                    var_19 = ((((min(var_14, 62)) >> ((((0 ? 7 : (arr_7 [i_1] [17] [i_2 - 2]))) - 6728)))) + ((((!(arr_8 [i_2 - 2]))))));
                    arr_13 [22] [i_1] [i_1] [7] = (((max(var_8, (min(var_7, -29618)))) <= (min(((var_10 ? var_6 : (arr_11 [i_0] [i_1] [19] [i_0]))), (((22487 ? var_12 : 8128)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = 127;
                                arr_19 [1] [i_1] [i_1] [i_1] = ((!((((((0 ? 13 : var_2))) ? (~var_14) : ((var_16 ? 127 : var_5)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0 + 2] = ((var_7 ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((arr_10 [i_0]) >> (var_4 + 135)))));
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] [0] = (((var_9 ? var_10 : (~16384))));
        arr_25 [18] = ((max(var_3, 32)) << (((max(((var_14 ? (arr_7 [11] [11] [i_5]) : var_13)), 8118)) - 6741)));
        arr_26 [i_5] [i_5] = (max((((((max((arr_10 [i_5]), 57418))) && ((!(arr_9 [i_5 + 1] [i_5 + 2] [i_5])))))), ((var_6 ? ((((!(arr_22 [10]))))) : (arr_9 [2] [20] [19])))));
    }

    /* vectorizable */
    for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_31 [i_6] [i_6] = (((arr_1 [i_6 - 3] [i_6 - 1]) && (arr_11 [i_6] [i_6] [i_6] [i_6])));
        arr_32 [21] [i_6 - 1] = var_9;
        var_21 += (var_15 ^ var_11);
    }
    for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_22 = ((((arr_8 [i_7 - 1]) || var_6)));
        var_23 = (min(var_23, (((var_11 ? ((((arr_23 [i_7] [i_7]) == (!var_13)))) : (((!(((var_2 ? (arr_15 [3] [3] [i_7] [i_7] [i_7 - 2] [3]) : (arr_33 [i_7]))))))))))));
    }
    #pragma endscop
}
