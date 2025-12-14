/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_0 + var_1);
    var_13 *= var_9;
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 ^= -31812;

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_16 = var_1;
                        var_17 = var_1;
                        var_18 = (((((((var_10 ? -31811 : (arr_0 [i_1]))) * ((max((arr_8 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]), (arr_8 [i_1] [i_1] [i_2] [i_3 - 2] [i_0]))))))) ? (((((((arr_7 [i_0]) - var_9)) + 2147483647)) << (var_3 - 7665))) : 31816));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_19 = ((var_9 ? (arr_10 [i_1] [i_1]) : (arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_1])));
                        var_20 = (max(var_20, (((6578 ? (arr_8 [i_0] [i_1 - 1] [i_2] [i_4] [i_1 - 1]) : (31816 * 31811))))));
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 ^= (arr_9 [8] [i_1] [i_1 + 1] [i_0]);
                        var_22 = (max(var_22, ((min(var_4, ((max(var_2, (arr_4 [i_1 - 1])))))))));
                    }
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
