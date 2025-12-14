/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = var_6;
        var_15 = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = (max(var_16, ((((arr_0 [i_1] [i_1]) ? 16704271242173273562 : var_4)))));
        arr_5 [i_1] [i_1] = 1742472831536278054;
        arr_6 [i_1] [i_1] &= (((arr_4 [i_1] [i_1]) ? var_7 : 5035267536906124959));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_17 = (((((arr_7 [i_2]) ? 763710795523375456 : (arr_1 [i_2]))) << ((((((((max((arr_3 [i_2]), var_3))) ? (((-(arr_7 [i_2])))) : 5765005963637862463)) + 48951)) - 12))));
        var_18 = (max(var_18, (((var_13 ? ((max((arr_0 [i_2] [i_2]), var_7))) : (arr_7 [i_2]))))));
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = (max(var_19, (~-1153715151691048371)));
        arr_14 [i_3] [i_3] = ((~(!255)));
        var_20 = (arr_12 [i_3] [i_3]);
        var_21 = var_1;
        arr_15 [i_3] = arr_11 [i_3];
    }
    #pragma endscop
}
