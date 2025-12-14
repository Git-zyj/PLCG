/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((max(var_8, var_5)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (min(30367, ((max(120, 0)))));
                                var_17 = 3635072957051868072;
                                var_18 &= (min(1127846985, 2254280679));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = -1;
    #pragma endscop
}
