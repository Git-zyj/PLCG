/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 -= var_12;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(!65535)));
        arr_3 [i_0] [i_0] = (~0);
        arr_4 [i_0] = (!1);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_19 &= (((((1 ? 2840683595 : 2840683595))) ? (arr_5 [i_1 - 2]) : (((-53 ^ (arr_7 [i_1 + 3] [i_1 + 3]))))));
        var_20 = -74;
        var_21 = (((((-(arr_7 [i_1 + 1] [i_1]))))) ? (arr_5 [i_1]) : (min((arr_1 [i_1 - 1]), 0)));
    }
    #pragma endscop
}
