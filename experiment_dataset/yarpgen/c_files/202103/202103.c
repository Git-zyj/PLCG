/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 &= (arr_2 [i_0] [i_0 - 1]);
        var_11 = (arr_2 [i_0] [i_0]);
        var_12 = ((((((arr_0 [i_0] [i_0]) ? var_3 : -4634807372347943494))) ? (arr_2 [i_0] [12]) : ((((((arr_1 [i_0]) * (-2147483647 - 1)))) ? (min((arr_1 [i_0 + 1]), (arr_2 [i_0] [i_0 + 1]))) : (((((arr_0 [i_0 + 2] [i_0]) < (arr_1 [i_0])))))))));
    }
    var_13 = ((min((((var_8 ? 86 : 1))), (-2147483647 - 1))));
    var_14 = (min(var_14, ((max((min(var_8, var_3), -108))))));
    var_15 = (min(var_0, (max((min(var_2, var_3)), (var_2 || var_5)))));
    #pragma endscop
}
