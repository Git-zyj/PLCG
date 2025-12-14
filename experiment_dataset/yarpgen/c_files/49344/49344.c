/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, 2594655440706520970));
                                var_20 = (((((arr_0 [i_0] [i_1]) / (arr_2 [i_0] [i_1] [i_4])))) ? (arr_2 [i_3 + 1] [i_1] [i_0]) : (((arr_0 [i_4] [18]) / (arr_2 [i_0] [i_0] [i_2 - 1]))));
                            }
                        }
                    }
                }
                var_21 |= ((((max(var_6, (0 >= var_14)))) >= var_18));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_22 = var_11;
                var_23 = ((((var_17 ? var_13 : 61)) ^ var_1));
                var_24 = (min(var_24, (((23 / (((-9223372036854775807 - 1) ^ 7303623521661263073)))))));
            }
        }
    }
    var_25 = 0;
    #pragma endscop
}
