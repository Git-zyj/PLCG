/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [7] = 1;
                    var_15 = 1450428435;
                    arr_8 [i_2] [i_1 - 1] [13] [i_2] = 127;
                }
            }
        }
    }
    var_16 = 1450428432;
    var_17 = 1;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [6] = -110;
                    var_18 = (-127 - 1);
                }
            }
        }
    }
    var_19 = 674774195;
    #pragma endscop
}
