/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((21 && ((((min(var_8, 212756524676490720)) | var_2))))))));
    var_11 = (((var_9 ? 9 : 253)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (-((var_3 ? (min(60177322, 8829865799476504996)) : ((((arr_4 [i_0] [i_1]) ? (arr_7 [i_0] [1] [1]) : (arr_4 [i_0] [i_0])))))));
                    var_13 *= (155608592 | 134217727);
                }
            }
        }
    }
    #pragma endscop
}
