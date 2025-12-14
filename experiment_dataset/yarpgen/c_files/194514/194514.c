/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -13));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_20 = -2129546312;
        var_21 = ((-((-(arr_0 [i_0 + 4])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_3] [i_2] = var_9;
                        var_22 = (min(var_22, (((-2129546332 ^ (~var_8))))));
                        var_23 = (min(var_11, var_0));
                        arr_11 [i_0 - 1] [10] [i_3] = ((-(arr_0 [i_0])));
                        var_24 = (min(((((-31920 != 1125899906834432) != (arr_7 [1] [13] [i_3] [i_3])))), ((var_0 ? (arr_7 [i_3] [i_3 - 1] [i_3] [i_3]) : -113))));
                    }
                }
            }
        }
        arr_12 [i_0] = ((1979422434 ? (((((max(var_16, (arr_5 [8] [i_0] [i_0 - 1]))) < (1979422443 <= 31919))))) : (arr_8 [i_0 + 3] [i_0 + 4] [i_0 - 1] [i_0] [i_0] [i_0 + 4])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_25 ^= var_3;
        var_26 = -1513232076;
        var_27 = ((var_18 ^ (var_18 > var_5)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((!(((-(arr_17 [i_5] [i_5]))))));
        arr_20 [i_5] = var_9;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_28 = (-13 & -13);
        var_29 = (max((((846 ? 0 : 2147483647))), (arr_18 [i_6])));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_30 = -2315544850;
                var_31 = ((((var_6 < (arr_27 [i_7] [i_7] [i_7])))) - var_7);
                var_32 = (arr_27 [i_8] [i_8] [i_7]);
            }
        }
    }
    var_33 = ((~(min(var_0, var_12))));
    #pragma endscop
}
