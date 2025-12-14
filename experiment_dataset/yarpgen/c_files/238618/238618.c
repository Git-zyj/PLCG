/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_20 = (arr_2 [i_0 - 1]);
        var_21 = ((~(arr_1 [4])));
        arr_3 [i_0] [i_0] = (min((arr_2 [i_0 + 1]), (max(4294967286, 1452875416))));
        arr_4 [i_0 + 4] = ((!((min(502155320, -24782)))));
    }
    var_22 += (max(-2535848725866399808, -502155321));
    #pragma endscop
}
