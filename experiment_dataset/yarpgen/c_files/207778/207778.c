/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 += 1;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_14 = ((2093105244 ? var_0 : ((((var_10 < 1) ? (arr_1 [i_0]) : var_4)))));
                        var_15 = 31498;
                        var_16 = var_6;

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_17 = (max(var_17, -29471));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = ((var_10 ? (-var_9 * 42117) : (arr_4 [i_0])));
                            var_18 = (((!(arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [i_4 + 3]))));
                            var_19 = (arr_10 [i_4] [i_3] [i_2] [i_0]);
                            var_20 = ((((var_10 ? -1 : ((var_6 ? (arr_0 [i_0 - 1]) : 5)))) * 65519));
                        }
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_16 [i_0 - 1] [i_5] [1] [i_5] [i_5] [i_0 - 1] |= 9358;
                        var_21 = ((var_5 ? 230 : var_10));
                    }
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
