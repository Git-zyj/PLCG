/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 ^= (-(arr_2 [i_0] [i_0]));
        var_12 = -44318;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 = (arr_3 [i_1]);
        var_14 -= (max((max((((2474808093 != (arr_4 [i_1])))), (arr_3 [i_1]))), (arr_3 [i_1])));
        var_15 += (((arr_3 [i_1]) << (((!(arr_3 [i_1]))))));
    }
    var_16 = var_8;
    var_17 *= var_2;
    #pragma endscop
}
