/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((max(var_5, (max(0, 0))))), 466986848507205951));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 63;
        var_12 |= (arr_1 [4]);
    }
    var_13 ^= ((var_10 ? (max(((min(var_9, var_8))), ((var_3 ? var_6 : 2)))) : ((-1027232293 ? 2047 : 255))));
    #pragma endscop
}
