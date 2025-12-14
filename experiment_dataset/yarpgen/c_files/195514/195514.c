/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = var_4;
        var_11 ^= (arr_0 [i_0]);
    }
    var_12 = (((min(-1617552623, (min(var_3, var_6)))) << (var_0 - 11205523788216845836)));
    var_13 = (min(var_13, 1444888494));
    var_14 = (min(1392114163, (max(((min(-1392114163, var_4))), (min(0, 0))))));
    #pragma endscop
}
