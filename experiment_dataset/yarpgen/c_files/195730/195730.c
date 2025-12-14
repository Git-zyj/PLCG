/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = var_6;
    var_15 ^= var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(192, 64));
        var_17 = (max(var_17, 184));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 = 89;
            var_19 = 7;
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (63 == var_0);
        var_20 = (var_5 - 104);
    }
    #pragma endscop
}
