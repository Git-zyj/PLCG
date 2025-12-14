/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_1));
    var_18 ^= (max(var_1, var_3));
    var_19 = ((min(var_0, var_10)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((max(18446744073709551604, (~var_4)))) ? (((min(var_7, var_9)) * (max(-11397, 12)))) : ((((((arr_2 [i_0 - 2] [i_0 - 2]) ? var_8 : var_15))) ? var_9 : (((arr_0 [i_1]) * var_10)))))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_2] [16] [i_0] = (~(max(var_8, (min(var_7, var_3)))));
                    var_21 = (-(min((arr_1 [i_0 + 1]), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2]))));
                    var_22 += min(var_8, (max((min(var_4, var_7)), (min((arr_4 [i_0] [i_1] [i_2]), var_13)))));
                    var_23 = (max(var_23, ((-(max((((arr_3 [i_0] [i_0] [11]) | var_7)), var_16))))));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_24 = (~var_9);
                                arr_16 [15] [i_3] [i_4] [i_3] [4] [i_1 + 2] [i_0 - 2] = ((((var_6 ? var_16 : var_11)) - (!15383)));
                                arr_17 [i_1 + 3] [4] [i_3] [i_3] [i_5] [i_0] = (((((var_10 / (arr_14 [i_5] [i_4 - 4] [i_3] [i_1] [i_0])))) ? ((var_15 / (arr_15 [i_5] [i_4] [i_4] [i_3] [i_1] [i_0]))) : (var_10 / var_4)));
                            }
                        }
                    }
                    arr_18 [i_3] [i_1] [i_0 + 1] &= (-(((arr_12 [i_0] [i_0] [i_0] [i_0]) + (arr_14 [4] [i_1] [3] [i_3] [4]))));
                }
                var_25 = (((12 <= -15383) + (((((((arr_10 [i_0]) ? 10299210846580606752 : var_0))) || ((((arr_3 [i_0] [i_1] [i_1]) ? var_0 : var_9))))))));
                var_26 &= var_12;
            }
        }
    }
    #pragma endscop
}
