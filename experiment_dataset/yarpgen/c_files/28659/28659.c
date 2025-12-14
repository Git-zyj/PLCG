/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((0 ? (var_3 >= 2280504012) : var_5)) == (max(-var_5, ((max(2280504012, 2014463271)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 |= var_1;
        var_12 = (max(var_12, (arr_0 [i_0])));
        var_13 ^= (arr_1 [1]);
        arr_3 [i_0] = (max((10 || 18446744073709551615), (((var_1 >= 2280504018) ? (4798685594531902523 + var_2) : (arr_0 [i_0])))));
    }
    #pragma endscop
}
