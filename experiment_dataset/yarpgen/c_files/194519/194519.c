/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_2 [i_0] [i_0])));
        var_12 = (min((arr_2 [i_0] [i_0]), (((((10284213549562670218 ? -289066598224217892 : -74)) > 289066598224217891)))));
        var_13 = (((-3621 ^ -74) | (arr_2 [i_0] [1])));
    }
    #pragma endscop
}
