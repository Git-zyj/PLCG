/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((-(1947003774991751890 ^ 134217727))) * var_3));
    var_11 ^= 25013099;
    var_12 = 50441;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 ^= ((-(max((arr_5 [1] [i_0] [i_0 + 1] [i_4 - 3]), ((var_1 ? (arr_1 [i_0]) : 100))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_4] [3] [i_3] = (((min((((arr_11 [i_0] [i_4] [i_2] [i_4] [i_4] [i_2]) | var_5)), var_1)) <= (arr_4 [i_0] [i_1] [i_2])));
                                arr_14 [10] [i_2] [i_2] [i_2] [i_3] [i_4] &= (((arr_9 [i_1] [i_0 - 1] [i_4 - 3]) || ((min((var_6 % 1), ((-816821370 ? var_0 : (arr_8 [i_0] [i_0] [9] [1]))))))));
                                var_14 = (max(var_14, ((max(1792, var_5)))));
                            }
                        }
                    }
                }
                var_15 = (max(var_15, -14892));
            }
        }
    }
    #pragma endscop
}
