/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [12] &= ((!(arr_0 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 += 2226091147;
            var_20 -= 0;
            var_21 += (arr_1 [i_0 + 3] [i_0 + 3]);
        }
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_22 = (min(var_22, ((max((arr_6 [i_2] [i_2]), (((arr_7 [i_2] [i_2 + 1]) * (((arr_7 [i_2] [i_2 + 2]) * (arr_7 [i_2] [i_2]))))))))));
        var_23 = (min(var_23, var_1));

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_24 = (((arr_7 [i_2] [i_3 + 4]) * ((14875958143421759485 - (arr_7 [20] [i_3 + 4])))));
            arr_10 [i_2] [i_2] |= min(75, 3570785930287792131);
            arr_11 [i_2] [i_2 + 2] [4] = ((-(((14875958143421759483 * 3570785930287792132) / ((((arr_9 [i_2]) ? 2068876148 : 2068876144)))))));
            var_25 = (min((((-(((arr_7 [i_3 - 1] [i_2]) * 1))))), -18446744073709551615));
        }
    }
    var_26 = 65535;
    #pragma endscop
}
