/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_18 = (((~(arr_3 [i_0 + 2] [i_0 + 1]))));
        var_19 = (max(var_19, ((((arr_2 [i_0 + 1]) ? (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0 + 1]))) : ((143 - ((222 ? 88 : 222)))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 *= (((arr_3 [i_1] [i_1]) ? 26081 : ((max(65442, 1)))));
        var_21 *= (!(((min(3068643645, (arr_6 [i_1]))))));
        var_22 = (((!-14315084061807639088) ? ((((((~(arr_2 [3])))) || (arr_0 [i_1])))) : ((-(arr_2 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_10 [3] = (~222);
        var_23 = 254;
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_15 [i_3] [i_3 + 1] = (((arr_14 [i_3 - 1]) ? (((arr_4 [4]) ? var_3 : var_0)) : (arr_6 [i_3])));
        var_24 = ((((((arr_5 [i_3 + 1]) ? (arr_3 [i_3] [i_3]) : 1))) ? ((246 ? 255 : 2)) : (arr_3 [i_3] [i_3])));
        var_25 = 241;
        arr_16 [i_3] = ((!(!165)));
    }
    var_26 = var_14;
    #pragma endscop
}
