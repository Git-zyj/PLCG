/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_16, var_11));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 = (min(var_17, 0));
            var_18 = (((((arr_2 [i_0] [i_0]) ? var_2 : (arr_0 [i_0]))) << (18446744073709551614 - 18446744073709551607)));
            var_19 = (min(var_19, (((893342118 / (arr_4 [i_0] [i_1]))))));
        }
        var_20 -= ((2 ? 31020 : 47875));
    }
    var_21 -= -var_1;
    #pragma endscop
}
