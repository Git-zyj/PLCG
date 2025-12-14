/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (min((max(-98, (max(-98, 117)))), (((!(var_10 - var_4))))));
        arr_3 [i_0] = (max((((arr_2 [i_0]) + (arr_0 [i_0] [i_0]))), (((((min((arr_1 [i_0]), (arr_2 [i_0])))) >= (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 *= -var_0;
        var_19 = (3567418621731413092 < -98);
        arr_6 [i_1] = var_4;
        var_20 = (min(var_20, (((~(arr_1 [i_1]))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_21 *= (arr_0 [i_2 - 3] [i_4]);
                    var_22 = ((~(((!(arr_13 [i_2 - 3]))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 = (((-18 <= 0) >> (arr_2 [i_2])));

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_24 = (max(var_24, var_8));
                            arr_19 [i_5] [i_5] [i_5] = (~var_2);
                            var_25 = (min(var_25, (((117 ? -117 : 1)))));
                        }
                        var_26 = (min(var_26, ((max((((((-1525210321801826840 ? -52 : -52)) + ((-(arr_1 [i_2])))))), var_14)))));
                        arr_20 [i_2] [i_4] [i_2 - 3] [i_2] &= (max((((max((arr_16 [i_2 + 2] [i_3] [i_4] [i_5] [i_5]), var_2)))), (((var_16 ? 2281045143555152431 : var_8)))));
                    }
                }
            }
        }
    }
    var_27 *= (!-1);
    var_28 |= var_8;
    #pragma endscop
}
