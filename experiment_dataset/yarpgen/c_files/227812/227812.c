/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = max(((min(176, -5))), (11 + 3933170208212853058));
        arr_4 [i_0] = (max((max((min(var_8, 96)), (!8))), 3));
    }
    var_18 = var_10;
    var_19 = var_6;
    #pragma endscop
}
