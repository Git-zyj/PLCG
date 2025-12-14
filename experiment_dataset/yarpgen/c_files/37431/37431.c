/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (13448 % 8959);
        arr_3 [i_0] = ((var_3 ? (arr_1 [i_0]) : var_11));
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((max(var_2, var_9)) < (((max(1, (arr_5 [i_1] [i_1]))))))));
        var_19 = ((((((!(((-8960 ? var_14 : 8953))))))) * (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((((~(arr_5 [i_2] [i_2]))) * (((-8959 > (arr_0 [i_2] [i_2]))))));
        var_20 = (min(var_20, var_10));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_21 = (max(var_21, (((var_2 ? var_11 : var_13)))));
        arr_14 [i_3] = (min((((8959 ? -8938 : -26142))), (min((min((arr_4 [i_3]), (arr_5 [i_3] [i_3]))), (var_16 && -8962)))));
    }
    var_22 = var_5;
    var_23 = (((((~var_11) ? var_13 : (26165 / 26141)))) ? (((~(var_15 % -26142)))) : ((-var_11 ? (~4294967295) : -8962)));
    #pragma endscop
}
