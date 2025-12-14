/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((min(37773, 37773))) > (((var_7 || var_4) ? ((var_6 >> (var_2 - 23548))) : 28244)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (-9 > 27763);
        var_12 ^= arr_2 [i_0];
        arr_4 [i_0] = 31638;
    }
    var_13 = (29937 / 37763);
    var_14 = var_4;
    var_15 &= var_6;
    #pragma endscop
}
