/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((-27319 & (((1120599680 && (arr_0 [i_0]))))));
        var_19 += (var_15 >= 6867657487709705522);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (-2147483647 - 1);
        var_20 += ((0 || (arr_5 [i_1] [i_1])));
    }
    var_21 = (max(1, var_3));
    #pragma endscop
}
