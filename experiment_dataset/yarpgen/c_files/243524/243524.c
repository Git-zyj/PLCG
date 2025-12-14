/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 ^= ((-(((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1])))));
                arr_7 [i_1] [i_1] = ((((min(var_0, var_6))) % (max(((((arr_3 [i_0 - 1] [15] [i_1]) ? var_7 : var_5))), var_4))));

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    arr_11 [1] [i_2 - 2] = (min(((((((arr_9 [i_0 - 1] [1] [i_2 - 1]) + 2147483647)) << ((((-(arr_6 [i_0]))) - 215005811))))), ((0 ? var_5 : (!var_4)))));
                    var_12 = var_7;
                    arr_12 [1] [i_1] [i_1] = (arr_3 [2] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (!((((arr_4 [i_0] [i_0] [i_4 - 1]) ^ (min((arr_15 [i_4] [i_1] [i_0 - 1]), (arr_1 [16])))))));
                                var_14 ^= (max(var_6, ((((!2210) && (((~(arr_3 [i_0] [i_1] [i_0])))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_15 = 8;
                    arr_20 [i_5] = var_3;
                }
                var_16 = (1 && 0);
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
