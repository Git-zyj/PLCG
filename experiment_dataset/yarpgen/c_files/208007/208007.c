/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] [i_2] = 64;
                        var_10 = ((-56 ? 46 : ((var_9 ? 69 : var_1))));
                    }
                }
            }
        }
        var_11 = (~var_3);
        var_12 = (~var_5);
    }
    var_13 = var_5;
    var_14 = (min((((var_1 || (~55084)))), (58 % 511432689)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            {
                arr_13 [i_4] [i_5] [i_5 - 1] = (-64 / 80);
                arr_14 [i_4] [i_4] [17] = (max(((-var_4 ^ ((max(3, 1615007704))))), (max(var_4, var_0))));

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_15 = (((((~var_2) & (min(3346163107, var_6)))) != (((((arr_15 [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 2]) != -33285))))));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_16 = (((29494 & 58) ? (arr_15 [i_4] [i_5] [i_4] [22]) : (arr_17 [i_7 - 1] [i_5 - 1])));
                        var_17 = (3346163120 % 384);
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_18 = (min(var_18, (68 > -7961)));
                        arr_23 [i_4] [i_4] [i_6] = (((max(2609820915198214287, ((16368 ? var_4 : var_1)))) & (((min(-91, var_2))))));
                    }
                }
                arr_24 [7] = 4;
            }
        }
    }
    #pragma endscop
}
