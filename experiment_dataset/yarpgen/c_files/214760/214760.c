/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 516496514));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = max((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))), 11769);

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_2] [i_2 + 1] = var_2;
                    var_12 *= ((((((var_9 ? (arr_4 [i_0]) : var_8)) ^ (var_5 / var_9))) <= ((((48857 || (((var_1 ? 60899 : 4636)))))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_13 = var_8;
                    arr_10 [5] = -67;
                    var_14 = ((-(max((((arr_3 [1] [i_0] [0]) / -244124885)), -1883152057))));
                    arr_11 [i_3] [i_3] [i_3] [i_3] = max(((((max(var_5, var_0))) ? (arr_0 [i_3]) : (!var_1))), ((var_3 ? -var_2 : 4294967294)));
                }
            }
        }
    }
    #pragma endscop
}
