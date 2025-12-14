/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = var_9;
        var_11 = var_2;
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        var_12 = (max(var_12, (((((min(((min(var_5, (arr_3 [i_1 - 3] [i_1 + 2])))), ((var_0 ? var_2 : var_6))))) ? (((!(((-(arr_2 [i_1] [i_1 - 4]))))))) : (((((var_6 ? var_2 : (arr_2 [20] [i_1 + 2])))) ? (arr_3 [i_1] [i_1]) : ((-1 ? var_5 : var_1)))))))));
        var_13 = (max(var_13, var_8));
        arr_4 [4] = (((((~(((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1 - 2] [i_1 - 2])))))) ? (((-(arr_2 [i_1 - 2] [i_1 - 4])))) : var_2));
        var_14 = (min(var_14, ((min((((arr_3 [i_1 - 4] [i_1 - 2]) % var_4)), ((~(arr_2 [i_1 + 2] [15]))))))));
    }
    var_15 = (max((var_7 && -15), ((!(var_2 && var_9)))));
    #pragma endscop
}
