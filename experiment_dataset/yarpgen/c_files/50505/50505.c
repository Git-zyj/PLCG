/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((((0 ? -6740328079107254425 : 0)) + -6740328079107254433))));
    var_15 = ((6740328079107254440 ? 63 : 32737));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = var_12;
                    arr_8 [i_0] = 28;
                    var_16 = (max(var_16, ((max(0, 0)))));
                    arr_9 [i_0] [i_1] = (max((((arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 3]) / (((var_7 ? 9854 : 3))))), 0));
                }
            }
        }
    }
    #pragma endscop
}
