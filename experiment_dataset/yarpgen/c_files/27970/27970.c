/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~-18446744073709551607) ? ((((var_5 ? var_9 : 2)) >> (var_6 - 189))) : ((((((82 ? -1963726350 : -643199261))) ? var_5 : (-89 && var_7)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (arr_2 [i_0]);
        var_13 = (min(var_13, (arr_2 [i_0])));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_14 = (min(var_14, ((((((-13524 ? (-2147483647 - 1) : (arr_4 [i_0] [i_1] [i_1])))) & 2356011375)))));
            var_15 &= 17858;
            var_16 &= (((((65535 ? 18446744073709551615 : 1938955920))) ? ((((arr_3 [i_0] [i_1]) ? var_10 : (arr_2 [i_0])))) : (arr_4 [i_0] [i_0] [i_0])));
        }
        var_17 ^= (arr_0 [i_0] [i_0]);
        arr_5 [i_0] &= -var_4;
    }
    var_18 = 1938955920;
    var_19 &= var_10;
    var_20 = ((var_7 / (~var_4)));
    #pragma endscop
}
