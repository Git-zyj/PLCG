/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((min((8973 ^ 54046), (max(var_8, var_2)))) % ((min(var_1, 246))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = ((((min((arr_2 [i_0 - 1]), 56563))) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 2])));
        var_17 = ((((~var_7) ? ((8988 ? 17196242 : 896)) : (((!(arr_0 [i_0 + 1])))))));
    }
    #pragma endscop
}
