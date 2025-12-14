/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (var_8 ^ -var_3);
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = ((((arr_5 [i_0 - 1] [i_1 - 2] [i_3 + 1] [i_2]) ? (arr_5 [i_0 - 1] [i_1 + 1] [i_3 + 2] [i_2]) : (arr_5 [i_0 - 1] [i_1 + 1] [i_3 + 3] [i_2]))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_15 = (min(var_15, ((max((arr_1 [i_3 - 2]), var_1)))));
                                arr_12 [i_3] [0] [i_3] [7] [i_2] [i_3] = (arr_1 [i_3]);
                            }
                        }
                    }
                }
                var_16 = (min((((arr_5 [i_0 - 1] [i_1 - 1] [4] [10]) ^ (arr_5 [4] [i_1] [i_0 + 1] [4]))), ((((arr_4 [i_0 - 1] [i_0 + 1] [i_1]) && (arr_7 [i_0] [i_1 - 1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
