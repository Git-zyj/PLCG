/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((~(min((arr_5 [i_1 + 1] [i_1]), (((arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4]) ? var_12 : (arr_4 [i_1])))))));
                                var_14 = ((((var_6 / (arr_0 [i_1 - 1] [i_1 + 1]))) - (((((arr_5 [i_0] [i_1]) <= var_12))))));
                                var_15 = 444521314;
                                var_16 |= ((!(((arr_5 [i_1 - 1] [4]) && (arr_5 [i_1 + 1] [1])))));
                            }
                        }
                    }
                    var_17 = 3850445984;
                }
            }
        }
    }
    var_18 = ((~(~var_11)));
    #pragma endscop
}
