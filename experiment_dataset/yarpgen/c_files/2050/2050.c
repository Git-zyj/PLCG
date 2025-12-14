/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (~var_8);
                var_12 = var_1;
                var_13 = max((2147483637 / var_4), ((-839016250 ? -1027570486 : -204732301)));
            }
        }
    }
    var_14 = (max(var_14, (((var_10 + 2147483647) >> (var_2 + 924997440)))));
    var_15 = (var_4 >> ((-(!var_2))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = var_10;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, (!204732301)));
                                var_18 = (min(var_18, ((1306150195 ? 204732278 : (arr_14 [i_2] [i_3 - 2] [i_4] [i_3 - 2] [i_4] [i_2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_23 [i_2] [i_3 - 2] [i_4] [i_2] [i_8] = (var_1 ? var_2 : ((var_0 ? var_8 : 0)));
                                var_19 = (min(var_19, (((((-2147483642 ? -1 : 204732299))) ? (((arr_13 [i_2] [i_2] [i_7]) ? -204732315 : -204732315)) : -1471569865))));
                                var_20 = ((((-535643043 + 2147483647) >> (1023 - 997))) % (((arr_21 [i_2] [i_3 + 1] [i_2] [i_2]) >> (var_5 - 1565392393))));
                                var_21 ^= (var_10 | (arr_21 [2] [i_3 - 1] [i_3 - 1] [i_4]));
                            }
                        }
                    }
                    var_22 &= (-((var_1 << (var_9 - 1473803526))));
                }
            }
        }
    }
    #pragma endscop
}
