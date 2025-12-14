/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((min(((23 ? 817354534 : var_10)), var_2))), ((((max(-8192, var_3))) ? -7851427712548860168 : 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = ((!((max((arr_4 [i_2] [i_1 + 1] [i_2]), 1)))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_21 = 1;
                        var_22 = arr_2 [i_0] [i_2];
                        var_23 = ((~((((min(1, 1964512196))) ? ((1 ? 224 : -817354535)) : 8))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_24 = (arr_9 [i_4] [i_2] [i_1 - 1] [i_0]);
                        var_25 = ((((((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_10 [i_4] [i_4] [i_1 - 1] [i_1 - 1]) : (arr_10 [i_2] [i_2] [i_1 + 1] [i_1 - 1])))) ^ 14100622830438806706));
                        var_26 = var_12;
                    }
                    var_27 = (max(var_27, ((((((((arr_9 [i_0] [i_0] [i_1] [i_0]) * var_17)) * (min(var_13, var_16))))) ? 1 : 8193))));
                }
            }
        }
    }
    var_28 = var_5;
    var_29 = var_0;
    #pragma endscop
}
