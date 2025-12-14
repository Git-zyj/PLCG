/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((~((max(30, 235))))) % (max(var_14, (~var_3)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, ((max((arr_0 [4] [4]), (((37 ? -30 : (max((arr_1 [i_0]), 1))))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1 - 1] [i_1] = (arr_5 [i_0] [i_0] [i_1] [i_2 + 2]);
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 1] = ((-235 ? (max((((30 / (arr_0 [i_0] [i_0])))), (((arr_8 [i_0] [i_0]) / var_15)))) : (arr_0 [i_0] [i_0])));
                    }
                }
            }
        }
        arr_11 [i_0] = (-(((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [1] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [10] [10]))));
    }
    var_19 = (max(var_1, ((((var_10 | var_12) && var_14)))));
    #pragma endscop
}
