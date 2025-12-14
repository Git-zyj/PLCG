/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_15 ? var_16 : var_4)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = min((arr_2 [i_0] [i_0]), ((~(18446744073709551615 | 6))));
        arr_5 [9] = 1038478685;
        arr_6 [i_0] = 3256488610;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_19 &= var_2;
        arr_9 [i_1] = (!-var_8);
        var_20 = (max(var_20, (arr_7 [i_1 + 1] [i_1 + 1])));
    }
    #pragma endscop
}
