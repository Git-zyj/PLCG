/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max((min(-42, -35)), (min(-117, 31))))) ? (min(((var_6 ? 16 : var_1)), var_9)) : 160));
    var_11 = min(23, 107);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((((max(-31, 16))) ? var_2 : 127))) ? var_4 : ((((arr_2 [i_0] [i_0 - 2]) >= (arr_0 [i_0 - 2] [i_0]))))));
        var_12 = (min(var_12, (arr_1 [i_0 + 1])));
        var_13 ^= ((~((var_3 >> (7 & var_5)))));
        arr_4 [i_0] = (max(((max(144, var_0))), (min(((-36 ? 34 : (arr_2 [i_0 - 2] [i_0]))), (arr_1 [i_0 + 1])))));
        var_14 = (min(var_14, (max((((50 || (arr_2 [i_0 - 1] [i_0 - 2])))), 28))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = ((-((~(arr_0 [i_1] [20])))));
        var_15 = (min(var_15, (((-(-54 / var_3))))));
    }
    #pragma endscop
}
