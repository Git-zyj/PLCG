/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 16320;
    var_13 = 8415836785002861126;
    var_14 = (max(var_14, ((((~8415836785002861133) | (-243 || -8415836785002861112))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((8415836785002861130 - ((+(max((arr_3 [i_0]), var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = ((!(((1 ? (-8415836785002861136 || 34207) : 0)))));
                            var_16 = 1;
                        }
                    }
                }
                var_17 = (((var_7 || -3406) > var_5));
            }
        }
    }
    #pragma endscop
}
