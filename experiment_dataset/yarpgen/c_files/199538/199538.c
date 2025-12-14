/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((0 % 250) == ((-var_1 - (6 ^ 1381922143)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 3] = (min(3644479259, 5));
        arr_4 [i_0] = 5;
        var_17 = (((251 ? -1 : 18446744073709551615)));
        arr_5 [i_0] = (max(((6 << (((-28 + 59) - 3)))), (-250 % 3)));
    }
    #pragma endscop
}
