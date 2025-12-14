/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (max(59160, var_16));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (min(2169212910, 2125754386));
        var_21 = (max(-1702429483, 144114638320041984));
        arr_5 [i_0] [i_0] = 33;
        var_22 = (arr_1 [i_0]);
        arr_6 [i_0] [i_0] = (arr_2 [i_0]);
    }
    var_23 |= (min(144114638320041984, -579403696));
    #pragma endscop
}
