/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((-var_16 + (((arr_0 [i_0] [i_0]) - var_15)))));
                var_19 = (~(arr_4 [i_1]));
                var_20 = ((((max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 + 1])))) ? 1023274875 : (var_4 != -24421)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [i_2] [i_1] [i_1] [2] = (min(9223372036854775807, 1225988210938150673));
                            var_21 = 9223372036854775807;
                            var_22 = ((~((-(arr_2 [4] [i_2 + 3])))));
                        }
                    }
                }
                var_23 = (max(var_23, (((((((min((arr_4 [8]), 1091071734))) ? (arr_9 [i_0] [7] [3]) : 480)) < (arr_9 [5] [i_0] [5]))))));
            }
        }
    }
    var_24 = (max(var_24, ((!(((min(5130698293637766246, var_2)) >= var_7))))));
    #pragma endscop
}
