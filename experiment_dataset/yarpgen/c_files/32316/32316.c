/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_19);
    var_21 = (max(var_21, 98));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((~var_18) ? var_5 : ((123 ? ((-2140407425 ? -6923642860887502690 : 1)) : ((((arr_3 [i_1]) / var_4)))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_3 - 2] [i_0] [i_2] [i_0] [i_0] = ((0 ? (((arr_4 [i_2 + 3] [i_3 + 1] [i_0]) | var_2)) : 1));
                        var_22 = ((-30235 ? var_16 : ((-29979 + (arr_9 [i_0 - 2] [1] [i_0] [i_0 + 3])))));
                        arr_12 [i_0 + 2] [i_0 + 1] [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 2] &= -38;
                    }
                    var_23 = (min(((98 ? -1 : (arr_9 [i_0 - 2] [9] [i_0] [i_0]))), ((max((arr_9 [i_1] [i_1 - 1] [i_0] [i_1 - 1]), (arr_0 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
