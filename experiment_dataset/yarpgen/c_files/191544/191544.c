/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_5, 30261));
    var_12 = (max(((-71 ? -8 : 35257)), var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 - 1] = ((-(!var_8)));
                    arr_8 [i_0] [4] [4] = (arr_5 [i_0] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_13 = (min(1, (arr_9 [i_3 - 1] [i_3 + 1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_18 [i_3] = (max(((-(arr_11 [i_3] [i_3 + 1]))), var_9));
                            var_14 = var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
