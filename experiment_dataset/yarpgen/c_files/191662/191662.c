/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] [i_2] [i_3] [i_1] [i_3] |= ((!((var_0 == (arr_0 [i_0] [i_1])))));
                            var_20 = ((~(((((var_14 / (arr_5 [i_0] [i_3] [i_0])))) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]) : (arr_0 [i_1] [i_3])))));
                            var_21 += ((arr_6 [i_2] [i_1] [i_2]) & (((arr_2 [i_1]) ? 128 : 9)));
                            var_22 -= (((arr_8 [i_2] [i_1] [i_2] [i_2] [i_1] [i_3]) || (((((((var_10 % (arr_7 [i_0] [i_0] [i_3]))) + 2147483647)) << (var_6 - 79))))));
                        }
                    }
                }
                var_23 ^= ((~(((arr_7 [i_1] [i_0] [i_0]) - var_8))));
            }
        }
    }
    var_24 = var_12;
    var_25 = ((38 ? var_4 : -var_14));
    #pragma endscop
}
