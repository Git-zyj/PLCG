/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 = ((min(1, (max(16232095767158558026, 1)))));
                                var_11 = ((((min(1, 246))) ? 3219888624779700132 : var_8));
                                var_12 = var_5;
                            }
                        }
                    }
                    var_13 = (min((min((930759943 + var_1), (arr_8 [6] [i_1 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]))), var_8));
                }
            }
        }
    }
    var_14 = (min(19, 182364218));
    #pragma endscop
}
