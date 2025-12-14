/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = var_14;

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_16 &= (~134217727);
                        var_17 = (min(var_17, var_4));
                        var_18 = (max(var_4, (max(var_4, (((arr_0 [i_0 - 2]) / 8))))));
                        var_19 = ((min((arr_4 [i_1] [i_2 - 2]), var_10)) / var_8);
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_20 = max(((max(1691151064, 1691151071))), (max(38998, (~var_0))));
                        var_21 = var_14;
                    }
                    var_22 = (((max((max((arr_14 [i_1]), 1691151042)), (arr_13 [i_2] [i_1] [i_1] [i_0] [i_0]))) >= var_14));
                    var_23 = ((!((max((min(var_12, var_14)), (((var_0 || (arr_6 [i_0])))))))));
                }
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
