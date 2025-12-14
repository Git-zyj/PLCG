/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] |= 20616;
        arr_3 [i_0] &= (arr_1 [i_0] [i_0]);
        var_16 ^= min(68, 58);
    }
    var_17 &= (((((!((max(var_3, 32767)))))) << ((((15 ? 58 : 10896487336704709296)) - 56))));
    var_18 = (min(0, 8589934591));
    #pragma endscop
}
