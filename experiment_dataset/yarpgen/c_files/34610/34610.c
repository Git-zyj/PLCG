/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? 19094 : (((((max(var_2, 102))) >= ((var_11 ? var_9 : var_0)))))));
    var_13 = (max(var_13, (((max(var_1, (var_4 | 1)))))));
    var_14 = ((-(((((var_7 ? var_0 : -1489477959))) ? (min(var_3, var_2)) : (((max(var_0, var_7))))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_15 = ((~((min((arr_3 [i_1 + 2] [i_0 + 1]), (arr_3 [i_1 - 2] [i_0 + 1]))))));
            var_16 = (min(var_16, ((max(-1, -2147483646)))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_16 [i_0 + 1] [i_2] [i_3] [i_0] [i_5] = (~-102);
                            arr_17 [i_0] [2] [i_0] [i_5] [i_5] [i_2] = (arr_9 [i_0]);
                        }
                    }
                }
                arr_18 [i_0 + 1] [i_0 + 1] [i_0] = (((arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_2 - 2] [i_2]) * (!-51)));
                arr_19 [i_3] [i_0] = 19100;
            }
            arr_20 [i_0] [i_0] [i_2] = (((-3663402963296444237 ? 1 : -101)));
        }
        var_17 = (max(var_17, (((arr_8 [18]) ? 8 : var_10))));
    }
    #pragma endscop
}
