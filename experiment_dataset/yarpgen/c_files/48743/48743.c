/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((((var_13 < (72057594033733632 % 1461214209))))) >= ((265827400267045650 ? (min(1212817925, 1461214230)) : 7)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 1] = ((-(arr_1 [i_0 - 1] [i_0 - 1])));
        var_20 = var_4;
    }
    #pragma endscop
}
