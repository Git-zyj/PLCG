/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 9223372036854775797;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (((1 << (arr_13 [0] [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 2] [i_3 - 1]))) < (((arr_13 [i_0] [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_3 - 1]) ? var_0 : (arr_13 [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_3 - 1]))));
                                var_15 = var_2;
                                var_16 = (((!123) ? ((((!(arr_12 [13] [i_1] [i_1] [1]))))) : var_2));
                                var_17 = ((!((max(3752440194352933251, (!120))))));
                            }
                        }
                    }
                }
                var_18 -= (+((((((-32765 + 2147483647) << (var_11 - 170))) > var_11))));
                var_19 = var_2;
                var_20 += var_8;
            }
        }
    }
    var_21 &= var_9;
    var_22 = 3;
    var_23 ^= 1125;
    #pragma endscop
}
