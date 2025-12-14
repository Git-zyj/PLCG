/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = ((var_13 ? -111 : var_7));
        var_18 = (min(var_18, (var_16 + 18446744073709551615)));
        var_19 &= (arr_0 [i_0] [i_0]);
        arr_2 [7] = (((((arr_0 [i_0] [i_0]) + 64)) >= -8191));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_20 *= ((~(arr_3 [i_1 - 2])));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = (min(var_21, var_7));
            var_22 -= var_13;
        }
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            var_23 += ((3037684531 & ((-1236472923969952927 - (arr_3 [i_1])))));
            var_24 = (((arr_5 [i_3 - 3] [i_1] [i_3 - 3]) ? (arr_5 [i_3 + 2] [i_1] [i_3]) : var_14));
            var_25 += 1;
        }
        var_26 += (arr_7 [i_1] [10] [8]);
    }
    var_27 = (((!var_8) * var_9));
    #pragma endscop
}
