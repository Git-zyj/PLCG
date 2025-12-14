/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((!var_16) ? var_4 : (((var_2 ? var_6 : var_8)))))) ? var_0 : var_3));
    var_20 = (((!((((var_15 + 9223372036854775807) << (var_9 - 240715531)))))) ? (((var_9 > var_14) >> (var_5 - 3171190213))) : var_2);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((((~(arr_1 [i_0] [i_0]))) + 2147483647)) << ((min((arr_1 [i_0] [i_0]), var_2)))));
        var_21 = (min(var_21, (min((arr_1 [i_0] [i_0]), (min((min(var_10, 2959169157714107616)), var_9))))));
        arr_4 [i_0] = (min((arr_0 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : 98))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = ((((min((arr_2 [i_1]), var_9))) % var_4));
        var_22 = (((((min((arr_2 [i_1]), (arr_6 [i_1] [i_1])))) >= -1)));
    }
    #pragma endscop
}
