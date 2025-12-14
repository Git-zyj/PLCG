/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_10 [i_4] = (max(-26312, (((arr_9 [i_0] [i_0] [8] [1]) ? -var_7 : -7625))));
                                var_15 = (max(((var_13 >> (((arr_4 [i_4 + 3] [i_3] [i_1 + 1] [i_1 - 1]) - 1089044483820720998)))), -26312));
                            }
                        }
                    }
                    var_16 = (min(var_16, (((((min(115, (arr_1 [1] [i_2])))) || (((arr_4 [i_1] [i_1 - 2] [i_1] [i_1 + 2]) < (arr_8 [i_1] [i_1] [i_1] [i_1] [8] [i_1 + 2] [i_1]))))))));
                    var_17 ^= ((120 ? 88 : 7635638580658910697));
                }
            }
        }
    }
    var_18 = (max(var_13, var_14));
    var_19 = (max((((((min(-2260004191418655844, var_12))) ? var_9 : -var_8))), var_1));
    #pragma endscop
}
