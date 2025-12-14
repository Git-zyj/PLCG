/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((9479174906798595774 ? 0 : 3)), ((min(var_2, 255)))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_14 ^= ((((((((var_8 ? (arr_0 [i_0] [i_0]) : (arr_1 [1] [1])))) ? 3188069651952955368 : (arr_1 [1] [i_0 - 2])))) ? var_1 : ((max((max(var_9, var_1)), 48)))));
        arr_3 [i_0] = (arr_1 [i_0 - 3] [2]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_15 = (~var_12);
        arr_8 [i_1] = (~var_8);
        arr_9 [i_1] |= (1 - ((var_9 ? (arr_4 [3] [i_1]) : (arr_7 [i_1 + 1]))));
        arr_10 [i_1] [i_1] |= (~-22231);
        arr_11 [23] = (arr_6 [i_1 - 1]);
    }
    var_16 = (min(((var_4 ? var_2 : (var_10 / var_3))), var_3));
    #pragma endscop
}
