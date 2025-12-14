/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (min((~854), (min((~854), (min(0, 57))))));
    var_19 = var_7;
    var_20 = -var_13;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((var_1 ? 127 : (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 210086004 : (arr_0 [i_0] [i_0]))) : (16256 + -544925094)))));
        arr_4 [i_0] &= 1153106998;
    }
    #pragma endscop
}
