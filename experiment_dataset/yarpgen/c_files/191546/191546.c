/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0] [i_0]) ? -891865423 : (arr_1 [i_0] [i_0])));
        var_21 = (max(var_21, 144));
        arr_2 [11] [18] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    var_22 = (((((15958442927355529739 ? var_4 : 72))) ? var_14 : 64));
    #pragma endscop
}
