/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (var_3 & 28)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 &= ((!(((var_9 ? 23106 : var_9)))));
            var_13 |= (((arr_1 [i_0 + 1]) ? (-364465357 || var_9) : 1465010157));
            var_14 ^= (~(arr_5 [i_1] [i_0 - 1]));
            var_15 ^= var_7;
        }
        arr_6 [0] [i_0] &= (arr_4 [i_0]);
        arr_7 [i_0] = (((((var_9 ? var_4 : (arr_0 [4])))) ? -var_6 : (4294967281 - -125)));
    }
    #pragma endscop
}
