/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_0 [i_0] [i_0]), 0));
        var_17 = min(((49313 * (arr_0 [i_0 + 1] [i_0]))), (~16212));
        var_18 = (max(var_18, ((min((arr_1 [6]), (((((((!(arr_0 [i_0 + 3] [16]))))) == (arr_1 [2])))))))));
        var_19 = (max(var_19, (((((((min(9223372036854775807, var_14)) < var_1))) >> ((((~(arr_0 [i_0 + 3] [12]))) + 17)))))));
        arr_3 [i_0] = var_4;
    }
    var_20 = ((!(!16223)));
    #pragma endscop
}
