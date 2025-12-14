/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((5 ? (arr_0 [i_0] [i_0]) : var_10));
        arr_3 [6] [i_0] |= 251;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 = (max(14709, (((!(((-2147483630 ? -4151063029129867687 : (arr_4 [i_1])))))))));
        var_17 ^= (min(((((max(var_9, (arr_5 [i_1])))) ? ((max(var_8, (arr_5 [i_1])))) : (!235))), (var_1 < 3990943202)));
        var_18 = (var_12 + 3482512008);
    }
    var_19 = var_3;
    #pragma endscop
}
