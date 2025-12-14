/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        arr_3 [1] [i_0] = var_13;
        var_14 = var_8;
        var_15 &= 960;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 0;
        var_16 = ((((!(arr_4 [i_1]))) ? (((var_0 ? (arr_4 [i_1]) : (arr_4 [i_1])))) : (max((arr_4 [i_1]), 138598372))));
        var_17 = ((~(!var_12)));
    }
    var_18 = (var_10 * var_3);
    var_19 = (max((max(var_13, (((var_8 ? 12 : 53740))))), (((((var_8 ? 241 : 0))) ? ((max(-1024, 882443966))) : var_0))));
    var_20 = ((((((max(var_11, var_2))) >= ((var_1 ? var_1 : 7505798668367118077)))) ? var_0 : (((~(~var_7))))));
    #pragma endscop
}
