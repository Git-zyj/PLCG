/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 208));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (arr_5 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [7] [i_1] [1] [7] [9] [i_3] = ((10442 ^ (arr_6 [i_3] [4])));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (((min((arr_11 [1] [i_4 + 1] [13] [15] [i_4]), (arr_3 [i_0 + 2] [i_1]))) - var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
