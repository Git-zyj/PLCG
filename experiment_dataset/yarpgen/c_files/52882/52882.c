/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((!(~36028797018963968)));
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_21 = var_1;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_22 = ((((max(4095, ((max((arr_0 [i_0]), var_15)))))) ? (~var_10) : (((!9569223656175199590) ? (((max(var_11, var_15)))) : var_10))));
                        var_23 = ((((max(((-6 ? 7778 : (arr_7 [12] [13]))), var_1))) ? (max(((-1311859337501392724 ? 61441 : 65535)), 61440)) : var_6));
                        var_24 = (((arr_4 [i_3]) ? (max((((arr_7 [i_0] [i_1 + 2]) ? 2775842818791603049 : (arr_3 [16] [16] [i_3]))), ((max(var_13, var_6))))) : 14));
                    }
                    var_25 = (max((((arr_1 [i_1 - 3] [i_1 - 2]) ? (arr_1 [i_1 + 2] [i_1 - 2]) : 1)), -var_18));
                }
                var_26 = var_6;
            }
        }
    }
    #pragma endscop
}
