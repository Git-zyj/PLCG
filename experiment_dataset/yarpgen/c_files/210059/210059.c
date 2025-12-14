/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (((!var_10) ? var_6 : ((var_1 ? ((max(var_0, var_2))) : (!var_7)))));
        var_13 = (~3741900562607711702);
        var_14 = (~-var_4);
        arr_5 [i_0] = max(var_4, -var_11);
        var_15 += var_1;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_16 |= (~-1122826538);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    var_17 = (((~(max(3741900562607711702, 3741900562607711688)))));
                    var_18 = (max(var_18, var_9));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_19 = (!-3741900562607711703);
        var_20 &= max((max(-3741900562607711703, 35871)), var_10);
    }
    #pragma endscop
}
