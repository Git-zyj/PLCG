/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((((arr_0 [i_0] [i_0]) < (var_12 >= var_2))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_14 |= (arr_1 [i_1]);
            var_15 = (arr_0 [i_0] [i_0]);
        }
    }
    var_16 = ((!((min((!var_6), -var_7)))));
    var_17 = var_3;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (min(var_18, ((((arr_6 [i_2] [i_2]) * (arr_6 [i_2] [i_2]))))));
        var_19 = (((((((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : var_10)) == (((arr_5 [i_2]) / var_5))))) * (((((arr_6 [i_2] [i_2]) ^ (arr_5 [i_2]))) & (arr_6 [i_2] [i_2]))));
        var_20 = (((~0) ? (max((((arr_5 [i_2]) & var_5)), (((arr_6 [i_2] [i_2]) ^ var_12)))) : ((((((~(arr_5 [i_2]))) + 2147483647)) << (arr_5 [i_2])))));
        arr_7 [i_2] = var_12;
    }
    for (int i_3 = 4; i_3 < 24;i_3 += 1)
    {
        var_21 = (min(var_21, var_1));
        arr_11 [i_3] = 681901242;
        var_22 &= ((((~(arr_10 [i_3 - 4]))) + ((((((arr_10 [i_3]) >= (arr_9 [i_3 - 4])))) >> ((var_0 | (arr_10 [i_3 + 1])))))));
        var_23 = (((!1) * (max((!var_7), (((arr_8 [i_3] [i_3 - 2]) & (arr_10 [i_3])))))));
    }
    var_24 = (min(var_24, ((min(var_2, var_6)))));
    #pragma endscop
}
