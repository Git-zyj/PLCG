/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, var_5));
    var_11 = var_1;
    var_12 = 79;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, ((((arr_1 [18]) & ((var_4 ? 2147483637 : (arr_0 [18]))))))));
        var_14 = (min(var_14, ((((var_6 * 1910225141) ? (((var_7 ? 9223372036854775807 : var_9))) : 6637071225208303189)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((arr_5 [i_1]) ? (((arr_4 [i_1 - 1]) * (arr_5 [i_1 - 1]))) : ((((var_3 == (arr_2 [12])))))));
        arr_8 [14] = (((((var_9 * (arr_1 [4])))) ? (((arr_2 [14]) ? (arr_1 [4]) : -11)) : ((((arr_2 [10]) ? 1034665300 : 8347)))));
        arr_9 [i_1] |= ((((var_5 ? (arr_6 [i_1] [i_1]) : var_4))));
        arr_10 [i_1 + 1] = (190059830560138059 | -3885021652847149363);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            var_15 = (max(var_15, (~50)));
            arr_16 [i_2] [1] [i_2] = (((arr_15 [i_2 - 1] [i_2 + 1]) == 14));
            arr_17 [i_3] [i_2] [i_2] = (arr_3 [i_2 + 2] [i_2 - 1]);
        }
        arr_18 [i_2] = (arr_6 [i_2] [i_2]);
        var_16 = (((((var_6 ? (arr_6 [i_2 + 1] [i_2 + 1]) : var_2))) ? 255 : (((arr_4 [i_2]) ? var_7 : (((2147483633 ? (arr_1 [i_2]) : 1)))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_17 |= (var_3 + 1);
        var_18 = ((~(arr_20 [i_4 - 2])));
    }
    #pragma endscop
}
