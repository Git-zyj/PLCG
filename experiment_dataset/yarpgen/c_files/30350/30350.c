/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (!var_14);

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 *= (arr_0 [i_0 + 2] [i_0 + 3]);
                    var_17 = (max((((arr_3 [i_1 + 3] [i_1 - 1] [i_0]) ? -var_6 : ((3580018241 ? 10675635142615968489 : 7771108931093583126)))), var_6));
                    var_18 = (arr_3 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_19 = (((!((max(var_13, 7771108931093583106))))));
    var_20 = var_4;
    #pragma endscop
}
