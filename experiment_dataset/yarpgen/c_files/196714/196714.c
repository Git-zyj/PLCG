/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (10 + var_0);
        var_18 -= var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = -201484063;
                    arr_9 [i_0] [i_1] [i_2] = var_5;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 = (arr_7 [i_3] [i_1]);
                        var_21 *= (((arr_8 [9] [1] [i_2] [9]) ? (arr_10 [i_1] [i_2] [i_1] [i_0]) : (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 3])));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_0] = (18446744073709551615 / 151);
                        arr_18 [i_0] = ((12321673914572712431 ? 127 : -1));
                        var_22 = (155 < -201484063);
                        var_23 += (((-84 + 2147483647) << (17 - 17)));
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_23 [i_1] = (arr_15 [i_0] [i_0] [i_2 + 1] [i_0] [i_5 - 2] [i_2]);
                        arr_24 [i_0] [i_0] [i_0] [4] = (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1]);
                        arr_25 [i_0] [i_0] [i_0] [i_0] = 4279527521752927243;
                    }
                }
            }
        }
    }
    var_24 = (min(((-((min(var_7, var_4))))), var_5));
    #pragma endscop
}
