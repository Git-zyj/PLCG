/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_8 + var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [12] [i_1 - 2] [i_2] = (arr_1 [i_0]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 = (((arr_2 [i_1 - 3] [i_1 + 1] [i_1]) ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1]) : 189769082732034578));
                        var_22 = var_5;
                        arr_10 [i_0] = 4279819667;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_23 -= (((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1]) ? (arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1]) : (arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1])));
                        var_24 = 7703818629984255710;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_25 ^= arr_5 [i_0] [i_1] [i_0] [i_5];
                                var_26 = (min(var_26, 33294));
                                var_27 = (max(var_27, (arr_8 [i_0] [13] [13])));
                                var_28 ^= (-2147483647 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
