/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_1);
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((((((1 ? (arr_4 [i_0]) : (arr_1 [i_0]))))) % (1 == 1)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] [i_4] [i_1] = (max(((((((arr_9 [i_0] [16] [i_0]) ? 1 : 1))) ? 54400 : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2]))), (max(182, 163207852))));
                                var_22 = (max(3887434095, 163207859));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
