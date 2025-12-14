/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = ((((arr_1 [i_0 + 1]) ? 23 : (arr_1 [i_0 + 1]))));
        arr_4 [i_0] = 203;
        var_16 = (arr_3 [i_0] [7]);
    }
    var_17 = (((((~((max(var_6, 196)))))) ? ((var_7 ^ (max(var_4, var_0)))) : (!193)));
    #pragma endscop
}
