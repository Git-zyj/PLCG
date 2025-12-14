/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max(6, ((var_10 ? (~53272) : (var_3 <= 0)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0 - 1] = 32766;
        var_12 = (((arr_0 [i_0]) ? (var_0 <= var_9) : (((arr_3 [i_0 - 1] [i_0 - 1]) * 12264))));
    }
    var_13 = 9722802416162135501;
    var_14 = (~(min(((var_3 ? 18 : var_1)), (~-678499924))));
    #pragma endscop
}
