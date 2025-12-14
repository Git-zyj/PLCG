/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_11 = -var_9;

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_12 = ((55314 ? 18311 : 10241));
                        var_13 = ((55295 ? 30463 : 55286));
                        var_14 = (((arr_11 [i_1] [i_1 - 1] [i_1 + 3] [i_2]) ? 55275 : (arr_11 [i_0] [i_1 - 1] [i_2] [i_3])));
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_15 = (!-var_9);
                        arr_15 [i_4] [i_2] [i_2] [i_0] |= ((31034 ? (arr_2 [i_4 - 1]) : (arr_10 [i_4 + 2] [i_4 + 2])));
                    }
                    var_16 = ((((arr_9 [i_0]) ? var_10 : 10499078579030883421)));
                }
                var_17 = (max(var_17, ((min(((~((max(24190, 1))))), ((-4 ? 24757 : (arr_3 [i_0] [i_1 + 1] [i_0]))))))));
            }
        }
    }
    var_18 = (max((!var_7), ((var_6 ? ((max(var_9, var_9))) : var_10))));
    var_19 = ((((~1) ? var_4 : 65535)));
    #pragma endscop
}
