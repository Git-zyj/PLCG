/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_4 ? (((2147483644 && 58637) ? (min(6916, 325379522848148810)) : 43686)) : var_3);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_12 = (var_1 & var_5);
        arr_3 [i_0 - 1] = (((arr_1 [i_0 - 3]) ? var_1 : 9755));
    }
    var_13 |= (min(63845, (~9223372036854775807)));
    #pragma endscop
}
