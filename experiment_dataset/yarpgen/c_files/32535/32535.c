/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((max(var_10, var_2))) & var_3)), var_3));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (max(((-((min((arr_1 [3]), 56226))))), ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_1 [i_0]) : ((-(arr_1 [i_0])))))));
        arr_4 [i_0] = (arr_0 [0]);
        var_12 = (max(var_12, (((18084916200568779776 ? (arr_1 [i_0]) : (arr_2 [1] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_9 [12] = (((((!(arr_8 [3] [3])))) / (arr_7 [i_1])));
        arr_10 [i_1] = (((((arr_2 [i_1] [i_1]) | (arr_0 [i_1]))) <= (((arr_8 [i_1] [12]) ? (arr_7 [i_1]) : 46646))));
    }
    var_13 = var_6;
    var_14 += (1 / var_6);

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 += 47030;
        arr_14 [i_2] = 58;
        var_16 -= (arr_12 [5]);
        var_17 = ((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2]));
        arr_15 [i_2] [i_2] = (((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_0 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_18 = 193;
        arr_18 [i_3 - 2] |= (((arr_1 [i_3 - 1]) ? (arr_16 [i_3 - 1]) : (((1 != (arr_17 [13]))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = (((!18084916200568779785) + (arr_17 [i_4 + 1])));
        var_19 &= (((arr_20 [i_4 + 1]) ? (arr_20 [i_4 - 2]) : 21451));
        arr_22 [i_4] = (((24781 ? (arr_2 [i_4 - 2] [i_4]) : (arr_17 [i_4]))) != (((arr_0 [1]) ? (arr_16 [i_4]) : (arr_1 [i_4]))));
    }
    #pragma endscop
}
