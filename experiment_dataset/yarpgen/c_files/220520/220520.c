/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_8 / -36)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) + 72057594037927904));
        arr_3 [i_0] [i_0] = (-100 - var_8);

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_19 += 16840697233704578667;
            var_20 = ((-(arr_1 [i_1 - 1] [i_1 + 1])));
            var_21 = 3;
        }
    }
    #pragma endscop
}
