/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? var_10 : (min(16, 18446744073709551599))));
    var_21 = (max(var_21, var_4));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_22 = ((var_6 ? var_9 : 0));
        var_23 = (max(var_23, (((!(-2147483647 - 1))))));
        arr_2 [i_0] = ((16 <= (-2147483647 - 1)));
    }
    #pragma endscop
}
