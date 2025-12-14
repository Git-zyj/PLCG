/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_0) ? var_9 : (min(var_3, (min(var_2, var_11))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [12] &= (!((((arr_2 [i_0] [i_0]) ? (arr_1 [8]) : var_10))));
        arr_4 [i_0] = ((!(~var_10)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 &= (min((~var_3), (((!var_11) ? (arr_0 [2]) : (arr_2 [i_1] [i_1])))));
        var_15 &= var_11;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_16 = (((!var_2) ? var_10 : (max((min(var_2, var_10)), var_1))));
        var_17 -= (max(1448456818, ((((min((arr_8 [1] [14]), var_2))) ? (arr_2 [i_2] [i_2]) : var_12))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_18 = (arr_1 [0]);
        arr_14 [i_3] = (((arr_10 [i_3 - 1]) * (!8463458097131504855)));
        arr_15 [i_3] [i_3] = (((arr_2 [i_3 - 1] [i_3 - 1]) ? (arr_5 [i_3 - 1]) : (((arr_13 [i_3]) ? var_5 : 1944496806))));
        var_19 = var_3;
        arr_16 [3] = (((arr_1 [0]) > var_9));
    }
    var_20 = (min(var_20, (((!(((~((var_4 ? var_9 : var_8))))))))));
    var_21 = var_10;
    var_22 = (max(var_22, var_6));
    #pragma endscop
}
