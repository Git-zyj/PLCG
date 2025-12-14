/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (var_6 || (((1923206361 ? -2 : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (((arr_3 [i_0] [i_0]) + ((((min(var_9, var_13))) - (arr_5 [4] [i_1] [4])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [17] [i_3] = (max(((((arr_9 [i_3 - 1] [1] [i_3] [i_3 - 1] [i_3 - 1] [i_1 + 1]) >= (arr_9 [i_2] [i_3 - 1] [i_3 - 1] [i_4] [i_1] [i_1 - 1])))), (arr_6 [i_4] [i_1] [i_2] [i_3 + 1])));
                                var_22 = (max(-var_3, (arr_2 [i_0])));
                                arr_14 [22] [i_1] [i_0] [i_3 - 1] [8] = ((((((var_8 >= (arr_10 [i_3 + 1] [i_3 + 1] [i_1] [i_1 + 1]))))) % (((arr_10 [i_3 - 1] [i_3 + 1] [i_1] [i_1 - 1]) ? (arr_10 [i_3 - 1] [i_3 + 1] [8] [i_1 + 1]) : (arr_10 [i_3 - 1] [i_3 + 1] [i_3] [i_1 + 1])))));
                                var_23 = (arr_2 [7]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = (arr_8 [i_1 + 1] [i_0] [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
