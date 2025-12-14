/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(24, var_2));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0 - 1] = (~(min(1720195755, 1397332859)));
        var_12 = ((((((-9223372036854775807 - 1) ? 1481471463 : 1481471463))) * ((var_8 ? -1481471463 : var_8))));
        arr_5 [i_0] |= (~(var_3 + 1615111994));
    }
    var_13 = 1;
    #pragma endscop
}
