/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (((!7) && (((10 ? 248 : var_7)))));
        arr_3 [i_0] [i_0] = 255;
        var_20 = -44;
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = ((~((min(248, 231)))));
        var_21 = min((min(158, (!235))), 87);
        var_22 = (max(var_22, ((((((8 ? (arr_5 [i_1]) : (((arr_1 [i_1]) * (arr_1 [i_1])))))) && ((max(((198 ? 179 : (arr_2 [i_1]))), 66))))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_23 -= 152;
        var_24 = (min(var_24, 255));
        arr_10 [i_2] [2] |= 126;
    }
    #pragma endscop
}
