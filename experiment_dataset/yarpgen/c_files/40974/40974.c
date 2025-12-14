/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_10;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_14 ^= (((((-(arr_2 [i_0 - 1] [i_0 + 2])))) ? var_5 : (arr_2 [i_0] [i_0 + 2])));
        arr_3 [i_0 - 1] = var_1;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((-(arr_0 [i_1])))));
        var_15 = 14181494030223444478;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_16 = (max(var_16, (((((~(arr_9 [i_2 + 3] [i_2]))) * (((arr_9 [i_2 + 1] [i_2 - 1]) ? (arr_9 [i_2 + 1] [i_2 + 3]) : var_0)))))));
        var_17 = (max(var_17, ((min(((1 ? 4265250043486107122 : 14181494030223444502)), (arr_8 [i_2]))))));
        arr_10 [i_2] [i_2] = (arr_9 [i_2 + 3] [i_2 + 3]);
        arr_11 [i_2 - 1] [i_2 - 1] = (((((15824999576744928565 ? (((arr_7 [i_2 - 1] [0]) ? (arr_7 [i_2] [i_2 + 2]) : var_6)) : (arr_8 [i_2])))) ? var_5 : ((-3612569889684021464 / (max((arr_7 [i_2 + 2] [i_2 + 2]), var_3))))));
    }
    var_18 |= (((((15552 ? var_3 : var_10)) << ((((2363184155 << (var_11 - 3746144423))) - 2204106716)))));
    var_19 ^= -62;
    #pragma endscop
}
