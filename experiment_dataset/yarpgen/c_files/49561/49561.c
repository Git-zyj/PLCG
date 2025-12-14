/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((!((((arr_0 [i_0] [i_2]) ? (0 || 1) : 1))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (~1);
                        var_18 = (max(var_18, (arr_2 [i_2])));
                        var_19 = ((((((arr_8 [i_0] [i_0] [i_2]) ^ (max(1, var_8))))) ? (arr_0 [i_1] [i_1]) : 1));
                    }
                    var_20 *= (arr_1 [10]);
                }
            }
        }
    }
    var_21 &= (var_11 && var_9);
    #pragma endscop
}
