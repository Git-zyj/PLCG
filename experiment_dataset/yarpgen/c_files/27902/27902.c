/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (var_12 / var_2)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (arr_0 [i_1] [i_1]);
                    var_20 = ((min(-17, 59)));
                    var_21 = (min(var_21, (((((((min((arr_6 [4] [i_2] [4] [4]), (arr_7 [i_0]))) / (((3545558191327799358 ? var_1 : 63)))))) - (max((arr_6 [i_2] [i_2] [i_2] [i_0]), (arr_2 [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_22 = (min(var_22, ((((max(var_16, var_3)))))));
    var_23 = ((((max(var_1, var_0))) ? (min((max(var_16, var_6)), var_7)) : -45));
    #pragma endscop
}
