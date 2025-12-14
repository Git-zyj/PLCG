/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_10, var_4));
    var_13 = (max(var_9, (max(var_8, var_3))));
    var_14 -= ((!((((((var_3 ? var_9 : var_8))) ? 9223372036854775780 : var_0)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_15 = ((!((((((66 ? 1 : 1))) ? (var_8 + 34308) : ((max(var_3, (arr_3 [i_0])))))))));
            var_16 = var_6;
            arr_4 [i_0] [i_0] = var_7;
        }
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_17 = (-66 == 12992342805146594320);
                        arr_13 [9] [i_0] [19] [i_4] = ((13105262057303476685 || (((arr_6 [i_2 - 2] [i_3 + 3] [i_0 + 1]) || 0))));
                        var_18 = (arr_12 [i_0] [i_0] [i_0] [10] [i_0] [i_0]);
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = var_10;
    }
    for (int i_5 = 3; i_5 < 8;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (max(var_10, ((((var_10 ? -734472655047702729 : -36))))));
        arr_18 [i_5] = var_7;
    }
    #pragma endscop
}
