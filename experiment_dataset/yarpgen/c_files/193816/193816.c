/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [1] = ((((3 ? (25409 + 1) : ((~(arr_0 [i_0 + 4] [i_0]))))) ^ ((((min(1, (arr_0 [i_0 - 1] [i_0])))) << (((arr_0 [i_0] [i_0 + 3]) - 12879))))));
        var_20 = -120;
        var_21 = min(((((arr_1 [i_0 + 4]) && (((var_2 ? 1 : 1)))))), (max(((18446744073709551615 << (3406503226 - 3406503172))), (arr_0 [i_0 + 2] [i_0 + 2]))));
    }
    var_22 = var_3;
    var_23 &= var_17;
    #pragma endscop
}
