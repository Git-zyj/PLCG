/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_2;

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = (arr_4 [i_0]);
            var_13 = (max(var_13, (arr_6 [i_0] [i_1])));
        }
        var_14 = var_1;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_15 = (min((min(((1 ? (arr_11 [3] [3]) : var_7)), (arr_10 [i_2] [i_2]))), ((((~var_12) - ((32763 ? (arr_12 [i_2] [i_2]) : 4294967295)))))));
        arr_13 [i_2] = (!4294967290);
        var_16 = (((-(arr_9 [i_2] [i_2]))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_18 [i_3] = (min((arr_17 [i_3]), (min((arr_14 [i_3] [8]), 2147483647))));
        var_17 = (max(var_17, (((((min((arr_17 [i_3]), (arr_17 [i_3])))) > ((((arr_17 [i_3]) < 1))))))));
        var_18 &= (4294967295 ? ((-(arr_16 [i_3]))) : ((-(arr_16 [i_3]))));
        arr_19 [i_3] = (min((arr_15 [i_3]), ((min((min(1, 4294967273)), (!1))))));
    }
    var_19 &= (((((((4294967284 ? var_2 : var_2)) > (0 > var_10)))) >> ((((var_12 ? var_3 : var_11)) + 62))));
    var_20 = var_12;
    var_21 = ((-((((min(1, var_3))) ? (var_10 / var_9) : (min(var_4, 7480858976805482499))))));
    var_22 = (max(var_22, ((min((((4294967295 % var_9) ^ (var_2 % 1))), (~4294967295))))));
    #pragma endscop
}
