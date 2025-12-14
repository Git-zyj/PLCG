/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_20 = var_0;
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            {
                var_21 = -18446744073709551593;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_22 ^= 54516;
                            var_23 = ((~(((var_0 ? var_3 : 22)))));
                        }
                    }
                }
                var_24 = (min((((max((arr_3 [i_1] [i_2]), var_16)))), (((((arr_5 [1] [i_1]) ? (arr_7 [i_2]) : (arr_8 [19] [i_2] [i_2]))) / (arr_3 [i_1 + 2] [i_1 + 1])))));
            }
        }
    }
    var_25 = (((var_9 ? var_7 : var_14)));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_20 [i_7] [i_5] [11] = (((((min((arr_18 [i_6]), 1)))) * (((((arr_18 [i_5]) ? (arr_11 [i_5] [i_6]) : var_2))))));
                    var_26 = ((255 ? 3999870437362988659 : 18446744073709551615));
                }
            }
        }
    }
    #pragma endscop
}
