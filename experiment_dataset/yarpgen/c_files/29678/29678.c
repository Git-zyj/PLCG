/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((356850839 == 65523) ? (arr_0 [i_0]) : ((min(1, 56300)))))));
        var_16 = ((((((max(0, (arr_0 [i_0])))) ? 1 : (min(var_8, (arr_1 [i_0]))))) * ((((((max(25533, 1))) < var_1))))));
        var_17 = (max(var_17, (((~(((0 ^ 14) ? 13 : ((1776975146902349816 ? 56300 : 1)))))))));
        arr_3 [i_0] = (((((min((arr_1 [i_0]), 22263)) * -15))) ? (1 == 1686359070) : ((1 ? 65523 : (arr_0 [i_0]))));
    }
    var_18 = ((((((((14 ? 14595164092126603021 : 6997566580999748327))) ? -34804 : 1))) ? ((((max(5918980446476628128, 0))))) : ((var_10 ^ ((var_1 ? var_7 : 12))))));
    #pragma endscop
}
