/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1 * var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 |= (arr_8 [i_0] [10] [1] [i_3]);
                            var_20 -= ((~(((arr_2 [15] [15]) ? 67582882 : (((-1693689511 ? (arr_1 [i_1] [i_2 + 1]) : 1693689498)))))));
                        }
                    }
                }
                var_21 = (max(var_21, ((((((arr_10 [i_0] [5] [i_0] [i_0] [5] [i_1]) + 2147483647)) >> (67582872 - 67582842))))));
                arr_12 [i_1] = max((((arr_6 [3] [i_1] [i_1] [i_1]) * (arr_6 [i_0] [i_0] [i_1] [i_0]))), ((1693689510 | (arr_6 [i_0] [i_0] [i_1] [i_1]))));
                var_22 = (max(var_22, (((((((min(var_8, -67582883)) + 2147483647)) >> 1)) / var_1))));
            }
        }
    }
    #pragma endscop
}
