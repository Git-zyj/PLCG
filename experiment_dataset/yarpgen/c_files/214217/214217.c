/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = ((!(((-(arr_2 [i_0] [13]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 ^= ((~(arr_3 [10] [12] [i_0 + 2])));
            var_22 = (arr_4 [i_0]);
            var_23 = -498030069;
            var_24 = (arr_4 [i_0]);
        }
    }
    #pragma endscop
}
