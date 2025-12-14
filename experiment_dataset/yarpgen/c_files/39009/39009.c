/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_14 ? ((max(var_13, -6005764153938606447))) : ((var_7 ? var_11 : 5177093137646017471)))), 6005764153938606417));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 += (arr_9 [i_0 + 2] [i_2] [i_0 + 1]);
                    arr_10 [i_0] = (arr_5 [i_0] [i_1] [10]);
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        var_17 -= min((max(5177093137646017479, 25937)), ((min(var_2, (arr_12 [i_3 + 1])))));
        var_18 ^= (max((arr_11 [i_3 - 3]), ((max((arr_11 [i_3 - 3]), var_13)))));
    }
    #pragma endscop
}
