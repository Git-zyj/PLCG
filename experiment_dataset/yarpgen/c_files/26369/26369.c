/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-127 ? var_7 : 0));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 |= ((-(arr_2 [i_0])));
        var_17 = (max(var_17, -5676674536047736812));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_1 - 1] = (((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_3 [i_1 + 2] [i_1] [0]) : 1235186983));
            var_18 = (((arr_3 [i_1] [i_1 + 2] [i_1]) | (arr_3 [0] [i_1 + 2] [i_0])));
        }
    }
    #pragma endscop
}
