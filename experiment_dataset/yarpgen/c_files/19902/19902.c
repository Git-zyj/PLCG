/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_0]) + 1703673155)) - 15))))));
        var_16 = (min(var_16, ((~(((((arr_0 [i_0]) % 1759918508))))))));
        var_17 *= (min((max((-1759918507 >= var_5), (arr_1 [i_0] [i_0]))), ((((arr_1 [i_0] [5]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_18 = (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
    }
    var_19 = var_5;
    #pragma endscop
}
