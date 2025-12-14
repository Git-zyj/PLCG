/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 &= var_2;
        arr_3 [15] [i_0] = 32741;
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [9] = ((min(2304628602, (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : 4034162072481230046)))));
        arr_7 [i_1 - 1] = (max((max((arr_4 [i_1 + 1] [i_1 - 4]), (arr_4 [i_1] [i_1 - 4]))), (~var_15)));
    }

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_17 *= (max((1 == var_5), 4301));
        var_18 = (min((arr_5 [2] [i_2 + 2]), (arr_1 [i_2])));
        arr_11 [i_2] = -2051465114157299576;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 = (min(var_19, ((max((((34112173 > (!var_7)))), ((44072 ? 4034162072481230055 : 21644)))))));
        arr_14 [5] = (((((arr_0 [i_3] [i_3]) ? ((var_12 / (arr_1 [2]))) : (((min((-127 - 1), var_5)))))) + (((max((arr_8 [0] [i_3]), (arr_8 [0] [i_3])))))));
    }
    var_20 = var_3;

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((128 & (((45 < ((max(1, (arr_1 [i_4])))))))));
        arr_18 [i_4] = (arr_10 [i_4] [1]);
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_21 = ((((((var_14 ? 1 : 10359612560301681229)))) ? 27832 : -34));
        arr_21 [i_5] [i_5] = ((var_5 ? var_6 : (arr_16 [i_5])));
        var_22 = (arr_9 [i_5] [i_5]);
        var_23 = ((((max(1, (arr_1 [i_5])))) ? (((1073741823 ? (max(277565598, 1)) : var_3))) : (min(1, 4949468781555287079))));
    }
    #pragma endscop
}
