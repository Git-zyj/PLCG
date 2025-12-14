/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_7 ? -1300064241 : ((((min(var_11, 1300064217))) ? (!var_7) : ((var_4 ? var_12 : var_1)))));
    var_17 = -var_0;
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (((((arr_5 [i_2 - 2] [i_2]) % var_13))) ? (~7600854077302049330) : (arr_5 [i_2 + 4] [1]));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 = ((!((((arr_7 [i_1 - 1] [i_0] [i_2 + 1]) ? (arr_7 [i_1 - 1] [i_0] [i_2 + 1]) : (arr_7 [i_1 - 1] [i_0] [i_2 + 1]))))));
                        var_21 -= (arr_3 [i_1]);
                    }
                    var_22 = ((-1300064226 ? (((var_13 ? (arr_2 [i_0 - 1]) : var_10))) : ((-(((arr_10 [i_0] [i_0] [i_2]) ? 10248493921135636046 : var_9))))));
                }
            }
        }
    }
    var_23 = ((var_12 <= (~var_5)));
    #pragma endscop
}
