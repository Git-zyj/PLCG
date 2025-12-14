/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_1;
    var_15 = (!var_8);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 3] [i_0 - 3] = ((((var_12 ? 228 : 30353)) <= (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0 + 1]) : var_10))));
        arr_3 [i_0 + 2] [1] = (((!var_5) >> (-15808 + 15824)));
    }
    #pragma endscop
}
