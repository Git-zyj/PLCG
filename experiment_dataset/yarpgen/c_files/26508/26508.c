/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((7537418328278450438 ? (((arr_2 [12]) ? 9981506059358245263 : -882373689)) : -398634819))) ? (((min(25840, 191)))) : (min((((arr_5 [i_1] [18] [0]) - var_6)), 242)))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (min(((149 ? (min(-10, 3433354298810528273)) : (((arr_14 [i_0] [i_1 + 3] [i_2] [i_3 - 2] [i_4]) ? var_5 : var_0)))), ((((arr_9 [i_4] [i_4] [i_3 + 1] [i_2 - 2] [i_1 + 4]) ? (arr_9 [i_4] [4] [i_3 + 2] [i_2 - 1] [i_1 - 2]) : 12)))));
                                var_13 = (min((((arr_13 [i_2 + 1] [8] [i_2 + 1] [i_2 - 3] [i_2 - 2]) ? var_4 : 12119247585567572755)), ((((var_2 ? var_6 : 993)) ^ var_10))));
                            }
                        }
                    }
                }
                var_14 = (arr_13 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]);
            }
        }
    }
    var_15 = (~var_8);
    #pragma endscop
}
