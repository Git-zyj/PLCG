/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((((((var_6 ? (arr_1 [10]) : (arr_2 [i_0] [i_0]))) + (((-31423 ? 230 : 230)))))) ? (max(var_10, 230)) : var_9));
        arr_4 [i_0] [i_0] &= (min(26, 1764500871078894404));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = min((-4102208250596393057 >= 26), (min(var_8, (arr_2 [i_1] [i_1]))));
        var_11 = var_6;
        var_12 = (max(var_12, (((-31361 ? (((((arr_6 [0]) != 230)) ? 4050818037 : ((((1764500871078894404 > (arr_1 [i_1]))))))) : ((((((67 ? var_5 : var_8)) >= 84)))))))));
        arr_9 [i_1] = (arr_5 [i_1]);
        var_13 = (max(var_13, ((((arr_1 [i_1]) ? (arr_1 [i_1]) : (((arr_1 [i_1]) ? ((-(arr_2 [i_1] [i_1]))) : (var_10 != var_8))))))));
    }
    var_14 = (!var_8);
    var_15 &= var_8;
    var_16 = ((~((var_9 ? var_2 : -95))));
    #pragma endscop
}
