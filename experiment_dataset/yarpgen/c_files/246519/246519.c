/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = var_11;
                        arr_9 [i_0] [i_1] [1] [i_3] = (((max((arr_7 [i_0] [i_1] [i_2] [i_3]), 7)) - ((((max(20, var_6)))))));
                    }
                }
            }
        }
        var_17 = (max(var_17, (min(249, 127))));
        var_18 &= ((((((!(var_1 % var_7))))) / (min(var_8, (((arr_6 [2] [i_0] [i_0] [i_0]) << (var_14 - 180)))))));
    }
    var_19 = var_5;
    var_20 = var_7;
    var_21 = (min(var_14, ((max((!46), (var_4 || var_0))))));
    #pragma endscop
}
