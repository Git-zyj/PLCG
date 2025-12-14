/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((((~var_13) ? (min(var_4, var_7)) : (~var_1)))) ? (max((var_3 & var_4), (max(var_2, var_5)))) : ((max((var_8 << var_12), (0 << var_7)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 -= (2294337873 && 262143);
                    arr_8 [i_2] [i_2] [i_2] [i_2] = 0;
                    var_18 = (((((arr_6 [i_0] [i_0] [i_0]) ? (var_13 - var_5) : (((arr_7 [12] [i_1 + 1]) * (arr_4 [i_0]))))) >= (!var_6)));
                }
            }
        }
    }
    var_19 |= (max(var_2, (((var_1 < var_0) | ((var_11 ? var_12 : var_0))))));
    #pragma endscop
}
