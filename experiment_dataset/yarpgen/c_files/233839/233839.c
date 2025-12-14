/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = -27843;
        var_20 = var_15;
        var_21 = (min(var_21, ((((((var_3 ? 16352 : var_3))) ? var_6 : (arr_0 [20]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = ((!(((-(arr_1 [i_1] [i_1]))))));
        var_22 = (min(4294967295, (min((min(171, (arr_3 [i_1] [i_1]))), ((~(arr_3 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = (((3790197967 > 504769332) ? (((((var_0 ? var_14 : var_4))) ? ((((!(arr_0 [20]))))) : (min(var_0, 3790197985)))) : (arr_0 [16])));
    }
    var_23 *= min(((((min(var_16, var_4)) != (!var_7)))), ((var_4 ? (max(5764300276764933720, var_2)) : -var_14)));
    var_24 = -504769301;
    var_25 &= ((((!(!4294967295))) ? ((min((3790197985 & 1), (20 / 504769297)))) : (min(-var_1, ((min(var_19, 3790197995)))))));
    #pragma endscop
}
