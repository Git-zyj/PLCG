/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] [i_0] [i_0] = (min((arr_3 [i_1]), (((((0 ? var_5 : (arr_4 [i_0] [i_1]))) / (arr_0 [i_0]))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_2] [i_0] [i_0] = ((((var_1 >= (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    var_14 = (((-108 ? (max(76, var_6) : (((min((arr_4 [i_2] [i_1 + 1]), (arr_0 [i_0])))))))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_15 = ((var_10 ? (((((arr_0 [i_1 + 1]) >= (arr_0 [i_1 + 1]))))) : (arr_5 [i_1] [1])));
                                var_16 &= max((((-((max((arr_15 [i_3]), 0)))))), (max(3572163998586560799, (max(14874580075122990814, 1)))));
                                var_17 = (min(var_6, ((14874580075122990822 ? 12957639682473306650 : 0))));
                                arr_19 [i_3] [i_3] [i_4] = ((((((arr_11 [i_1 + 1]) != ((((arr_0 [i_3]) && var_1)))))) | (var_1 - var_5)));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_0] = var_6;
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
