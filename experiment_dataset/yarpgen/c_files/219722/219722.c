/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = -116;
        var_20 = (min(231, 18446744073709551615));
        arr_2 [i_0] [i_0] = ((-16 ? -16 : (max((arr_0 [i_0] [i_0]), 19))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_21 = (arr_1 [i_1] [i_1]);
        var_22 = (((max(var_4, -255))) ? ((((!(arr_4 [6]))))) : (max((min((arr_3 [5] [i_1]), 2147483647)), (max((arr_1 [i_1] [i_1]), (arr_0 [i_1] [i_1]))))));
    }
    var_23 = (min(var_1, var_6));
    #pragma endscop
}
