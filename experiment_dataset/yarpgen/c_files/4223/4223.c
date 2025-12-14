/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((((arr_2 [i_0]) / 8387982762733313542)) <= (arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_14 |= ((((((arr_1 [i_1] [i_0]) ^ (arr_0 [i_1 - 1])))) ? (max(((-5081 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))), (arr_0 [i_0]))) : (arr_1 [i_0] [i_1])));
            var_15 |= ((max((arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1]), ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_1]) : var_3))))) + (-2147483647 - 1));
        }
    }
    var_16 = ((((((2047 - 67) - (-9223372036854775807 - 1)))) ? (((-127 - 1) ? -8387982762733313542 : 126)) : ((min(var_0, -1977106189)))));
    #pragma endscop
}
