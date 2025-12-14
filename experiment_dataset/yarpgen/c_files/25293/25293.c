/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-21353, 5654323386844335765));
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(var_9, ((65513 ? (0 & -478297221) : -1620336011)))))));
                    var_17 = var_5;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                {
                    var_18 = 1620336023;
                    var_19 = (max(var_19, var_9));
                }
            }
        }
    }
    #pragma endscop
}
