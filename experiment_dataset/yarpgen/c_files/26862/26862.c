/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((((~var_12) ? var_9 : ((var_10 ? var_2 : var_1))))) ? (max((4095154421263506314 % 31572), var_10)) : (((var_6 % var_8) ? (((var_1 ? var_12 : var_12))) : (max(var_0, var_8)))))))));
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [8] [8] &= ((((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) && var_8));
        var_15 = (min(var_15, (((((~var_3) && ((max(var_4, var_11))))) ? (((arr_1 [12]) * (var_3 / var_8))) : ((((max(var_12, -977179578573908257)) + (arr_0 [4]))))))));
        var_16 = arr_2 [i_0] [i_0];
    }
    var_17 = (max(var_8, ((min(var_12, var_5)))));
    var_18 = (var_10 ? var_3 : (((((max(var_2, var_4)))) & (~var_6))));
    #pragma endscop
}
