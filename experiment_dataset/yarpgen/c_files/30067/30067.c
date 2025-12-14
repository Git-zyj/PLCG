/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-32767 - 1);
    var_21 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = var_13;
                                var_23 = ((!(~50259)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = ((max((min(919809229, 50240)), (arr_6 [i_6 + 2]))));
                                arr_19 [i_0] [i_6] [i_2] [i_5] [i_0] = var_9;
                            }
                        }
                    }
                    var_25 = 50266;
                }
            }
        }
    }
    #pragma endscop
}
