/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((((((var_7 / var_9) + var_1))) ? (((arr_2 [i_0]) % 12811103284619060117)) : ((((((arr_1 [i_2] [i_2]) == 8)) ? ((var_10 >> (((arr_1 [i_0] [i_0]) + 142389822)))) : ((-(arr_6 [1] [i_2]))))))));
                    arr_7 [i_0] [14] [i_2] = (min((((arr_3 [i_0] [i_0]) ? (max((arr_5 [i_0] [i_1] [i_2]), (arr_1 [i_0] [i_1]))) : (((1 ^ (arr_4 [i_1])))))), 114));
                    arr_8 [i_0] = ((((((arr_2 [i_0]) - -5263))) ? (arr_0 [i_0]) : ((-5281 ? 1 : 1))));

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        var_14 = (arr_11 [i_1]);
                        var_15 = ((((min(238, var_12))) ? (!1) : (!var_12)));
                        var_16 ^= -var_12;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 -= var_11;
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = (!-var_6);
                        arr_17 [i_0] [i_0] = (~var_1);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 = (arr_3 [i_1] [i_2]);
                        var_19 = (max(var_9, 64494));
                        var_20 = (arr_18 [i_0] [i_1] [i_5] [i_5]);
                    }
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
