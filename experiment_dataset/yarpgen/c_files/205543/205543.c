/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = ((((max(var_8, (arr_2 [8] [i_0])))) ? ((((158 == (arr_0 [1]))) ? ((((arr_0 [11]) >= 153))) : 108)) : (((97 != var_4) | var_4))));
        var_13 = var_3;
    }
    var_14 = (5 << 12);
    var_15 = (max((var_5 != var_0), (((max(var_9, 153)) * (var_4 / -102)))));
    #pragma endscop
}
