/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((var_12 ? -0 : var_2))) ? -18446744073709551597 : ((((~var_8) ? ((5509465076691033828 ? var_5 : var_8)) : (19696 <= var_7))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [1] |= ((~(((min((arr_0 [i_0]), (arr_1 [i_0] [6])))))));
        arr_3 [2] |= (((max((-99 + -1599648695), var_5)) << 1));
    }
    #pragma endscop
}
