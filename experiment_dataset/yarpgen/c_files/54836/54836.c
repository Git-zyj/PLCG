/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_2, ((var_9 ? -107 : var_4))))) ? (max(var_7, var_8)) : var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min((max((arr_0 [i_0]), 4893762130482505567)), var_11));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (max((((var_4 ? 14 : var_8))), 20));
                    var_14 = (min(var_14, ((((var_5 / 4893762130482505579) ? (((min(var_0, 8452455766667478098)) * (((min(var_3, var_0)))))) : ((min((arr_1 [i_1]), (min(67108862, 128))))))))));
                }
            }
        }
    }
    var_15 = (min(var_15, 31014));
    #pragma endscop
}
