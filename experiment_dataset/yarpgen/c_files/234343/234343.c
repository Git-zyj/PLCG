/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_3 [i_0]);
        arr_4 [i_0] = (!var_11);
        arr_5 [i_0] [i_0] = var_2;
        var_17 = (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_18 = ((((~(arr_7 [i_1] [i_1]))) | (arr_0 [i_1] [i_1])));
        var_19 = (min(var_19, (((!(arr_3 [i_1]))))));
        var_20 += (arr_2 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = (max((min((arr_0 [0] [i_2]), -1361236813)), (((552868154 ? 552868164 : -72)))));
        arr_11 [i_2] [i_2] = (max(2096583408, 552868147));
    }
    #pragma endscop
}
