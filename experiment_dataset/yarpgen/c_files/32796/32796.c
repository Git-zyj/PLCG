/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] |= 65512;
        var_11 = (min(var_11, (arr_0 [17])));
        var_12 = 0;
    }
    var_13 = (min(3382579202, (((9223372036854775792 >> (var_10 - 14825))))));
    var_14 = 269261133024527563;
    var_15 = var_10;
    #pragma endscop
}
