/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (arr_2 [i_0]);
        arr_3 [i_0] [i_0] = ((((((arr_1 [2]) ? var_6 : ((((!(arr_0 [i_0])))))))) || (arr_2 [i_0])));
        var_14 = (var_6 || var_4);
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) ? (min(((max(var_9, -926847311))), var_10)) : (((arr_2 [i_0]) + (min(var_7, var_10)))));
    }
    var_15 *= ((((((33554400 ? var_1 : var_11)))) ? var_7 : ((var_9 ? (2147483646 == 0) : var_5))));
    var_16 = (max(0, ((max(var_7, var_8)))));
    var_17 = (~-4236176972957822675);
    #pragma endscop
}
